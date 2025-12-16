// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxis_fifo_tb.h for the primary calling header

#ifndef VERILATED_VAXIS_FIFO_TB___024ROOT_H_
#define VERILATED_VAXIS_FIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vaxis_fifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxis_fifo_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ axis_fifo_tb__DOT__clk;
    CData/*0:0*/ axis_fifo_tb__DOT__rst_n;
    CData/*0:0*/ axis_fifo_tb__DOT__s_axis_tvalid;
    CData/*0:0*/ axis_fifo_tb__DOT__s_axis_tlast;
    CData/*0:0*/ axis_fifo_tb__DOT__m_axis_tready;
    CData/*0:0*/ axis_fifo_tb__DOT__test_passed;
    CData/*2:0*/ axis_fifo_tb__DOT__dut__DOT__wr_ptr;
    CData/*2:0*/ axis_fifo_tb__DOT__dut__DOT__rd_ptr;
    CData/*3:0*/ axis_fifo_tb__DOT__dut__DOT__count;
    CData/*0:0*/ axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n;
    CData/*0:0*/ axis_fifo_tb__DOT__dut__DOT__wr_en;
    CData/*0:0*/ axis_fifo_tb__DOT__dut__DOT__rd_en;
    CData/*0:0*/ __VdlyVal__axis_fifo_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__axis_fifo_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axis_fifo_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axis_fifo_tb__DOT__rst_n__0;
    IData/*31:0*/ axis_fifo_tb__DOT__s_axis_tdata;
    IData/*31:0*/ axis_fifo_tb__DOT__error_count;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*32:0*/, 8> axis_fifo_tb__DOT__dut__DOT__fifo_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlQueue<CData/*0:0*/> axis_fifo_tb__DOT__test_tlast;
    VlQueue<IData/*31:0*/> axis_fifo_tb__DOT__test_data;
    VlQueue<IData/*31:0*/> axis_fifo_tb__DOT__received_data;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h682c734a__0;

    // INTERNAL VARIABLES
    Vaxis_fifo_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxis_fifo_tb___024root(Vaxis_fifo_tb__Syms* symsp, const char* v__name);
    ~Vaxis_fifo_tb___024root();
    VL_UNCOPYABLE(Vaxis_fifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
