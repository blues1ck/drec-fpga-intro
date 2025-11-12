// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_top_tb.h for the primary calling header

#include "Vsa_top_tb__pch.h"

void Vsa_top_tb___024root___ctor_var_reset(Vsa_top_tb___024root* vlSelf);

Vsa_top_tb___024root::Vsa_top_tb___024root(Vsa_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsa_top_tb___024root___ctor_var_reset(this);
}

void Vsa_top_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsa_top_tb___024root::~Vsa_top_tb___024root() {
}
