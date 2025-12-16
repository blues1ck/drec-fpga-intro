// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(s_axis_tvalid,0,0);
    VL_OUT8(s_axis_tready,0,0);
    VL_IN8(s_axis_tstrb,3,0);
    VL_IN8(s_axis_tkeep,3,0);
    VL_IN8(s_axis_tlast,0,0);
    VL_IN8(s_axis_tid,7,0);
    VL_IN8(s_axis_tdest,3,0);
    VL_IN8(s_axis_tuser,3,0);
    VL_OUT8(m_axis_tvalid,0,0);
    VL_IN8(m_axis_tready,0,0);
    VL_OUT8(m_axis_tstrb,3,0);
    VL_OUT8(m_axis_tkeep,3,0);
    VL_OUT8(m_axis_tlast,0,0);
    VL_OUT8(m_axis_tid,7,0);
    VL_OUT8(m_axis_tdest,3,0);
    VL_OUT8(m_axis_tuser,3,0);
    CData/*0:0*/ axis_fifo__DOT__clk;
    CData/*0:0*/ axis_fifo__DOT__rst_n;
    CData/*0:0*/ axis_fifo__DOT__s_axis_tvalid;
    CData/*0:0*/ axis_fifo__DOT__s_axis_tready;
    CData/*3:0*/ axis_fifo__DOT__s_axis_tstrb;
    CData/*3:0*/ axis_fifo__DOT__s_axis_tkeep;
    CData/*0:0*/ axis_fifo__DOT__s_axis_tlast;
    CData/*7:0*/ axis_fifo__DOT__s_axis_tid;
    CData/*3:0*/ axis_fifo__DOT__s_axis_tdest;
    CData/*3:0*/ axis_fifo__DOT__s_axis_tuser;
    CData/*0:0*/ axis_fifo__DOT__m_axis_tvalid;
    CData/*0:0*/ axis_fifo__DOT__m_axis_tready;
    CData/*3:0*/ axis_fifo__DOT__m_axis_tstrb;
    CData/*3:0*/ axis_fifo__DOT__m_axis_tkeep;
    CData/*0:0*/ axis_fifo__DOT__m_axis_tlast;
    CData/*7:0*/ axis_fifo__DOT__m_axis_tid;
    CData/*3:0*/ axis_fifo__DOT__m_axis_tdest;
    CData/*3:0*/ axis_fifo__DOT__m_axis_tuser;
    CData/*2:0*/ axis_fifo__DOT__wr_ptr;
    CData/*2:0*/ axis_fifo__DOT__rd_ptr;
    CData/*3:0*/ axis_fifo__DOT__count;
    CData/*0:0*/ axis_fifo__DOT__full;
    CData/*0:0*/ axis_fifo__DOT__empty;
    CData/*0:0*/ axis_fifo__DOT__wait_clk_after_rst_n;
    CData/*0:0*/ axis_fifo__DOT__wr_en;
    CData/*0:0*/ axis_fifo__DOT__rd_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axis_fifo__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axis_fifo__DOT__rst_n__0;
    VL_IN(s_axis_tdata,31,0);
    VL_OUT(m_axis_tdata,31,0);
    IData/*31:0*/ axis_fifo__DOT__s_axis_tdata;
    IData/*31:0*/ axis_fifo__DOT__m_axis_tdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*56:0*/, 8> axis_fifo__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ axis_fifo__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ axis_fifo__DOT__DEPTH = 8U;
    static constexpr IData/*31:0*/ axis_fifo__DOT__TID_WIDTH = 8U;
    static constexpr IData/*31:0*/ axis_fifo__DOT__TDEST_WIDTH = 4U;
    static constexpr IData/*31:0*/ axis_fifo__DOT__TUSER_WIDTH = 4U;
    static constexpr IData/*31:0*/ axis_fifo__DOT__ADDR_WIDTH = 3U;
    static constexpr IData/*31:0*/ axis_fifo__DOT__TSTRB_WIDTH = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
