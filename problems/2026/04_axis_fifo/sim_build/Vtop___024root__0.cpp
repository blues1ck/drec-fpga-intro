// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_fifo__DOT__clk = vlSelfRef.clk;
    vlSelfRef.axis_fifo__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.axis_fifo__DOT__s_axis_tdata = vlSelfRef.s_axis_tdata;
    vlSelfRef.axis_fifo__DOT__s_axis_tstrb = vlSelfRef.s_axis_tstrb;
    vlSelfRef.axis_fifo__DOT__s_axis_tkeep = vlSelfRef.s_axis_tkeep;
    vlSelfRef.axis_fifo__DOT__s_axis_tlast = vlSelfRef.s_axis_tlast;
    vlSelfRef.axis_fifo__DOT__s_axis_tid = vlSelfRef.s_axis_tid;
    vlSelfRef.axis_fifo__DOT__s_axis_tdest = vlSelfRef.s_axis_tdest;
    vlSelfRef.axis_fifo__DOT__s_axis_tuser = vlSelfRef.s_axis_tuser;
    vlSelfRef.axis_fifo__DOT__m_axis_tdata = (IData)(
                                                     (vlSelfRef.axis_fifo__DOT__mem
                                                      [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                      >> 0x00000019U));
    vlSelfRef.axis_fifo__DOT__m_axis_tstrb = (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.axis_fifo__DOT__mem
                                                         [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                         >> 0x00000015U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tkeep = (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.axis_fifo__DOT__mem
                                                         [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                         >> 0x00000011U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tlast = (1U & (IData)(
                                                           (vlSelfRef.axis_fifo__DOT__mem
                                                            [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                            >> 0x00000010U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tid = (0x000000ffU 
                                            & (IData)(
                                                      (vlSelfRef.axis_fifo__DOT__mem
                                                       [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                       >> 8U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tdest = (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.axis_fifo__DOT__mem
                                                         [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                         >> 4U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tuser = (0x0000000fU 
                                              & (IData)(
                                                        vlSelfRef.axis_fifo__DOT__mem
                                                        [vlSelfRef.axis_fifo__DOT__rd_ptr]));
    vlSelfRef.axis_fifo__DOT__s_axis_tvalid = vlSelfRef.s_axis_tvalid;
    vlSelfRef.axis_fifo__DOT__m_axis_tready = vlSelfRef.m_axis_tready;
    vlSelfRef.axis_fifo__DOT__full = (8U == (IData)(vlSelfRef.axis_fifo__DOT__count));
    vlSelfRef.axis_fifo__DOT__empty = (0U == (IData)(vlSelfRef.axis_fifo__DOT__count));
    vlSelfRef.m_axis_tdata = vlSelfRef.axis_fifo__DOT__m_axis_tdata;
    vlSelfRef.m_axis_tstrb = vlSelfRef.axis_fifo__DOT__m_axis_tstrb;
    vlSelfRef.m_axis_tkeep = vlSelfRef.axis_fifo__DOT__m_axis_tkeep;
    vlSelfRef.m_axis_tlast = vlSelfRef.axis_fifo__DOT__m_axis_tlast;
    vlSelfRef.m_axis_tid = vlSelfRef.axis_fifo__DOT__m_axis_tid;
    vlSelfRef.m_axis_tdest = vlSelfRef.axis_fifo__DOT__m_axis_tdest;
    vlSelfRef.m_axis_tuser = vlSelfRef.axis_fifo__DOT__m_axis_tuser;
    vlSelfRef.axis_fifo__DOT__s_axis_tready = (1U & 
                                               ((~ (IData)(vlSelfRef.axis_fifo__DOT__full)) 
                                                & (~ (IData)(vlSelfRef.axis_fifo__DOT__wait_clk_after_rst_n))));
    vlSelfRef.axis_fifo__DOT__m_axis_tvalid = (1U & 
                                               ((~ (IData)(vlSelfRef.axis_fifo__DOT__empty)) 
                                                & (~ (IData)(vlSelfRef.axis_fifo__DOT__wait_clk_after_rst_n))));
    vlSelfRef.s_axis_tready = vlSelfRef.axis_fifo__DOT__s_axis_tready;
    vlSelfRef.axis_fifo__DOT__wr_en = ((IData)(vlSelfRef.axis_fifo__DOT__s_axis_tvalid) 
                                       & ((~ (IData)(vlSelfRef.axis_fifo__DOT__full)) 
                                          & (IData)(vlSelfRef.axis_fifo__DOT__s_axis_tready)));
    vlSelfRef.m_axis_tvalid = vlSelfRef.axis_fifo__DOT__m_axis_tvalid;
    vlSelfRef.axis_fifo__DOT__rd_en = ((IData)(vlSelfRef.axis_fifo__DOT__m_axis_tvalid) 
                                       & ((~ (IData)(vlSelfRef.axis_fifo__DOT__empty)) 
                                          & (IData)(vlSelfRef.axis_fifo__DOT__m_axis_tready)));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.axis_fifo__DOT__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo__DOT__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.axis_fifo__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo__DOT__clk__0 
        = vlSelfRef.axis_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo__DOT__rst_n__0 
        = vlSelfRef.axis_fifo__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__axis_fifo__DOT__mem__v0;
    __VdlyVal__axis_fifo__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v0;
    __VdlyDim0__axis_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__axis_fifo__DOT__mem__v0;
    __VdlySet__axis_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyVal__axis_fifo__DOT__mem__v1;
    __VdlyVal__axis_fifo__DOT__mem__v1 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v1;
    __VdlyDim0__axis_fifo__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyVal__axis_fifo__DOT__mem__v2;
    __VdlyVal__axis_fifo__DOT__mem__v2 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v2;
    __VdlyDim0__axis_fifo__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlyVal__axis_fifo__DOT__mem__v3;
    __VdlyVal__axis_fifo__DOT__mem__v3 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v3;
    __VdlyDim0__axis_fifo__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__axis_fifo__DOT__mem__v4;
    __VdlyVal__axis_fifo__DOT__mem__v4 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v4;
    __VdlyDim0__axis_fifo__DOT__mem__v4 = 0;
    CData/*3:0*/ __VdlyVal__axis_fifo__DOT__mem__v5;
    __VdlyVal__axis_fifo__DOT__mem__v5 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v5;
    __VdlyDim0__axis_fifo__DOT__mem__v5 = 0;
    CData/*3:0*/ __VdlyVal__axis_fifo__DOT__mem__v6;
    __VdlyVal__axis_fifo__DOT__mem__v6 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo__DOT__mem__v6;
    __VdlyDim0__axis_fifo__DOT__mem__v6 = 0;
    // Body
    __VdlySet__axis_fifo__DOT__mem__v0 = 0U;
    if (vlSelfRef.axis_fifo__DOT__rst_n) {
        vlSelfRef.axis_fifo__DOT__count = (0x0000000fU 
                                           & ((2U == 
                                               (((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.axis_fifo__DOT__rd_en)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.axis_fifo__DOT__count))
                                               : ((1U 
                                                   == 
                                                   (((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.axis_fifo__DOT__rd_en)))
                                                   ? 
                                                  ((IData)(vlSelfRef.axis_fifo__DOT__count) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelfRef.axis_fifo__DOT__count))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((1U 
                                                 == 
                                                 (((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.axis_fifo__DOT__rd_en))) 
                                                << 1U) 
                                               | (2U 
                                                  == 
                                                  (((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.axis_fifo__DOT__rd_en)))))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                  << 1U) | (IData)(vlSelfRef.axis_fifo__DOT__rd_en))) 
                         << 1U) | (2U == (((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                           << 1U) | (IData)(vlSelfRef.axis_fifo__DOT__rd_en)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: axis_fifo.sv:110: Assertion failed in %Naxis_fifo: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.axis_fifo__DOT__wr_en) 
                                     << 1U) | (IData)(vlSelfRef.axis_fifo__DOT__rd_en)));
                    VL_STOP_MT("src/axis_fifo.sv", 110, "");
                }
            }
        }
    } else {
        vlSelfRef.axis_fifo__DOT__count = 0U;
    }
    if (vlSelfRef.axis_fifo__DOT__rst_n) {
        if (vlSelfRef.axis_fifo__DOT__rd_en) {
            vlSelfRef.axis_fifo__DOT__rd_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.axis_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.axis_fifo__DOT__wr_en) {
            __VdlyVal__axis_fifo__DOT__mem__v0 = vlSelfRef.axis_fifo__DOT__s_axis_tdata;
            __VdlyDim0__axis_fifo__DOT__mem__v0 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            __VdlySet__axis_fifo__DOT__mem__v0 = 1U;
            __VdlyVal__axis_fifo__DOT__mem__v1 = vlSelfRef.axis_fifo__DOT__s_axis_tstrb;
            __VdlyDim0__axis_fifo__DOT__mem__v1 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            __VdlyVal__axis_fifo__DOT__mem__v2 = vlSelfRef.axis_fifo__DOT__s_axis_tkeep;
            __VdlyDim0__axis_fifo__DOT__mem__v2 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            __VdlyVal__axis_fifo__DOT__mem__v3 = vlSelfRef.axis_fifo__DOT__s_axis_tlast;
            __VdlyDim0__axis_fifo__DOT__mem__v3 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            __VdlyVal__axis_fifo__DOT__mem__v4 = vlSelfRef.axis_fifo__DOT__s_axis_tid;
            __VdlyDim0__axis_fifo__DOT__mem__v4 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            __VdlyVal__axis_fifo__DOT__mem__v5 = vlSelfRef.axis_fifo__DOT__s_axis_tdest;
            __VdlyDim0__axis_fifo__DOT__mem__v5 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            __VdlyVal__axis_fifo__DOT__mem__v6 = vlSelfRef.axis_fifo__DOT__s_axis_tuser;
            __VdlyDim0__axis_fifo__DOT__mem__v6 = vlSelfRef.axis_fifo__DOT__wr_ptr;
            vlSelfRef.axis_fifo__DOT__wr_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.axis_fifo__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.axis_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.axis_fifo__DOT__wr_ptr = 0U;
    }
    vlSelfRef.axis_fifo__DOT__wait_clk_after_rst_n 
        = (1U & (~ (IData)(vlSelfRef.axis_fifo__DOT__rst_n)));
    if (__VdlySet__axis_fifo__DOT__mem__v0) {
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v0] 
            = ((0x0000000001ffffffULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v0]) 
               | ((QData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v0)) 
                  << 0x00000019U));
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v1] 
            = ((0x01fffffffe1fffffULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v1]) 
               | ((QData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v1)) 
                  << 0x00000015U));
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v2] 
            = ((0x01ffffffffe1ffffULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v2]) 
               | ((QData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v2)) 
                  << 0x00000011U));
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v3] 
            = ((0x01fffffffffeffffULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v3]) 
               | ((QData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v3)) 
                  << 0x00000010U));
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v4] 
            = ((0x01ffffffffff00ffULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v4]) 
               | ((QData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v4)) 
                  << 8U));
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v5] 
            = ((0x01ffffffffffff0fULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v5]) 
               | ((QData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v5)) 
                  << 4U));
        vlSelfRef.axis_fifo__DOT__mem[__VdlyDim0__axis_fifo__DOT__mem__v6] 
            = ((0x01fffffffffffff0ULL & vlSelfRef.axis_fifo__DOT__mem
                [__VdlyDim0__axis_fifo__DOT__mem__v6]) 
               | (IData)((IData)(__VdlyVal__axis_fifo__DOT__mem__v6)));
    }
    vlSelfRef.axis_fifo__DOT__full = (8U == (IData)(vlSelfRef.axis_fifo__DOT__count));
    vlSelfRef.axis_fifo__DOT__empty = (0U == (IData)(vlSelfRef.axis_fifo__DOT__count));
    vlSelfRef.axis_fifo__DOT__m_axis_tdata = (IData)(
                                                     (vlSelfRef.axis_fifo__DOT__mem
                                                      [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                      >> 0x00000019U));
    vlSelfRef.axis_fifo__DOT__m_axis_tstrb = (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.axis_fifo__DOT__mem
                                                         [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                         >> 0x00000015U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tkeep = (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.axis_fifo__DOT__mem
                                                         [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                         >> 0x00000011U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tlast = (1U & (IData)(
                                                           (vlSelfRef.axis_fifo__DOT__mem
                                                            [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                            >> 0x00000010U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tid = (0x000000ffU 
                                            & (IData)(
                                                      (vlSelfRef.axis_fifo__DOT__mem
                                                       [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                       >> 8U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tdest = (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.axis_fifo__DOT__mem
                                                         [vlSelfRef.axis_fifo__DOT__rd_ptr] 
                                                         >> 4U)));
    vlSelfRef.axis_fifo__DOT__m_axis_tuser = (0x0000000fU 
                                              & (IData)(
                                                        vlSelfRef.axis_fifo__DOT__mem
                                                        [vlSelfRef.axis_fifo__DOT__rd_ptr]));
    vlSelfRef.axis_fifo__DOT__s_axis_tready = (1U & 
                                               ((~ (IData)(vlSelfRef.axis_fifo__DOT__full)) 
                                                & (~ (IData)(vlSelfRef.axis_fifo__DOT__wait_clk_after_rst_n))));
    vlSelfRef.axis_fifo__DOT__m_axis_tvalid = (1U & 
                                               ((~ (IData)(vlSelfRef.axis_fifo__DOT__empty)) 
                                                & (~ (IData)(vlSelfRef.axis_fifo__DOT__wait_clk_after_rst_n))));
    vlSelfRef.m_axis_tdata = vlSelfRef.axis_fifo__DOT__m_axis_tdata;
    vlSelfRef.m_axis_tstrb = vlSelfRef.axis_fifo__DOT__m_axis_tstrb;
    vlSelfRef.m_axis_tkeep = vlSelfRef.axis_fifo__DOT__m_axis_tkeep;
    vlSelfRef.m_axis_tlast = vlSelfRef.axis_fifo__DOT__m_axis_tlast;
    vlSelfRef.m_axis_tid = vlSelfRef.axis_fifo__DOT__m_axis_tid;
    vlSelfRef.m_axis_tdest = vlSelfRef.axis_fifo__DOT__m_axis_tdest;
    vlSelfRef.m_axis_tuser = vlSelfRef.axis_fifo__DOT__m_axis_tuser;
    vlSelfRef.s_axis_tready = vlSelfRef.axis_fifo__DOT__s_axis_tready;
    vlSelfRef.axis_fifo__DOT__wr_en = ((IData)(vlSelfRef.axis_fifo__DOT__s_axis_tvalid) 
                                       & ((~ (IData)(vlSelfRef.axis_fifo__DOT__full)) 
                                          & (IData)(vlSelfRef.axis_fifo__DOT__s_axis_tready)));
    vlSelfRef.m_axis_tvalid = vlSelfRef.axis_fifo__DOT__m_axis_tvalid;
    vlSelfRef.axis_fifo__DOT__rd_en = ((IData)(vlSelfRef.axis_fifo__DOT__m_axis_tvalid) 
                                       & ((~ (IData)(vlSelfRef.axis_fifo__DOT__empty)) 
                                          & (IData)(vlSelfRef.axis_fifo__DOT__m_axis_tready)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("src/axis_fifo.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/axis_fifo.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/axis_fifo.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axis_tvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tstrb & 0xf0U)))) {
        Verilated::overWidthError("s_axis_tstrb");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tkeep & 0xf0U)))) {
        Verilated::overWidthError("s_axis_tkeep");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tlast & 0xfeU)))) {
        Verilated::overWidthError("s_axis_tlast");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tdest & 0xf0U)))) {
        Verilated::overWidthError("s_axis_tdest");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tuser & 0xf0U)))) {
        Verilated::overWidthError("s_axis_tuser");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axis_tready & 0xfeU)))) {
        Verilated::overWidthError("m_axis_tready");
    }
}
#endif  // VL_DEBUG
