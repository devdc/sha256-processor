`timescale 1ns/1ps
module test_uart_beacon #(
    parameter CLK_FRE      = 27,        // MHz
    parameter UART_FRE     = 115200,    // baud
    parameter MAX_PAYLOAD  = 32         // bytes captured from RX per line
)(
    input  wire clk,
    input  wire rst_n,
    input  wire uart_rx,
    output wire uart_tx
);

// ------------------------------------------------------------------
// Compile-time “ROM” strings (packed bit-vectors, plain Verilog)
// ------------------------------------------------------------------
parameter          PREFIX_LEN = 20;           // "Hello Tang Nano 9K: "
localparam [8*PREFIX_LEN-1:0] PREFIX =
        "Hello Tang Nano 9K: ";
localparam [15:0]  CRLF = 16'h0d0a;           // "\r\n"

// ------------------------------------------------------------------
// RX capture buffer
// ------------------------------------------------------------------
reg  [7:0]  rx_buf [0:MAX_PAYLOAD-1];
reg  [5:0]  rx_cnt;           // how many bytes currently in buffer
wire [7:0]  rx_data;
wire        rx_data_vld;
wire        rx_data_ready = 1'b1;

// ------------------------------------------------------------------
// Pulse when we finish CR/LF
// ------------------------------------------------------------------
reg tx_done;
always @(posedge clk or negedge rst_n)
    if (!rst_n)
        tx_done <= 1'b0;
    else
        tx_done <= (state==ST_SEND_E) && (tx_data_vld && tx_data_rdy && ptr==1);

// ------------------------------------------------------------------
// RX counter and buffer owner – SINGLE always block
// ------------------------------------------------------------------
always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        rx_cnt <= 0;
    else if (tx_done)                       // clear for next frame
        rx_cnt <= 0;
    else if (rx_data_vld &&
             (rx_data!=8'h0d) &&
             (rx_data!=8'h0a) &&
             (rx_cnt < MAX_PAYLOAD)) begin
        rx_buf[rx_cnt] <= rx_data;
        rx_cnt         <= rx_cnt + 1'b1;
    end
end

// ------------------------------------------------------------------
// TX state machine (unchanged apart from vector indexing syntax)
// ------------------------------------------------------------------
localparam ST_IDLE   = 0,
           ST_SEND_P = 1,
           ST_SEND_B = 2,
           ST_SEND_E = 3,
           ST_WAIT   = 4;

reg  [2:0]  state;
reg  [7:0]  tx_data;
reg         tx_data_vld;
wire        tx_data_rdy;
reg  [5:0]  ptr;              // generic pointer over string/payload
reg  [31:0] one_sec_cnt;      // 1-second timer

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state       <= ST_IDLE;
        tx_data_vld <= 1'b0;
        ptr         <= 0;
        one_sec_cnt <= 0;
    end else begin
        case (state)
        // ----------------------------------------------------------
        ST_IDLE: begin
            if (one_sec_cnt >= CLK_FRE*1_000_000) begin
                one_sec_cnt <= 0;
                ptr         <= 0;
                state       <= ST_SEND_P;
            end else
                one_sec_cnt <= one_sec_cnt + 1;
        end
        // ----------------------------------------------------------
        ST_SEND_P: begin                       // send PREFIX
            tx_data      <= PREFIX[8*(PREFIX_LEN-1-ptr) +: 8];
            tx_data_vld  <= 1'b1;
            if (tx_data_vld && tx_data_rdy) begin
                if (ptr == PREFIX_LEN-1) begin
                    ptr   <= 0;                // reset for payload
                    state <= ST_SEND_B;
                end else
                    ptr <= ptr + 1'b1;
            end
        end
        // ----------------------------------------------------------
        ST_SEND_B: begin                       // send captured bytes
            tx_data     <= (ptr < rx_cnt) ? rx_buf[ptr] : 8'h20; // space
            tx_data_vld <= 1'b1;
            if (tx_data_vld && tx_data_rdy) begin
                if (ptr == rx_cnt) begin
                    ptr   <= 0;
                    state <= ST_SEND_E;
                end else
                    ptr <= ptr + 1'b1;
            end
        end
        // ----------------------------------------------------------
        ST_SEND_E: begin                       // send CR-LF
            tx_data     <= CRLF[8*(1-ptr) +: 8];
            tx_data_vld <= 1'b1;
            if (tx_data_vld && tx_data_rdy) begin
                if (ptr == 1) begin
                    tx_data_vld <= 1'b0;
//                    rx_cnt      <= 0;         // clear buffer
                    state       <= ST_WAIT;
                end else
                    ptr <= ptr + 1'b1;
            end
        end
        // ----------------------------------------------------------
        ST_WAIT: begin                         // just a small guard
            state <= ST_IDLE;
        end
        endcase
    end
end

// ------------------------------------------------------------------
// UART cores (unchanged)
// ------------------------------------------------------------------
uart_rx #(
    .CLK_FRE   (CLK_FRE),
    .BAUD_RATE (UART_FRE)
) u_rx (
    .clk            (clk),
    .rst_n          (rst_n),
    .rx_data        (rx_data),
    .rx_data_valid  (rx_data_vld),
    .rx_data_ready  (rx_data_ready),
    .rx_pin         (uart_rx)
);

uart_tx #(
    .CLK_FRE   (CLK_FRE),
    .BAUD_RATE (UART_FRE)
) u_tx (
    .clk            (clk),
    .rst_n          (rst_n),
    .tx_data        (tx_data),
    .tx_data_valid  (tx_data_vld),
    .tx_data_ready  (tx_data_rdy),
    .tx_pin         (uart_tx)
);
endmodule

/*
module test_uart_beacon(
	input                        clk,
	input                        rst_n,
	input                        uart_rx,
	output                       uart_tx
);

parameter                        CLK_FRE  = 27;//Mhz
parameter                        UART_FRE = 115200;//Mhz
localparam                       IDLE =  0;
localparam                       SEND =  1;   //send 
localparam                       WAIT =  2;   //wait 1 second and send uart received data
reg[7:0]                         tx_data;
reg[7:0]                         tx_str;
reg                              tx_data_valid;
wire                             tx_data_ready;
reg[7:0]                         tx_cnt;
wire[7:0]                        rx_data;
wire                             rx_data_valid;
wire                             rx_data_ready;
reg[31:0]                        wait_cnt;
reg[3:0]                         state;

assign rx_data_ready = 1'b1;//always can receive data,

always@(posedge clk or negedge rst_n)
begin
	if(rst_n == 1'b0)
	begin
		wait_cnt <= 32'd0;
		tx_data <= 8'd0;
		state <= IDLE;
		tx_cnt <= 8'd0;
		tx_data_valid <= 1'b0;
	end
	else
	case(state)
		IDLE:
			state <= SEND;
		SEND:
		begin
			wait_cnt <= 32'd0;
			tx_data <= tx_str;

			if(tx_data_valid == 1'b1 && tx_data_ready == 1'b1 && tx_cnt < DATA_NUM - 1)//Send 12 bytes data
			begin
				tx_cnt <= tx_cnt + 8'd1; //Send data counter
			end
			else if(tx_data_valid && tx_data_ready)//last byte sent is complete
			begin
				tx_cnt <= 8'd0;
				tx_data_valid <= 1'b0;
				state <= WAIT;
			end
			else if(~tx_data_valid)
			begin
				tx_data_valid <= 1'b1;
			end
		end
		WAIT:
		begin
			wait_cnt <= wait_cnt + 32'd1;

			if(rx_data_valid == 1'b1)
			begin
				tx_data_valid <= 1'b1;
				tx_data <= rx_data;   // send uart received data
			end
			else if(tx_data_valid && tx_data_ready)
			begin
				tx_data_valid <= 1'b0;
			end
			else if(wait_cnt >= CLK_FRE * 1000_000) // wait for 1 second
				state <= SEND;
		end
		default:
			state <= IDLE;
	endcase
end

//combinational logic

// `define example_1

