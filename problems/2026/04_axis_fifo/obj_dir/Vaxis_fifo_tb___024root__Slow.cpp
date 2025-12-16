// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxis_fifo_tb.h for the primary calling header

#include "Vaxis_fifo_tb__pch.h"

void Vaxis_fifo_tb___024root___ctor_var_reset(Vaxis_fifo_tb___024root* vlSelf);

Vaxis_fifo_tb___024root::Vaxis_fifo_tb___024root(Vaxis_fifo_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaxis_fifo_tb___024root___ctor_var_reset(this);
}

void Vaxis_fifo_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaxis_fifo_tb___024root::~Vaxis_fifo_tb___024root() {
}
