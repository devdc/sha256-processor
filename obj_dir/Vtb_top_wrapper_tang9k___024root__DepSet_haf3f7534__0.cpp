// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_wrapper_tang9k.h for the primary calling header

#include "Vtb_top_wrapper_tang9k__pch.h"
#include "Vtb_top_wrapper_tang9k__Syms.h"
#include "Vtb_top_wrapper_tang9k___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__act(Vtb_top_wrapper_tang9k___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_wrapper_tang9k___024root___eval_triggers__act(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__rst_n__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__rst_n__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__clk__0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__rst_n__0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg__0 
        = vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_wrapper_tang9k___024root___dump_triggers__act(vlSelf);
    }
#endif
}
