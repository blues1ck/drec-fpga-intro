// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSA_TOP_TB__SYMS_H_
#define VERILATED_VSA_TOP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsa_top_tb.h"

// INCLUDE MODULE CLASSES
#include "Vsa_top_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsa_top_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsa_top_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsa_top_tb___024root           TOP;

    // CONSTRUCTORS
    Vsa_top_tb__Syms(VerilatedContext* contextp, const char* namep, Vsa_top_tb* modelp);
    ~Vsa_top_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
