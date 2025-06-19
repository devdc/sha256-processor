// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_wrapper_tang9k.h for the primary calling header

#include "Vtb_top_wrapper_tang9k__pch.h"
#include "Vtb_top_wrapper_tang9k___024root.h"

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_initial__TOP(Vtb_top_wrapper_tang9k___024root* vlSelf);
VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__0(Vtb_top_wrapper_tang9k___024root* vlSelf);
VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__1(Vtb_top_wrapper_tang9k___024root* vlSelf);
VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__2(Vtb_top_wrapper_tang9k___024root* vlSelf);
VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__3(Vtb_top_wrapper_tang9k___024root* vlSelf);
VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__4(Vtb_top_wrapper_tang9k___024root* vlSelf);

void Vtb_top_wrapper_tang9k___024root___eval_initial(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP(vlSelf);
    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__clk__0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__rst_n__0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg__0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg;
}

VL_INLINE_OPT VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__0(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         45);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__1(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_hbdd886a4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_wrapper_tang9k.dut.top.uart_tx_inst.tx_reg)", 
                                                             "src/tb_top_wrapper_tang9k.v", 
                                                             85);
        co_await vlSelfRef.__VdlySched.delay(0x423a36ULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             86);
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xfeU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xfdU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 1U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xfbU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 2U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xf7U & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 3U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xefU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 4U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xdfU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 5U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0xbfU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 6U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             89);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte 
            = ((0x7fU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte)) 
               | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg) 
                  << 7U));
        vlSelfRef.tb_top_wrapper_tang9k__DOT__j = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             92);
        VL_FWRITEF_NX(vlSelfRef.tb_top_wrapper_tang9k__DOT__fd,"%02x ",0,
                      8,vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte);
        VL_WRITEF_NX("%20# ns : RX 0x%02x\n",0,64,VL_TIME_UNITED_Q(1000),
                     8,(IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__2(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data;
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data = 0;
    CData/*7:0*/ __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data;
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data = 0;
    CData/*7:0*/ __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data;
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data = 0;
    CData/*7:0*/ __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data;
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data = 0;
    CData/*7:0*/ __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data;
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data = 0;
    CData/*7:0*/ __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data;
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_h2ca3361f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.rst_n)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         104);
    co_await vlSelfRef.__VtrigSched_hd0c6c7ea__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_wrapper_tang9k.clk)", 
                                                         "src/tb_top_wrapper_tang9k.v", 
                                                         105);
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data = 1U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         56);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & (IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 1U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 2U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 3U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 4U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 5U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 6U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__0__data) 
               >> 7U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         69);
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data = 0x54U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         56);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & (IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 1U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 2U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 3U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 4U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 5U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 6U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__1__data) 
               >> 7U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         69);
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data = 0x45U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         56);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & (IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 1U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 2U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 3U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 4U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 5U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 6U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__2__data) 
               >> 7U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         69);
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data = 0x53U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         56);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & (IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 1U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 2U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 3U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 4U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 5U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 6U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__3__data) 
               >> 7U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         69);
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data = 0x54U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         56);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & (IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 1U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 2U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 3U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 4U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 5U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 6U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__4__data) 
               >> 7U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         69);
    __Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data = 0xffU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         56);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & (IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 1U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 2U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 3U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 4U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 5U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 6U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 
        (1U & ((IData)(__Vtask_tb_top_wrapper_tang9k__DOT__uart_send_byte__5__data) 
               >> 7U));
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         61);
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x84746cULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         69);
    co_await vlSelfRef.__VdlySched.delay(0x9b386e0bULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         115);
    VL_WRITEF_NX("Simulation complete.\n",0);
    VL_FINISH_MT("src/tb_top_wrapper_tang9k.v", 118, "");
}

VL_INLINE_OPT VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__3(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x174876e800ULL, 
                                         nullptr, "src/tb_top_wrapper_tang9k.v", 
                                         125);
    VL_WRITEF_NX("Timeout \342\200\223 ending simulation.\n",0);
    VL_FINISH_MT("src/tb_top_wrapper_tang9k.v", 127, "");
}

VL_INLINE_OPT VlCoroutine Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__4(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP__Vtiming__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4857ULL, 
                                             nullptr, 
                                             "src/tb_top_wrapper_tang9k.v", 
                                             38);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__clk)));
    }
}

