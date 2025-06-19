/*
`timescale 1ns/1ps
module top_wrapper_tang9k (
    input  clk,          // 27 MHz
    input  rst_n,          // reset button S2 (optional)
    input  s1_n,         // S1 (active-LOW)
    input  uart_rx,
    output uart_tx,
    output led0
);
    // instance
    test_uart_beacon beacon (
        .clk(clk),
        .rst_n(rst_n),
        .uart_rx(uart_rx),
        .uart_tx(uart_tx)
    );

    assign led0 = uart_tx;   // activity indicator
endmodule

*/






`timescale 1ns/1ps

module top_wrapper_tang9k (
    input clk,           // Pin 35 (27 MHz or internal PLL source)
    input rst_n,           // Pin 14 (active-high reset button)
    input uart_rx,       // Pin 18 (from USB-UART dongle TX)
    output uart_tx,      // Pin 17 (to USB-UART dongle RX)
    output led0          // Pin 6 (debug indicator)
);

    wire internal_rst = ~rst_n;

    top_uart_sha256 top (
        .clk(clk),
        .rst(internal_rst),
        .uart_rx(uart_rx),
        .uart_tx(uart_tx)
    );

    // Debug LED: toggles when a hash is completed (optional enhancement)
    // You can wire this to the `done` signal from the processor internally if desired
    assign led0 = uart_tx; // Visual activity on TX as heartbeat/debug

endmodule
