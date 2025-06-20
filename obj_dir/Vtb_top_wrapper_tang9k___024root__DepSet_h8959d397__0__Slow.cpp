// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_wrapper_tang9k.h for the primary calling header

#include "Vtb_top_wrapper_tang9k__pch.h"
#include "Vtb_top_wrapper_tang9k___024root.h"

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_static__TOP(Vtb_top_wrapper_tang9k___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_static(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_wrapper_tang9k___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_static__TOP(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_wrapper_tang9k__DOT__clk = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx = 1U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last = 0U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in = 0U;
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_initial__TOP(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x5f6c6f67U;
    __Vtemp_1[2U] = 0x745f7478U;
    __Vtemp_1[3U] = 0x756172U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__fd = VL_FOPEN_NN(
                                                           VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                                                           , 
                                                           std::string{"w"});
    ;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0U] = 0x428a2f98U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[1U] = 0x71374491U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[2U] = 0xb5c0fbcfU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[3U] = 0xe9b5dba5U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[4U] = 0x3956c25bU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[5U] = 0x59f111f1U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[6U] = 0x923f82a4U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[7U] = 0xab1c5ed5U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[8U] = 0xd807aa98U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[9U] = 0x12835b01U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0xaU] = 0x243185beU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0xbU] = 0x550c7dc3U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0xcU] = 0x72be5d74U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0xdU] = 0x80deb1feU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0xeU] = 0x9bdc06a7U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0xfU] = 0xc19bf174U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x10U] = 0xe49b69c1U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x11U] = 0xefbe4786U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x12U] = 0xfc19dc6U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x13U] = 0x240ca1ccU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x14U] = 0x2de92c6fU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x15U] = 0x4a7484aaU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x16U] = 0x5cb0a9dcU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x17U] = 0x76f988daU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x18U] = 0x983e5152U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x19U] = 0xa831c66dU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x1aU] = 0xb00327c8U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x1bU] = 0xbf597fc7U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x1cU] = 0xc6e00bf3U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x1dU] = 0xd5a79147U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x1eU] = 0x6ca6351U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x1fU] = 0x14292967U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x20U] = 0x27b70a85U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x21U] = 0x2e1b2138U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x22U] = 0x4d2c6dfcU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x23U] = 0x53380d13U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x24U] = 0x650a7354U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x25U] = 0x766a0abbU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x26U] = 0x81c2c92eU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x27U] = 0x92722c85U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x28U] = 0xa2bfe8a1U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x29U] = 0xa81a664bU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x2aU] = 0xc24b8b70U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x2bU] = 0xc76c51a3U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x2cU] = 0xd192e819U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x2dU] = 0xd6990624U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x2eU] = 0xf40e3585U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x2fU] = 0x106aa070U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x30U] = 0x19a4c116U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x31U] = 0x1e376c08U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x32U] = 0x2748774cU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x33U] = 0x34b0bcb5U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x34U] = 0x391c0cb3U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x35U] = 0x4ed8aa4aU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x36U] = 0x5b9cca4fU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x37U] = 0x682e6ff3U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x38U] = 0x748f82eeU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x39U] = 0x78a5636fU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x3aU] = 0x84c87814U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x3bU] = 0x8cc70208U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x3cU] = 0x90befffaU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x3dU] = 0xa4506cebU;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x3eU] = 0xbef9a3f7U;
    vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[0x3fU] = 0xc67178f2U;
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_final(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__stl(Vtb_top_wrapper_tang9k___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top_wrapper_tang9k___024root___eval_phase__stl(Vtb_top_wrapper_tang9k___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_settle(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_top_wrapper_tang9k___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/tb_top_wrapper_tang9k.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_top_wrapper_tang9k___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__stl(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___stl_sequent__TOP__0(Vtb_top_wrapper_tang9k___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_stl(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_top_wrapper_tang9k___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___stl_sequent__TOP__0(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___eval_triggers__stl(Vtb_top_wrapper_tang9k___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top_wrapper_tang9k___024root___eval_phase__stl(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top_wrapper_tang9k___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_top_wrapper_tang9k___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__act(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_wrapper_tang9k.clk or negedge tb_top_wrapper_tang9k.rst_n)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_top_wrapper_tang9k.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_top_wrapper_tang9k.dut.top.uart_tx_inst.tx_reg)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb_top_wrapper_tang9k.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___dump_triggers__nba(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_wrapper_tang9k.clk or negedge tb_top_wrapper_tang9k.rst_n)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_top_wrapper_tang9k.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_top_wrapper_tang9k.dut.top.uart_tx_inst.tx_reg)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb_top_wrapper_tang9k.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root___ctor_var_reset(Vtb_top_wrapper_tang9k___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_top_wrapper_tang9k__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__uart_rx = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__fd = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__rx_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index = VL_RAND_RESET_I(7);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__shift_reg);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready_d = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0 = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch = VL_RAND_RESET_I(8);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index = VL_RAND_RESET_I(6);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block);
    VL_RAND_RESET_W(256, vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits = VL_RAND_RESET_Q(64);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block = VL_RAND_RESET_I(1);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index = VL_RAND_RESET_I(6);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t = VL_RAND_RESET_I(7);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0 = VL_RAND_RESET_I(32);
    vlSelf->tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