`ifdef example_1

// Example 1

parameter 	ENG_NUM  = 14;//非中文字符数
parameter 	CHE_NUM  = 2 + 1;//  中文字符数
parameter 	DATA_NUM = CHE_NUM * 3 + ENG_NUM; //中文字符使用UTF8，占用3个字节
wire [ DATA_NUM * 8 - 1:0] send_data = {"你好 Tang Nano 20K",16'h0d0a};

`else

// Example 2

parameter 	ENG_NUM  = 19 + 1;//非中文字符数
parameter 	CHE_NUM  = 0;//  中文字符数
parameter 	DATA_NUM = CHE_NUM * 3 + ENG_NUM + 1; //中文字符使用UTF8，占用3个字节
wire [ DATA_NUM * 8 - 1:0] send_data = {"Hello Tang Nano  9K",16'h0d0a};

`endif

always@(*)
	tx_str <= send_data[(DATA_NUM - 1 - tx_cnt) * 8 +: 8];

uart_rx#
(
	.CLK_FRE(CLK_FRE),
	.BAUD_RATE(UART_FRE)
) uart_rx_inst
(
	.clk                        (clk                      ),
	.rst_n                      (rst_n                    ),
	.rx_data                    (rx_data                  ),
	.rx_data_valid              (rx_data_valid            ),
	.rx_data_ready              (rx_data_ready            ),
	.rx_pin                     (uart_rx                  )
);

uart_tx#
(
	.CLK_FRE(CLK_FRE),
	.BAUD_RATE(UART_FRE)
) uart_tx_inst
(
	.clk                        (clk                      ),
	.rst_n                      (rst_n                    ),
	.tx_data                    (tx_data                  ),
	.tx_data_valid              (tx_data_valid            ),
	.tx_data_ready              (tx_data_ready            ),
	.tx_pin                     (uart_tx                  )
);
endmodule
*/
