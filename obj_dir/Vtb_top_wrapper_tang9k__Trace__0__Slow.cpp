// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_top_wrapper_tang9k__Syms.h"


VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_init_sub__TOP__0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_top_wrapper_tang9k", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+140,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+142,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+144,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+146,0,"BIT_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"uart_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"uart_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"led0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+137,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+138,0,"rx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"led0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"internal_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+148,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"BAUD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"CLK_FREQ_MHZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,0,"rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"tx_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"tx_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"start_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"data_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+11,0,"hash_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+19,0,"hash_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"RECEIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"WAIT_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"SEND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"byte_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"send_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+23,0,"have_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"hold_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+25,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+33,0,"tx_ready_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("processor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"data_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+19,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+34,0,"block_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+50,0,"byte_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+51,0,"block_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"PAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"HASH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+53,0,"core_hash_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+61,0,"core_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"core_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+63,0,"core_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+79,0,"core_hash_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+87,0,"core_use_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"core_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"core_ready_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"hash_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declQuad(c+90,0,"total_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+92,0,"seen_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"need_length_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"pad_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+63,0,"block_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+79,0,"hash_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+87,0,"use_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+53,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+61,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"H0_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"H1_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"H2_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"H3_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"H4_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"H5_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"H6_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"H7_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"h0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"h1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"h2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"h3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"h4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"h5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"h6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"h7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+113,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+166,0,"PREP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"COMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"S1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"ch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"T1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"maj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"T2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("uart_rx_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"CLK_FRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"rx_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"rx_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"rx_pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"S_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"S_REC_BYTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"S_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"S_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+122,0,"rx_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"rx_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"rx_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"rx_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+127,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("uart_tx_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"CLK_FRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"tx_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"tx_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"tx_pin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"S_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"S_SEND_BYTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"S_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+129,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+130,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+131,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"tx_data_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_init_top(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_wrapper_tang9k___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_top_wrapper_tang9k___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_top_wrapper_tang9k___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_register(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top_wrapper_tang9k___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_top_wrapper_tang9k___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_top_wrapper_tang9k___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_top_wrapper_tang9k___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_const_0_sub_0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_const_0\n"); );
    // Init
    Vtb_top_wrapper_tang9k___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_wrapper_tang9k___024root*>(voidSelf);
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_wrapper_tang9k___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_const_0_sub_0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+140,(2.70000000000000000e+07));
    bufp->fullDouble(oldp+142,(1.15200000000000000e+05));
    bufp->fullDouble(oldp+144,(3.70370370370370381e+01));
    bufp->fullDouble(oldp+146,(8.68055555555555475e+03));
    bufp->fullIData(oldp+148,(0x19bfcc0U),32);
    bufp->fullIData(oldp+149,(0x1c200U),32);
    bufp->fullIData(oldp+150,(0x1bU),32);
    bufp->fullIData(oldp+151,(0U),32);
    bufp->fullIData(oldp+152,(1U),32);
    bufp->fullIData(oldp+153,(2U),32);
    bufp->fullIData(oldp+154,(3U),32);
    bufp->fullIData(oldp+155,(4U),32);
    bufp->fullIData(oldp+156,(0x40U),32);
    bufp->fullIData(oldp+157,(0x6a09e667U),32);
    bufp->fullIData(oldp+158,(0xbb67ae85U),32);
    bufp->fullIData(oldp+159,(0x3c6ef372U),32);
    bufp->fullIData(oldp+160,(0xa54ff53aU),32);
    bufp->fullIData(oldp+161,(0x510e527fU),32);
    bufp->fullIData(oldp+162,(0x9b05688cU),32);
    bufp->fullIData(oldp+163,(0x1f83d9abU),32);
    bufp->fullIData(oldp+164,(0x5be0cd19U),32);
    bufp->fullCData(oldp+165,(0U),2);
    bufp->fullCData(oldp+166,(1U),2);
    bufp->fullCData(oldp+167,(2U),2);
    bufp->fullCData(oldp+168,(3U),2);
    bufp->fullIData(oldp+169,(0x1bU),32);
    bufp->fullBit(oldp+170,(1U));
    bufp->fullIData(oldp+171,(0xeaU),32);
    bufp->fullIData(oldp+172,(5U),32);
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_full_0_sub_0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_full_0\n"); );
    // Init
    Vtb_top_wrapper_tang9k___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_wrapper_tang9k___024root*>(voidSelf);
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_wrapper_tang9k___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_wrapper_tang9k___024root__trace_full_0_sub_0(Vtb_top_wrapper_tang9k___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top_wrapper_tang9k__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_wrapper_tang9k___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg));
    bufp->fullCData(oldp+2,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data),8);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid));
    bufp->fullCData(oldp+5,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data),8);
    bufp->fullBit(oldp+6,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready));
    bufp->fullBit(oldp+7,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last));
    bufp->fullCData(oldp+10,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in),8);
    bufp->fullWData(oldp+11,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state),256);
    bufp->fullBit(oldp+19,((4U == (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state))));
    bufp->fullCData(oldp+20,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state),3);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter),8);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index),7);
    bufp->fullBit(oldp+23,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold));
    bufp->fullCData(oldp+24,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte),8);
    bufp->fullWData(oldp+25,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__shift_reg),256);
    bufp->fullBit(oldp+33,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready_d));
    bufp->fullWData(oldp+34,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer),512);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index),6);
    bufp->fullBit(oldp+51,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready));
    bufp->fullCData(oldp+52,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state),3);
    bufp->fullWData(oldp+53,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out),256);
    bufp->fullBit(oldp+61,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start));
    bufp->fullWData(oldp+63,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block),512);
    bufp->fullWData(oldp+79,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init),256);
    bufp->fullBit(oldp+87,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init));
    bufp->fullBit(oldp+88,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy));
    bufp->fullBit(oldp+89,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev));
    bufp->fullQData(oldp+90,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits),64);
    bufp->fullBit(oldp+92,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last));
    bufp->fullBit(oldp+93,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block));
    bufp->fullCData(oldp+94,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index),6);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__i),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g),32);
    bufp->fullIData(oldp+103,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h),32);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1),32);
    bufp->fullIData(oldp+106,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2),32);
    bufp->fullIData(oldp+107,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3),32);
    bufp->fullIData(oldp+108,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5),32);
    bufp->fullIData(oldp+110,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6),32);
    bufp->fullIData(oldp+111,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7),32);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t),7);
    bufp->fullCData(oldp+113,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state),2);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S1),32);
    bufp->fullIData(oldp+115,(((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e 
                                & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f) 
                               ^ ((~ vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e) 
                                  & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g))),32);
    bufp->fullIData(oldp+116,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1),32);
    bufp->fullIData(oldp+117,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0),32);
    bufp->fullIData(oldp+118,(((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b) 
                               ^ ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                   & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c) 
                                  ^ (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                                     & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c)))),32);
    bufp->fullIData(oldp+119,((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0 
                               + ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                   & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b) 
                                  ^ ((vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a 
                                      & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c) 
                                     ^ (vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b 
                                        & vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c))))),32);
    bufp->fullCData(oldp+120,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state),3);
    bufp->fullCData(oldp+121,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state),3);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0));
    bufp->fullBit(oldp+123,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1));
    bufp->fullBit(oldp+124,(((~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0)) 
                             & (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1))));
    bufp->fullCData(oldp+125,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits),8);
    bufp->fullSData(oldp+126,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt),16);
    bufp->fullCData(oldp+127,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt),3);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state),3);
    bufp->fullCData(oldp+129,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state),3);
    bufp->fullSData(oldp+130,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt),16);
    bufp->fullCData(oldp+131,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt),3);
    bufp->fullCData(oldp+132,(vlSelfRef.tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch),8);
    bufp->fullBit(oldp+133,(vlSelfRef.tb_top_wrapper_tang9k__DOT__clk));
    bufp->fullBit(oldp+134,(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n));
    bufp->fullBit(oldp+135,(vlSelfRef.tb_top_wrapper_tang9k__DOT__uart_rx));
    bufp->fullIData(oldp+136,(vlSelfRef.tb_top_wrapper_tang9k__DOT__j),32);
    bufp->fullIData(oldp+137,(vlSelfRef.tb_top_wrapper_tang9k__DOT__fd),32);
    bufp->fullCData(oldp+138,(vlSelfRef.tb_top_wrapper_tang9k__DOT__rx_byte),8);
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelfRef.tb_top_wrapper_tang9k__DOT__rst_n)))));
}