void Vtb_top_wrapper_tang9k___024root___eval_act(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top_wrapper_tang9k___024root___nba_sequent__TOP__0(Vtb_top_wrapper_tang9k___024root* vlSelf);

void Vtb_top_wrapper_tang9k___024root___eval_nba(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top_wrapper_tang9k___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlWide<8>/*255:0*/ Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0;
extern const VlWide<16>/*511:0*/ Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtb_top_wrapper_tang9k___024root___nba_sequent__TOP__0(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__nib;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__nib = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__x;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__x = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__x;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__x = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__x;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__x = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__x;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__x = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__x;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__x = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__Vfuncout;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__x;
    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__x = 0;
    CData/*0:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid = 0;
    CData/*7:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter = 0;
    CData/*2:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold = 0;
    CData/*6:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state;
    VL_ZERO_W(256, __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state);
    CData/*2:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index = 0;
    QData/*63:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits = 0;
    CData/*0:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last = 0;
    CData/*0:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block = 0;
    CData/*5:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index = 0;
    VlWide<16>/*511:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer;
    VL_ZERO_W(512, __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer);
    CData/*0:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out;
    VL_ZERO_W(256, __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out);
    CData/*0:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready = 0;
    CData/*1:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = 0;
    CData/*6:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 = 0;
    IData/*31:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 = 0;
    IData/*31:0*/ __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0;
    __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0;
    __VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1;
    __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1;
    __VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 = 0;
    CData/*7:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits = 0;
    CData/*2:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt = 0;
    SData/*15:0*/ __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt = 0;
    CData/*0:0*/ __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0;
    __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1;
    __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 = 0;
    // Body
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[2U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[2U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[3U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[3U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[4U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[4U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[5U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[5U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[6U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[6U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[7U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[7U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[8U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[8U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[9U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[9U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xaU] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xaU];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xbU] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xbU];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xcU] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xcU];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xdU] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xdU];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xeU] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xeU];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U] 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U];
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t;
    __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 = 0U;
    __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 = 0U;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
    if (vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n) {
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt 
            = ((((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)) 
                 & (0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt))) 
                | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state) 
                   != (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)))
                ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt))));
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt 
            = ((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))
                ? (7U & ((0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt))
                          ? ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt))
                          : (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt)))
                : 0U);
        if (((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state)) 
             & (0x74U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt)))) {
            __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt))) 
                    & (IData)(__Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits)) 
                   | (0xffU & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx) 
                               << (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt))));
        } else {
            __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits 
                = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits;
        }
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt 
            = ((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state))
                ? (7U & ((0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt))
                          ? ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt))
                          : (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt)))
                : 0U);
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt 
            = ((((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state)) 
                 & (0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt))) 
                | ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state) 
                   != (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state)))
                ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt))));
    } else {
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt = 0U;
    }
    if (vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state))) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U] 
                    = (IData)((((QData)((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1))));
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1))) 
                               >> 0x20U));
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start)))) {
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = 0U;
                }
            } else if ((0x40U > (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t))) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t)));
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T2);
            } else {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 
                    = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state))) {
            if ((0x10U > (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t))) {
                __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 
                    = (((0U == (0x1fU & (((IData)(0x1ffU) 
                                          - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t), 5U)) 
                                         - (IData)(0x1fU))))
                         ? 0U : (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[
                                 (((IData)(0x1fU) + 
                                   (0x1ffU & (((IData)(0x1ffU) 
                                               - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t), 5U)) 
                                              - (IData)(0x1fU)))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(0x1ffU) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t), 5U)) 
                                                    - (IData)(0x1fU)))))) 
                       | (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[
                          (0xfU & ((((IData)(0x1ffU) 
                                     - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t), 5U)) 
                                    - (IData)(0x1fU)) 
                                   >> 5U))] >> (0x1fU 
                                                & (((IData)(0x1ffU) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t), 5U)) 
                                                   - (IData)(0x1fU)))));
                __VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 
                    = (0x3fU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t));
                __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0 = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t)));
            } else if ((0x40U > (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t))) {
                __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 
                    = (((([&]() {
                                    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__x 
                                        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w
                                        [(0x3fU & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t) 
                                                   - (IData)(2U)))];
                                    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__x 
                                                        = __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__x;
                                                    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__Vfuncout 
                                                        = 
                                                        (VL_SHIFTR_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__x, 0x11U) 
                                                         | VL_SHIFTL_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__x, 0xfU));
                                                }(), __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__14__Vfuncout) 
                                            ^ ([&]() {
                                                    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__x 
                                                        = __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__x;
                                                    __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__Vfuncout 
                                                        = 
                                                        (VL_SHIFTR_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__x, 0x13U) 
                                                         | VL_SHIFTL_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__x, 0xdU));
                                                }(), __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__15__Vfuncout)) 
                                           ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__x, 0xaU));
                                }(), __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig1__13__Vfuncout) 
                         + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w
                         [(0x3fU & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t) 
                                    - (IData)(7U)))]) 
                        + ([&]() {
                                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__x 
                                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w
                                    [(0x3fU & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t) 
                                               - (IData)(0xfU)))];
                                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__x 
                                                    = __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__x;
                                                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__x, 7U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__x, 0x19U));
                                            }(), __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__17__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__x 
                                                    = __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__x;
                                                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__x, 0x12U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__x, 0xeU));
                                            }(), __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__18__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__x, 3U));
                            }(), __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__sig0__16__Vfuncout)) 
                       + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w
                       [(0x3fU & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t) 
                                  - (IData)(0x10U)))]);
                __VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 
                    = (0x3fU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t));
                __VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1 = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t)));
            } else {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = 2U;
            }
        } else if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start) {
            if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[7U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[6U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[5U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[4U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[3U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[2U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[1U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[0U];
            } else {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 = 0x6a09e667U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 = 0xbb67ae85U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 = 0x3c6ef372U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 = 0xa54ff53aU;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 = 0x510e527fU;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 = 0x9b05688cU;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 = 0x1f83d9abU;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 = 0x5be0cd19U;
            }
            __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t = 0U;
            __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready = 0U;
            __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = 1U;
        }
    } else {
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1 
        = ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg 
        = ((1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n))) 
           || (((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)) 
                || (4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))) 
               || ((2U != (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)) 
                   && ((3U != (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)) 
                       || (1U & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch) 
                                 >> (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt)))))));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f;
    if (__VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0) {
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w[__VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0] 
            = __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v0;
    }
    if (__VdlySet__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1) {
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w[__VdlyDim0__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1] 
            = __VdlyVal__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w__v1;
    }
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0 
        = ((([&]() {
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__x 
                        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__Vfuncout 
                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__x, 2U) 
                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__x, 0x1eU));
                }(), vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__Vfuncout) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__x 
                        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__Vfuncout 
                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__x, 0xdU) 
                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__x, 0x13U));
                }(), vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__x 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
                vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__Vfuncout 
                    = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__x, 0x16U) 
                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__x, 0xaU));
            }(), vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__Vfuncout));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S1 
        = ((([&]() {
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__x 
                        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__Vfuncout 
                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__x, 6U) 
                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__x, 0x1aU));
                }(), vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__Vfuncout) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__x 
                        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
                    vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__Vfuncout 
                        = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__x, 0xbU) 
                           | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__x, 0x15U));
                }(), vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__x 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
                vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__Vfuncout 
                    = (VL_SHIFTR_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__x, 0x19U) 
                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__x, 7U));
            }(), vlSelfRef.__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__Vfuncout));
    if (vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))) {
            if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[0U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[1U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[2U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[3U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[4U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[5U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[6U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U] 
                    = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[7U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits = 0ULL;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))) {
            if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits 
                    = (8ULL + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits);
                VL_ASSIGNSEL_WI(512,8,(0x1ffU & (((IData)(0x1ffU) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index), 3U)) 
                                                 - (IData)(7U))), __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer, vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in);
                if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last) {
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last = 1U;
                    if ((0x40U == ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index)))) {
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index)));
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 1U;
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 3U;
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block = 1U;
                    } else {
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index)));
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 2U;
                    }
                } else {
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index)));
                    if ((0x40U == ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index)))) {
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 1U;
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 3U;
                    }
                }
            } else if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index))) {
                VL_ASSIGNSEL_WI(512,8,(0x1ffU & (((IData)(0x1ffU) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index), 3U)) 
                                                 - (IData)(7U))), __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer, 0x80U);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index)));
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block 
                    = (0x38U <= (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index));
            } else if (((0x38U > (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index)) 
                        | (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block))) {
                VL_ASSIGNSEL_WI(512,8,(0x1ffU & (((IData)(0x1ffU) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index), 3U)) 
                                                 - (IData)(7U))), __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer, 0U);
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index)));
            } else {
                if ((1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block)))) {
                    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__i = 8U;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U] 
                        = (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits);
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U] 
                        = (IData)((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits 
                                   >> 0x20U));
                }
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 3U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))) {
            if (((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready) 
                 & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy)))) {
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[1U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[2U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[2U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[3U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[3U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[4U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[4U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[5U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[5U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[6U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[6U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[7U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[7U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[8U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[8U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[9U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[9U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xaU] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xaU];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xbU] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xbU];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xcU] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xcU];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xdU] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xdU];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xeU] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xeU];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xfU] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[0U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[1U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[2U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[3U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[4U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[5U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[6U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[7U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U];
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init = 1U;
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 0U;
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy = 1U;
            } else {
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start = 0U;
            }
            if (((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready) 
                 & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev)))) {
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U];
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U] 
                    = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U];
                if (((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last) 
                     & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block))) {
                    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__i = 8U;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[1U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[2U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[2U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[3U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[3U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[4U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[4U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[5U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[5U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[6U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[6U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[7U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[7U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[8U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[8U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[9U] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[9U];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xaU] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xaU];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xbU] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xbU];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xcU] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xcU];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xdU] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xdU];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xeU] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xeU];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU] 
                        = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xfU];
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 1U;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block = 0U;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU] 
                        = (0x80000000U | (0xffffffU 
                                          & __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU]));
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U] 
                        = (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits);
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U] 
                        = (IData)((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits 
                                   >> 0x20U));
                } else if (((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last) 
                            & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block)))) {
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 4U;
                } else {
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index = 0U;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 1U;
                }
            }
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev 
                = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready;
        } else if ((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))) {
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start = 0U;
        }
        if (((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)) 
             & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid))) {
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch 
                = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data;
        }
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid = 0U;
        if ((0U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state))) {
            if (((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid) 
                 & (1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data)))) {
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state))) {
            if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid) {
                if ((0xffU == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data))) {
                    if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold) {
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter)));
                        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in 
                            = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte;
                        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid = 1U;
                        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last = 1U;
                    }
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 2U;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold = 0U;
                } else {
                    if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold) {
                        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter)));
                        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in 
                            = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte;
                        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid = 1U;
                    }
                    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte 
                        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data;
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state))) {
            if ((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index = 0U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state))) {
            if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready) {
                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__nib 
                    = (0xfU & (((0U == (0x1fU & (((IData)(0xffU) 
                                                  - 
                                                  VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index), 2U)) 
                                                 - (IData)(3U))))
                                 ? 0U : (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[
                                         (((IData)(3U) 
                                           + (0xffU 
                                              & (((IData)(0xffU) 
                                                  - 
                                                  VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index), 2U)) 
                                                 - (IData)(3U)))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((IData)(0xffU) 
                                                 - 
                                                 VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index), 2U)) 
                                                - (IData)(3U)))))) 
                               | (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[
                                  (7U & ((((IData)(0xffU) 
                                           - VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index), 2U)) 
                                          - (IData)(3U)) 
                                         >> 5U))] >> 
                                  (0x1fU & (((IData)(0xffU) 
                                             - VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index), 2U)) 
                                            - (IData)(3U))))));
                __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__Vfuncout 
                    = (0xffU & ((0xaU > (IData)(__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__nib))
                                 ? ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__nib))
                                 : ((IData)(0x57U) 
                                    + (IData)(__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__nib))));
                vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data 
                    = __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__to_ascii__6__Vfuncout;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid = 1U;
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index)));
                if ((0x3fU == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index))) {
                    __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 4U;
                }
            }
        } else if ((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state))) {
            if (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready) {
                __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 0U;
            }
        }
        if (((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state)) 
             & ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state) 
                != (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state)))) {
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid = 1U;
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data 
                = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits;
        } else if ((5U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state))) {
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid = 0U;
        }
        if ((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))) {
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready 
                = (1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid)));
        } else if (((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state)) 
                    & (0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt)))) {
            vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready = 1U;
        }
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state 
            = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state 
            = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state;
    } else {
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[1U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[2U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[3U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[4U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[5U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[6U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[7U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[8U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[9U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xaU] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xbU] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xcU] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xdU] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xeU] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block[0xfU] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[0U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[1U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[2U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[3U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[4U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[5U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[6U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init[7U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[0U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[1U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[2U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[3U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[4U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[5U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[6U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U] 
            = Vtb_top_wrapper_tang9k__ConstPool__CONST_ha51a22ca_0[7U];
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits = 0ULL;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter = 0U;
        __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data = 0U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state = 1U;
        vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state = 1U;
    }
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0 
        = ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T2 
        = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0 
           + ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
               & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b) 
              ^ ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                  & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c) 
                 ^ (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                    & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c))));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1 
        = (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h 
           + (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S1 
              + (((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
                   & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f) 
                  ^ ((~ vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e) 
                     & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g)) 
                 + (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM
                    [(0x3fU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t))] 
                    + vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w
                    [(0x3fU & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t))]))));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[0U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[1U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[2U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[3U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[4U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[5U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[6U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out[7U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[1U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[2U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[2U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[3U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[3U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[4U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[4U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[5U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[5U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[6U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[6U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[7U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[7U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[8U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[8U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[9U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[9U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xaU] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xaU];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xbU] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xbU];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xcU] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xcU];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xdU] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xdU];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xeU] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xeU];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer[0xfU];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[0U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[1U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[2U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[3U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[4U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[5U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[6U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U] 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state[7U];
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits 
        = __Vdly__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state 
        = ((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))
            ? ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid)
                ? 2U : 1U) : ((2U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))
                               ? ((0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt))
                                   ? 3U : 2U) : ((3U 
                                                  == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))
                                                  ? 
                                                 (((0xe9U 
                                                    == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt)) 
                                                   & (7U 
                                                      == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt)))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state))
                                                   ? 
                                                  ((0xe9U 
                                                    == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt))
                                                    ? 1U
                                                    : 4U)
                                                   : 1U))));
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state 
        = ((1U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state))
            ? (((~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0)) 
                & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1))
                ? 2U : 1U) : ((2U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state))
                               ? ((0xe9U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt))
                                   ? 3U : 2U) : ((3U 
                                                  == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state))
                                                  ? 
                                                 (((0xe9U 
                                                    == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt)) 
                                                   & (7U 
                                                      == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt)))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state))
                                                   ? 
                                                  ((0x74U 
                                                    == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt))
                                                    ? 5U
                                                    : 4U)
                                                   : 1U))));
}

void Vtb_top_wrapper_tang9k___024root___timing_commit(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd0c6c7ea__0.commit(
                                                   "@(posedge tb_top_wrapper_tang9k.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbdd886a4__0.commit(
                                                   "@(negedge tb_top_wrapper_tang9k.dut.top.uart_tx_inst.tx_reg)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2ca3361f__0.commit(
                                                   "@(posedge tb_top_wrapper_tang9k.rst_n)");
    }
}

void Vtb_top_wrapper_tang9k___024root___timing_resume(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd0c6c7ea__0.resume(
                                                   "@(posedge tb_top_wrapper_tang9k.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbdd886a4__0.resume(
                                                   "@(negedge tb_top_wrapper_tang9k.dut.top.uart_tx_inst.tx_reg)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2ca3361f__0.resume(
                                                   "@(posedge tb_top_wrapper_tang9k.rst_n)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top_wrapper_tang9k___024root___eval_triggers__act(Vtb_top_wrapper_tang9k___024root* vlSelf);

bool Vtb_top_wrapper_tang9k___024root___eval_phase__act(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top_wrapper_tang9k___024root___eval_triggers__act(vlSelf);
    Vtb_top_wrapper_tang9k___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_top_wrapper_tang9k___024root___timing_resume(vlSelf);
        Vtb_top_wrapper_tang9k___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top_wrapper_tang9k___024root___eval_phase__nba(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top_wrapper_tang9k___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__nba(Vtb_top_wrapper_tang9k___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__act(Vtb_top_wrapper_tang9k___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_wrapper_tang9k___024root___eval(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_top_wrapper_tang9k___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/tb_top_wrapper_tang9k.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_wrapper_tang9k___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/tb_top_wrapper_tang9k.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_top_wrapper_tang9k___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_top_wrapper_tang9k___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top_wrapper_tang9k___024root___eval_debug_assertions(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
