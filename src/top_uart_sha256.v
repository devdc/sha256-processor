`timescale 1ns/1ps
/*
 *  Revised to work with:
 *      uart_rx #( .CLK_FRE(MHz), .BAUD_RATE )  (see uart_rx.v)
 *      uart_tx #( .CLK_FRE(MHz), .BAUD_RATE )  (see uart_tx.v)
 *
 *  Key interface changes
 *  ---------------------
 *  • Active-low reset  →  pass ~rst to rst_n
 *  • RX needs rx_data_ready      – we keep it high (always ready)
 *  • TX uses (tx_data_valid , tx_data_ready) handshake
 *    instead of (tx_start , tx_busy)
 */

module top_uart_sha256 #(
    parameter CLK_FREQ = 27_000_000,   // Hz
    parameter BAUD     = 115200
)(
    input        clk,
    input        rst,       // active-high
    input        uart_rx,   // serial in
    output       uart_tx    // serial out
);

    // ────────────────────── Clock-rate helper ────────────────────────────
    // New cores expect CLK_FRE in MHz (integer)
    localparam integer CLK_FREQ_MHZ = CLK_FREQ / 1_000_000;

    // ────────────────────── UART RX interface ────────────────────────────
    wire [7:0] rx_data;
    wire       rx_valid;

    uart_rx #(
        .CLK_FRE   (CLK_FREQ_MHZ),
        .BAUD_RATE (BAUD)
    ) uart_rx_inst (
        .clk            (clk),
        .rst_n          (~rst),      // active-low
        .rx_data        (rx_data),
        .rx_data_valid  (rx_valid),
        .rx_data_ready  (1'b1),      // always ready – consume immediately
        .rx_pin         (uart_rx)
    );

    // ────────────────────── UART TX interface ────────────────────────────
    reg        tx_data_valid = 1'b0;   // 1-cycle pulse when we have a byte
    reg [7:0]  tx_data       = 8'd0;
    wire       tx_ready;               // 1 = idle / ready for next byte

    uart_tx #(
        .CLK_FRE   (CLK_FREQ_MHZ),
        .BAUD_RATE (BAUD)
    ) uart_tx_inst (
        .clk            (clk),
        .rst_n          (~rst),
        .tx_data        (tx_data),
        .tx_data_valid  (tx_data_valid),
        .tx_data_ready  (tx_ready),
        .tx_pin         (uart_tx)
    );

    // ────────────────────── SHA-256 processor ────────────────────────────
    reg         start_hash = 1'b0;
    reg         data_valid = 1'b0;
    reg         data_last  = 1'b0;
    reg  [7:0]  data_in    = 8'd0;
    wire [255:0] hash_out;
    wire         hash_done;

    sha256_processor processor (
        .clk        (clk),
        .rst        (rst),
        .start      (start_hash),
        .data_in    (data_in),
        .data_valid (data_valid),
        .data_last  (data_last),
        .hash_out   (hash_out),
        .done       (hash_done)
    );

    // ────────────────────── Control state machine ───────────────────────
    reg [2:0] state;
    localparam IDLE = 0, RECEIVE = 1, WAIT_DONE = 2, SEND = 3, DONE = 4;

    reg [7:0] byte_counter;
    reg [6:0] send_index;   // 0-63 → 64 hex nibbles (256-bit digest)

    reg        have_hold;     // 1 = hold_byte contains a payload byte
    reg [7:0]  hold_byte; 

    reg [255:0] shift_reg;

    reg        tx_ready_d;      // 1-cycle delayed copy of tx_ready

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            tx_ready_d <= 1'b0;
            have_hold <= 1'b0;
            hold_byte <= 8'd0;

            state        <= IDLE;
            data_valid   <= 0;
            data_last    <= 0;
            start_hash   <= 0;
            tx_data_valid<= 0;
            byte_counter <= 0;
            send_index   <= 0;
        end else begin
            // defaults every cycle
            tx_ready_d <= tx_ready;     // remember previous value each cycle
            data_valid    <= 0;
            data_last     <= 0;
            start_hash    <= 0;
            tx_data_valid <= 0;

            case (state)
                IDLE: begin
                    if (rx_valid && rx_data == 8'h01) begin
                        start_hash <= 1;
                        byte_counter <= 0;
                        state        <= RECEIVE;
                    end
                end

                RECEIVE: begin
                    if (rx_valid) begin
                        if (rx_data == 8'hFF) begin          // -------- terminator --------
                            // forward the *previous* byte as the last one
                            if (have_hold) begin
                                data_in     <= hold_byte;
                                data_valid  <= 1'b1;
                                data_last   <= 1'b1;         // flag last
                                byte_counter<= byte_counter + 1;
                            end
                            have_hold <= 1'b0;               // clear buffer
                            state     <= WAIT_DONE;

                        end else begin                       // -------- normal payload --------
                            // first, push out the byte we were holding (if any)
                            if (have_hold) begin
                                data_in     <= hold_byte;
                                data_valid  <= 1'b1;
                                byte_counter<= byte_counter + 1;
                            end
                            // then capture the new byte into the hold register
                            hold_byte <= rx_data;
                            have_hold <= 1'b1;
                        end
                    end
                end

                WAIT_DONE: begin
                    if (hash_done) begin
                        shift_reg  <= hash_out;
                        send_index <= 0;
                        tx_ready_d <= 1'b0;
                        state      <= SEND;
                    end
                end

                SEND : begin
                    if (tx_ready && !tx_ready_d) begin   // fire = rising edge of tx_ready
                        tx_data       <= to_ascii(shift_reg[255:252]);
                        tx_data_valid <= 1'b1;

                        if (send_index == 7'd63)
                            state <= DONE;               // all 64 nibbles are in flight
                        else begin
                            shift_reg  <= {shift_reg[251:0], 4'b0};
                            send_index <= send_index + 1;
                        end
                    end
                end

                DONE: begin
                    if (tx_ready)
                        state <= IDLE;
                end
            endcase
        end
    end

    // ────────────────────── Hex nibble → ASCII ──────────────────────────
    function [7:0] to_ascii (input [3:0] nib);
        to_ascii = (nib < 10) ? ("0" + nib) : ("a" + nib - 10);
    endfunction

endmodule
