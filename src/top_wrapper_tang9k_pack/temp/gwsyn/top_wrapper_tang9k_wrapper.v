//Copyright (C)2014-2024 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: Wrapper pack file for instantiation
//Tool Version: V1.9.9.03 (64-bit)
//Created Time: Tue Jun  3 12:23:29 2025

module top_wrapper_tang9k_gowin_top (
    clk,
    rst,
    uart_rx,
    uart_tx,
    led0
);
input clk;
input rst;
input uart_rx;
output uart_tx;
output led0;
top_wrapper_tang9k top_wrapper_tang9k_ins (
    .clk(clk),
    .rst(rst),
    .uart_rx(uart_rx),
    .uart_tx(uart_tx),
    .led0(led0)
);
endmodule
