// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_wrapper_tang9k.h for the primary calling header

#ifndef VERILATED_VTB_TOP_WRAPPER_TANG9K___024ROOT_H_
#define VERILATED_VTB_TOP_WRAPPER_TANG9K___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top_wrapper_tang9k__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_wrapper_tang9k___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__clk;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__rst_n;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__uart_rx;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__rx_byte;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_data;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__rx_valid;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data_valid;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_data;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__start_hash;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_valid;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_last;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__data_in;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__state;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__byte_counter;
        CData/*6:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__send_index;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__have_hold;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__hold_byte;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__tx_ready_d;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__state;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__next_state;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d0;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_d1;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__rx_bits;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__bit_cnt;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__state;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__next_state;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__bit_cnt;
        CData/*7:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_data_latch;
        CData/*5:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__byte_index;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_ready;
        CData/*2:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__state;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_start;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_use_init;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_busy;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_ready_prev;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__seen_last;
        CData/*0:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__need_length_block;
        CData/*5:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__pad_index;
        CData/*6:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__t;
        CData/*1:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__state;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__tx_reg__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_rx_inst__DOT__cycle_cnt;
        SData/*15:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__uart_tx_inst__DOT__cycle_cnt;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__j;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__fd;
        VlWide<8>/*255:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__shift_reg;
        VlWide<16>/*511:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__block_buffer;
        VlWide<8>/*255:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_out;
        VlWide<16>/*511:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_block;
        VlWide<8>/*255:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__core_hash_init;
        VlWide<8>/*255:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__hash_state;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__i;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__a;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__b;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__c;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__d;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__e;
    };
    struct {
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__f;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__g;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h0;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h1;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h2;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h3;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h4;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h5;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h6;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__h7;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S1;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T1;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__S0;
        IData/*31:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__T2;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__7__x;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__8__x;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__9__x;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__10__x;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__11__x;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__ror__12__x;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__total_bits;
        VlUnpacked<IData/*31:0*/, 64> tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__K_ROM;
        VlUnpacked<IData/*31:0*/, 64> tb_top_wrapper_tang9k__DOT__dut__DOT__top__DOT__processor__DOT__sha_core__DOT__w;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd0c6c7ea__0;
    VlTriggerScheduler __VtrigSched_hbdd886a4__0;
    VlTriggerScheduler __VtrigSched_h2ca3361f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top_wrapper_tang9k__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_wrapper_tang9k___024root(Vtb_top_wrapper_tang9k__Syms* symsp, const char* v__name);
    ~Vtb_top_wrapper_tang9k___024root();
    VL_UNCOPYABLE(Vtb_top_wrapper_tang9k___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
