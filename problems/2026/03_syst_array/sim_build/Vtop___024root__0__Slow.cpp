// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__a_vld = 0U;
    vlSelfRef.sa_credit_top__DOT__count = 0U;
    vlSelfRef.sa_credit_top__DOT__is_a = 0U;
    vlSelfRef.sa_credit_top__DOT__last_line = 0U;
    vlSelfRef.sa_credit_top__DOT__c_vld_top2sa = 0U;
    vlSelfRef.sa_credit_top__DOT__we = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift = 8U;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr = 0U;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr = 0U;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count = 0U;
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count = 8U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[0U][0U] = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[0U][1U] = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[0U][2U] = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[0U][3U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("sa_credit_top.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sa_credit_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge sa_credit_top.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.sr_gen[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.sr_gen[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.sr_gen[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.sr_gen[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.sr_gen[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.sr_gen[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_vld_inst.sr_gen[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_vld_inst.sr_gen[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_vld_inst.sr_gen[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_vld_inst.sr_gen[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_vld_inst.sr_gen[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_vld_inst.sr_gen[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_top2core_inst.sr_gen[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_top2core_inst.sr_gen[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_top2core_inst.sr_gen[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_top2core_inst.sr_gen[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_top2core_inst.sr_gen[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_top2core_inst.sr_gen[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_inst.sr_gen[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_inst.sr_gen[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_inst.sr_gen[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_inst.sr_gen[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_inst.sr_gen[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_inst.sr_gen[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_core2top_inst.sr_gen[0].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_core2top_inst.sr_gen[0].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_core2top_inst.sr_gen[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_core2top_inst.sr_gen[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_core2top_inst.sr_gen[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_core2top_inst.sr_gen[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_core2top_inst.sr_gen[0].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_core2top_inst.sr_gen[0].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_core2top_inst.sr_gen[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000025U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 37 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_core2top_inst.sr_gen[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000026U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 38 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_core2top_inst.sr_gen[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000027U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 39 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_core2top_inst.sr_gen[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000028U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 40 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000029U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 41 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 42 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 43 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 44 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 45 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 46 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 47 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[0].pe_inner[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000030U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 48 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000031U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 49 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000032U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 50 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000033U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 51 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000034U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 52 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000035U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 53 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000036U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 54 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000037U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 55 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[1].pe_inner[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000038U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 56 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000039U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 57 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 58 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 59 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 60 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 61 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 62 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 63 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[2].pe_inner[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.pe_outer[3].pe_inner[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @(posedge sa_credit_top.fifo_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @(negedge sa_credit_top.fifo_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 74 is active: @(posedge sa_credit_top.credit_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 75 is active: @(negedge sa_credit_top.credit_inst.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->i_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7080593918254587807ull);
    vlSelf->o_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17592161582949837265ull);
    vlSelf->i_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3807069498417282306ull);
    vlSelf->o_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087150146324853835ull);
    vlSelf->i_ab_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15743503939719057678ull);
    vlSelf->o_c_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 997874246595631452ull);
    vlSelf->sa_credit_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15559563279460463826ull);
    vlSelf->sa_credit_top__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2153654118060738384ull);
    vlSelf->sa_credit_top__DOT__i_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5112164696796157822ull);
    vlSelf->sa_credit_top__DOT__o_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9330573562838582134ull);
    vlSelf->sa_credit_top__DOT__i_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12854594834368534554ull);
    vlSelf->sa_credit_top__DOT__o_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4559296522627498297ull);
    vlSelf->sa_credit_top__DOT__i_ab_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18339324548200519387ull);
    vlSelf->sa_credit_top__DOT__o_c_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12197961209905261695ull);
    vlSelf->sa_credit_top__DOT__a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9577134715616812325ull);
    vlSelf->sa_credit_top__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17783282786352990540ull);
    vlSelf->sa_credit_top__DOT__is_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4701749963789560249ull);
    vlSelf->sa_credit_top__DOT__last_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4241051455672130559ull);
    vlSelf->sa_credit_top__DOT__c_vld_top2sa = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8034014193118792850ull);
    vlSelf->sa_credit_top__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9317588628071659423ull);
    vlSelf->sa_credit_top__DOT__c_vld_sa2top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16698531277931636800ull);
    vlSelf->sa_credit_top__DOT__c_line_sa2fifo = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 111694831053045589ull);
    vlSelf->sa_credit_top__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9302143708770404870ull);
    vlSelf->sa_credit_top__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7591279916637018457ull);
    vlSelf->sa_credit_top__DOT__fifo_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13047154343777495745ull);
    vlSelf->sa_credit_top__DOT__fifo_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10201290370685864205ull);
    vlSelf->sa_credit_top__DOT__inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6573366876800773815ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11699888967946152030ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6828042167099442361ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7640122417410221491ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576568840053889195ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2993312117527385313ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__i_a_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12923941032259125188ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5860792570897807062ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__o_c_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12500685034713394684ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13526979107318013612ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17462842271455657263ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10476468445805356539ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__a_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3362179337732422897ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10146608207230452826ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11668039779430419823ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6793943208276758723ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8482839565474929461ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398403631184858821ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11505700363829778595ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16161059259835124653ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16595270722764101364ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18280987211240474942ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12412733116511559401ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13216533172820791824ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12657981545095821173ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1596918161707433769ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13503090484718411312ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17042935675901394020ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14836994294979888476ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1260059976341703024ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1274591891811031534ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7334637137232274279ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539720478866805576ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13196703317314926827ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9883334814923617841ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10704556407469873691ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2938184268856077289ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8231794686069485162ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13982053377345293882ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10162551641859848450ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6365139456636561262ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17883171765070749993ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14298322882831758872ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6689351764567891511ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3685066330501495798ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16830520496433679459ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14134268643658541712ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15613745492913518632ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 526806575445917693ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4389767631723868353ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14372453822150989489ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15476427239234444704ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15087775711914650507ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14027124920529168890ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14429506236061408055ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1660513941208971206ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4186163262155709514ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13801796386211997655ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1567975205585424783ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14626562482806846792ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7934435495122109846ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14712794128070097673ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 548235227455519457ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5098301156541775397ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6113809743818859304ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4480805024540770109ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14594143441333026635ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071712474654741011ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2661015528217995046ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11404480475141991777ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9151249415821092231ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5310153088476632349ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18039152055455090064ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9227306082221628487ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11216159671372396295ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5822514273364242298ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14332665913557207840ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809128956164405813ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10349025492825254809ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3900913290215103365ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 565413958330754851ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4487777414357685196ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 99043610440993513ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14466477698372277354ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 819047933349151964ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15186015099234161091ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3470358306708583234ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2913706973645893069ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8527590332382082549ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8951915932463814596ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3116750199962430870ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5026387559610389097ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4338165732449190796ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7212590608983116507ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9273212899435222681ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11219739995876927797ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10153772691268610980ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11535481663927140343ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5491208648032058725ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1744487102395801472ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18137586442037091805ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3032956510135276179ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10675012577692441414ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16376071363699877260ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7889973865139087371ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5843769313493853757ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11603290024149811046ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13337763861119089939ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11179184577141889347ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13517885541728055647ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6306463398831533128ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14604282082413284372ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9020773158188469714ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10124214079040643631ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1861791355661029319ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17620933317959585030ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2602754472598889060ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10488397561443130943ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18032227118023032271ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17892983846127407189ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6654485672903502534ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17028690956174492119ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4203762747165656973ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8565088837088665263ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12990023305210873839ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768855393307132501ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2443591486138435459ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16858572919148556647ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 235842610490104998ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4749092609912454116ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18168105971302589191ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8597282439027290562ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12623082199263102735ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14403360713717847839ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18032734483991427553ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2229095831803430142ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16832702348119008417ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11722083794916575284ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6517986237052834462ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5538699317112891055ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16605599921467590143ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15765116604828119954ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3317122151466975309ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 697364667944468102ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17462955256886177764ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3861272279328414076ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5992413622062318952ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 627654135958508206ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696407780284430249ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5099517252201765075ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6653757947212448948ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4935981691480122943ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17592481766331091314ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11826964631944124592ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15821162522951815565ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11075368336359662074ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9333059045561710259ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1208784847215545063ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 477130881293473588ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 484586896954827777ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13602895063566271575ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6464770036025940255ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16170696653527361765ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 82509491303332942ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4331970995414727194ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 636884540402285085ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7322163860292007183ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4319678498932051113ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 484511903798064611ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9096333753487583350ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4247452618808703323ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8412901959952310510ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6871291048572830548ull);
        }
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6511894829423997827ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15996966751694737746ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366059764055194472ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3703317138512419742ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214629037421472647ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14659510075169713962ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14831168125038851895ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1713527360271298118ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17843802978492075596ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2116980572407760323ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14286954085139006687ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3869331893676150010ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1976173015536382098ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8304069060868383327ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7039515006431853335ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15502107304543012615ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10556137670508864581ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16783720485354406613ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11142850364370318103ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10276452299927479846ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9455080847535513139ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13811748385642275209ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12997998773582393817ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5208065189233274571ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15789027085476402375ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15210042075567577076ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067066499705405434ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11255726585019979282ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13122963049743478933ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 463792769436014709ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16706996597365898710ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15103878438513934765ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10374268027939865441ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13378665588606939601ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 395891542823063423ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9176798509584042892ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12689070621796225094ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11037074587907678805ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16188400818608769836ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14263665468344220115ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4440829034503682717ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8870448998670811429ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15389821507812116141ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13201717373505363711ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14241404651447349676ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10102240054202193180ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7819574237643587344ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10148097161183011875ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906421219256401357ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15305392971146811131ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9689707069385410063ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17784629839725072592ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6199278098437045146ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2964776918420272383ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2561940119240352371ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16189652665451607760ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10126638884932760082ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17740255207021426496ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5629558140934255982ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10751202924637452767ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11870291527231884458ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 205183393610333002ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4844122062521804214ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17323700523434723566ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6499274129057720132ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1237732993184053912ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14710539512342417112ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11560255127832845044ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8127466437693648774ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498787135855299497ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1978042830648673162ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10169479073748810659ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16907158555285024276ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6264693014091867027ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8997124656313850256ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13325562381980071166ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12279526141004459325ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8256059519445027406ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16486286176712575858ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13225939207432508128ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9491945415585250999ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9577520331641376934ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15045020217870139517ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17718613042109689203ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14076428317819383516ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17042059703911037989ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5404938323576883329ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 781162616860817933ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15774278826762402176ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5594138031179456844ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14514665268022820810ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5378897229662986644ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14489500784832923556ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15876613730054688219ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7993873640917896008ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1833860231241481287ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16129374282086255525ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 897093156914660007ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7343690913147825717ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6795399779267954060ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13820992034499815686ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8482498428254425978ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3620675344218712717ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2113400395317050042ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8599790111065727485ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9706525526743621751ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4524560532780645583ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17877338081459808624ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11144180602222189799ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13013877437207670597ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8072583093807999349ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2118252592588626528ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13466403457417815359ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9449655026503150299ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9911068979823073772ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4383279735402908245ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10991090537281840832ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1610141809159681566ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2201821148910221859ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4959985100314203313ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15372804337897572874ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 695884104120509383ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7633906512871979846ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18415907431144541566ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17905255136988556220ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7772888422707595740ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14252618777846539834ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15548567436594888959ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2103371335327111274ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13880911709231690920ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 57504046415098371ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2616377213735133180ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18276251481663625872ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12737501183005427435ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6431040704088330387ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5048510369124106149ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8707792283068170229ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7992985062327046885ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9934487994911055295ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15501758778823600159ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6057455546855226133ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6613890465509883713ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13979169368593609055ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 371376991647471210ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17816930026493817496ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15778318503224901023ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4006848473910167151ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2522389750186457254ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4163321188584894515ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18430260117319478978ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 32088791120016856ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262577946100821008ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12731300125983441245ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6706604218116032631ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6047465286593899524ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3350560145255093209ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7184869839940106714ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3470405914029831044ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6080702306158789011ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6381866050471675398ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10097733671869376246ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5924895434226948830ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5594916074774978812ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11926657832966725326ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15668036571555666806ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1814534768535792485ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15184280708508144078ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3178824750986780796ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13434507130589822769ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11457039390643996671ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 31850198749026545ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 133629508669294288ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12146239045715521371ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10094368818487957866ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1304181904445288492ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6934279142247374814ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15192831882653856452ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11696621731324595941ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2822277006536457875ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13431046415633413071ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8749349052964698694ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7313983471964313620ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12711392373057561677ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13900707618661486757ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9521936150987664598ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12674958417922180460ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6960533940711193743ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6398897881481248023ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9190169904629841100ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8283039145280966883ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12018217092360285119ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16366867313651898126ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10658722602305574916ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3329563683943906785ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1896361372412350500ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14121229930149939696ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7933013470919075174ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16826745298114688486ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5893966304777478165ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18264593028079295357ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9222939558431762495ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8889143519476488796ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6542201964322242749ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6846955607623151649ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612549029560840432ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2296638258540954137ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14320230706257626766ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13851355352734629209ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16171558169014046715ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15777769240418626454ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__i_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5681473110747609896ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__i_wr_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2459970108908649484ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__i_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12523800419501120156ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__o_rd_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1364369337564564788ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__o_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9858043139340575761ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__o_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15738919315124769424ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 351729693022593119ull);
    }
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2387460692763122336ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2859903037043256784ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13215038283188531273ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11729105545722286381ull);
    vlSelf->sa_credit_top__DOT__fifo_inst__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18356264374698430628ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1069567468963839528ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12975962993951149128ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__i_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15704055014680666456ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__i_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13020873921695137126ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__o_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11097802975337088173ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__o_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8417812997939517850ull);
    vlSelf->sa_credit_top__DOT__credit_inst__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13625530048545969822ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7973692263541423234ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18134457949124360917ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1829548218420278344ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8452967058722689570ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13354204182992666863ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7573739152253745377ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5044803435225711409ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16619790632522568239ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11922975716192254434ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5448430113677243836ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14925730741213889826ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9219726267830931953ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18092126919869707892ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18060928852233670153ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3403971191341672069ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18363509877840505384ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14768033445080818572ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12618936313878441981ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3122390807853270809ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6456994815391775711ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8856060166996049576ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2340869013376686600ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3485302041623314059ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1232984458583499571ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822262622228819079ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15643102096076946149ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15693351936479550918ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18116971522629343242ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14270322289774625575ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12910467673975129894ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2105711074446886441ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 633058445861259886ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950430276158007643ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11665806340757418182ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14930759218840013004ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1170692348007037842ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15114908586243620297ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9229497163227789648ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9062653245504108637ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4987951569287779207ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16958692681311548214ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7569179568495024055ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10219119090046273936ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14138516409383376401ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16772337454761198973ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1064164643969924310ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17392707693780678130ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14272513925705190572ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8177384422285486992ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6389444996456824049ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7202831224965172915ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4297767534317028720ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14180471228917894611ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17612400733655319321ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8666577982603592955ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14586410585837336971ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 65273958281991666ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3146333830821768085ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16834074309154510666ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9570108361609917937ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4499196051057571327ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2821801500301939005ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13427258184555771838ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16262942064859060258ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11005582447439570566ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5271883035882707385ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13750537718377022355ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4166403121224449226ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9451212298763722258ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5474172605322288240ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2196909619753082879ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 401911831832149968ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2113912788661803906ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2640948073610578680ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5241230058809470100ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17422999845417536668ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
