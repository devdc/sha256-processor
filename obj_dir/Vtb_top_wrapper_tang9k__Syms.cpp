// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top_wrapper_tang9k__pch.h"
#include "Vtb_top_wrapper_tang9k.h"
#include "Vtb_top_wrapper_tang9k___024root.h"

// FUNCTIONS
Vtb_top_wrapper_tang9k__Syms::~Vtb_top_wrapper_tang9k__Syms()
{
}

Vtb_top_wrapper_tang9k__Syms::Vtb_top_wrapper_tang9k__Syms(VerilatedContext* contextp, const char* namep, Vtb_top_wrapper_tang9k* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(666);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
