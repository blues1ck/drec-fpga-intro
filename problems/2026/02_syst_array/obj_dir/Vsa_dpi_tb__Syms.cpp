// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsa_dpi_tb__pch.h"
#include "Vsa_dpi_tb.h"
#include "Vsa_dpi_tb___024root.h"

// FUNCTIONS
Vsa_dpi_tb__Syms::~Vsa_dpi_tb__Syms()
{
}

Vsa_dpi_tb__Syms::Vsa_dpi_tb__Syms(VerilatedContext* contextp, const char* namep, Vsa_dpi_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(676);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_sa_dpi_tb.configure(this, name(), "sa_dpi_tb", "sa_dpi_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__0__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[0].gen_cols[0].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__1__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[0].gen_cols[1].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__2__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[0].gen_cols[2].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__0__KET____gen_cols__BRA__3__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[0].gen_cols[3].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__0__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[1].gen_cols[0].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__1__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[1].gen_cols[1].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__2__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[1].gen_cols[2].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__1__KET____gen_cols__BRA__3__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[1].gen_cols[3].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__0__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[2].gen_cols[0].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__1__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[2].gen_cols[1].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__2__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[2].gen_cols[2].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__2__KET____gen_cols__BRA__3__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[2].gen_cols[3].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__0__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[3].gen_cols[0].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__1__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[3].gen_cols[1].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__2__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[3].gen_cols[2].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__dut__gen_rows__BRA__3__KET____gen_cols__BRA__3__KET____u_pe.configure(this, name(), "sa_dpi_tb.dut.gen_rows[3].gen_cols[3].u_pe", "u_pe", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__unnamedblk5.configure(this, name(), "sa_dpi_tb.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_sa_dpi_tb__unnamedblk5__unnamedblk12__unnamedblk13.configure(this, name(), "sa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13", "unnamedblk13", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
