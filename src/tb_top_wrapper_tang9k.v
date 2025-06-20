`timescale 1ns/1ps
// -------------------------------------------------------------
// Testbench for top_wrapper_tang9k
// -------------------------------------------------------------
module tb_top_wrapper_tang9k;

    //------------------------------------------------------------------
    // Local parameters – tweak here if you change the wrapper
    //------------------------------------------------------------------
    localparam real CLK_FREQ   = 27_000_000.0;   // Hz (wrapper's 27 MHz pin-35)
    localparam real BAUD_RATE  =   115_200.0;    // UART line rate
    localparam real CLK_PERIOD = 1e9 / CLK_FREQ; // ns
    localparam real BIT_PERIOD = 1e9 / BAUD_RATE;// ns (≈ 8.68 µs)

    //------------------------------------------------------------------
    // Testbench signals
    //------------------------------------------------------------------
    reg  clk      = 1'b0;
    reg  rst_n    = 1'b0;        // active-high reset (name *_n* is historical)
    reg  uart_rx  = 1'b1;        // UART idles high
    wire uart_tx;
    wire led0;

    //------------------------------------------------------------------
    // DUT instance
    //------------------------------------------------------------------
    top_wrapper_tang9k dut (
        .clk    (clk),
        .rst_n  (rst_n),
        .uart_rx(uart_rx),
        .uart_tx(uart_tx),
        .led0   (led0)
    );

    //------------------------------------------------------------------
    // Clock generator – 27 MHz square wave
    //------------------------------------------------------------------
    always #(CLK_PERIOD/2.0) clk = ~clk;

    //------------------------------------------------------------------
    // Reset pulse – keep asserted for 10 cycles
    //------------------------------------------------------------------
    initial begin
        rst_n = 1'b0;
        repeat (10) @(posedge clk);
        rst_n = 1'b1;
    end

    //------------------------------------------------------------------
    // UART *transmit* task  (drives uart_rx into DUT)
    //------------------------------------------------------------------
    task automatic uart_send_byte (input [7:0] data);
        integer i;
        begin
            // start bit
            uart_rx = 1'b0; #(BIT_PERIOD);

            // data bits, LSB-first
            for (i = 0; i < 8; i = i + 1) begin
                uart_rx = data[i];
                #(BIT_PERIOD);
            end

            // stop bit
            uart_rx = 1'b1;
            #(BIT_PERIOD);

            // minimum stop-to-start gap (1 bit)
            #(BIT_PERIOD);
        end
    endtask

    //------------------------------------------------------------------
    // UART *receive* monitor (sniffs bytes from uart_tx)
    // Writes hex bytes to "uart_tx_log.txt"
    //------------------------------------------------------------------
    integer j;
    integer fd;
    initial fd = $fopen("uart_tx_log.txt", "w");
    reg [7:0] rx_byte;

    initial begin : RX_MONITOR
        forever begin
            // Wait for start bit (falling edge)
            @(negedge uart_tx);
            #(BIT_PERIOD/2);  // middle of start bit

            for (j = 0; j < 8; j = j + 1) begin
                #(BIT_PERIOD);
                rx_byte[j] = uart_tx;
            end
            #(BIT_PERIOD);    // stop bit

            $fwrite(fd, "%02x ", rx_byte);
            $display($time, " ns : RX 0x%02x", rx_byte);
        end
    end

    //------------------------------------------------------------------
    // Main stimulus
    //------------------------------------------------------------------
    initial begin
        // Wait for reset de-assertion
        @(posedge rst_n);
        @(posedge clk);
        uart_send_byte(8'h01); // start of message
        // Example payload:  "TEST\n"
        uart_send_byte(8'h54); // 'T'
        uart_send_byte(8'h45); // 'E'
        uart_send_byte(8'h53); // 'S'
        uart_send_byte(8'h54); // 'T'
        uart_send_byte(8'hFF); // end of message

        // Give the DUT some time to respond (shortened to limit VCD size)
        #(BIT_PERIOD * 100);

        $display("Simulation complete.");
        $finish;
    end

    //------------------------------------------------------------------
    // Safety timeout – much shorter (10 ms) to avoid runaway sims
    //------------------------------------------------------------------
    initial begin
        #100_000_000;
        $display("Timeout – ending simulation.");
        $finish;
    end

endmodule
