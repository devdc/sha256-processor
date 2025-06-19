// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_wrapper_tang9k.h for the primary calling header

#include "Vtb_top_wrapper_tang9k__pch.h"
#include "Vtb_top_wrapper_tang9k__Syms.h"
#include "Vtb_top_wrapper_tang9k___024root.h"

void Vtb_top_wrapper_tang9k___024root___ctor_var_reset(Vtb_top_wrapper_tang9k___024root* vlSelf);

Vtb_top_wrapper_tang9k___024root::Vtb_top_wrapper_tang9k___024root(Vtb_top_wrapper_tang9k__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_top_wrapper_tang9k___024root___ctor_var_reset(this);
}

void Vtb_top_wrapper_tang9k___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_top_wrapper_tang9k___024root::~Vtb_top_wrapper_tang9k___024root() {
}
