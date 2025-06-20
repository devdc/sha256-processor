// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_top_wrapper_tang9k__Syms.h"


void Vtb_top_wrapper_tang9k___024root__trace_chg_0_sub_0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_top_wrapper_tang9k___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_chg_0\n"); );
    // Init
    Vtb_top_wrapper_tang9k___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_wrapper_tang9k___024root*>(voidSelf);
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_top_wrapper_tang9k___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top_wrapper_tang9k___024root__trace_chg_0_sub_0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data),8);
        bufp->chgBit(oldp+2,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid));
        bufp->chgCData(oldp+4,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data),8);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last));
        bufp->chgCData(oldp+9,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in),8);
        bufp->chgWData(oldp+10,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state),256);
        bufp->chgBit(oldp+18,((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))));
        bufp->chgCData(oldp+19,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state),3);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index),7);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold));
        bufp->chgCData(oldp+23,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte),8);
        bufp->chgWData(oldp+24,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__shift_reg),256);
        bufp->chgBit(oldp+32,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready_d));
        bufp->chgWData(oldp+33,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer),512);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index),6);
        bufp->chgBit(oldp+50,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready));
        bufp->chgCData(oldp+51,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state),3);
        bufp->chgWData(oldp+52,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out),256);
        bufp->chgBit(oldp+60,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start));
        bufp->chgWData(oldp+62,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block),512);
        bufp->chgWData(oldp+78,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init),256);
        bufp->chgBit(oldp+86,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init));
        bufp->chgBit(oldp+87,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy));
        bufp->chgBit(oldp+88,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev));
        bufp->chgQData(oldp+89,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits),64);
        bufp->chgBit(oldp+91,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last));
        bufp->chgBit(oldp+92,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block));
        bufp->chgCData(oldp+93,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index),6);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__i),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6),32);
        bufp->chgIData(oldp+110,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7),32);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t),7);
        bufp->chgCData(oldp+112,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state),2);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S1),32);
        bufp->chgIData(oldp+114,(((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
                                   & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f) 
                                  ^ ((~ vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e) 
                                     & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g))),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0),32);
        bufp->chgIData(oldp+117,(((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                   & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b) 
                                  ^ ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                      & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c) 
                                     ^ (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                                        & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c)))),32);
        bufp->chgIData(oldp+118,((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0 
                                  + ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                      & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b) 
                                     ^ ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                         & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c) 
                                        ^ (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                                           & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c))))),32);
        bufp->chgCData(oldp+119,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state),3);
        bufp->chgCData(oldp+120,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state),3);
        bufp->chgBit(oldp+121,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1));
        bufp->chgBit(oldp+123,(((~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0)) 
                                & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1))));
        bufp->chgCData(oldp+124,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits),8);
        bufp->chgSData(oldp+125,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt),16);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt),3);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state),3);
        bufp->chgCData(oldp+128,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state),3);
        bufp->chgSData(oldp+129,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt),16);
        bufp->chgCData(oldp+130,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt),3);
        bufp->chgCData(oldp+131,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch),8);
    }
    bufp->chgBit(oldp+132,(vlSelfRef.tb_top_wrapper_tang9k__DOT__clk));
    bufp->chgBit(oldp+133,(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n));
    bufp->chgBit(oldp+134,(vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx));
    bufp->chgIData(oldp+135,(vlSelfRef.tb_top_wrapper_tang9k__DOT__j),32);
    bufp->chgIData(oldp+136,(vlSelfRef.tb_top_wrapper_tang9k__DOT__fd),32);
    bufp->chgCData(oldp+137,(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte),8);
    bufp->chgBit(oldp+138,((1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n)))));
}

void Vtb_top_wrapper_tang9k___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_cleanup\n"); );
    // Init
    Vtb_top_wrapper_tang9k___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_wrapper_tang9k___024root*>(voidSelf);
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
