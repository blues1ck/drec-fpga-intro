// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSA_DPI_TB__SYMS_H_
#define VERILATED_VSA_DPI_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsa_dpi_tb.h"

// INCLUDE MODULE CLASSES
#include "Vsa_dpi_tb___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsa_dpi_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsa_dpi_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsa_dpi_tb___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_sa_dpi_tb;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__0__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__1__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__2__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__3__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__0__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__1__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__2__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__3__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__0__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__1__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__2__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__3__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__0__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__1__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__2__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__3__KET____u_pe;
    VerilatedScope __Vscope_sa_dpi_tb__unnamedblk5;
    VerilatedScope __Vscope_sa_dpi_tb__unnamedblk5__unnamedblk12__unnamedblk13;

    // CONSTRUCTORS
    Vsa_dpi_tb__Syms(VerilatedContext* contextp, const char* namep, Vsa_dpi_tb* modelp);
    ~Vsa_dpi_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
