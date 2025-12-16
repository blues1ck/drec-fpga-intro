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
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n;
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
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig[0U][0U] = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig[0U][1U] = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig[0U][2U] = 0U;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig[0U][3U] = 0U;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.gen_sr[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.gen_sr[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.gen_sr[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.gen_sr[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.gen_sr[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge sa_credit_top.sa_top_inst.we_line_inst.dl_inst.gen_sr[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_vld_inst.gen_sr[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_vld_inst.gen_sr[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_vld_inst.gen_sr[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_vld_inst.gen_sr[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_vld_inst.gen_sr[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_vld_inst.gen_sr[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_in_inst.gen_sr[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_in_inst.gen_sr[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_in_inst.gen_sr[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_in_inst.gen_sr[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_in_inst.gen_sr[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_in_inst.gen_sr[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_inst.gen_sr[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_inst.gen_sr[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_inst.gen_sr[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_inst.gen_sr[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @(posedge sa_credit_top.sa_top_inst.dl_a_inst.gen_sr[3].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @(negedge sa_credit_top.sa_top_inst.dl_a_inst.gen_sr[3].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_out_inst.gen_sr[0].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_out_inst.gen_sr[0].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_out_inst.gen_sr[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_out_inst.gen_sr[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_vld_out_inst.gen_sr[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_vld_out_inst.gen_sr[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_out_inst.gen_sr[0].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_out_inst.gen_sr[0].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_out_inst.gen_sr[1].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000025U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 37 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_out_inst.gen_sr[1].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000026U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 38 is active: @(posedge sa_credit_top.sa_top_inst.dl_c_out_inst.gen_sr[2].sr_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000027U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 39 is active: @(negedge sa_credit_top.sa_top_inst.dl_c_out_inst.gen_sr[2].sr_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000028U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 40 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000029U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 41 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 42 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 43 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 44 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 45 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 46 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 47 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[0].gen_pe_col[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000030U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 48 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000031U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 49 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000032U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 50 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000033U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 51 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000034U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 52 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000035U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 53 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000036U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 54 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000037U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 55 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[1].gen_pe_col[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000038U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 56 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000039U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 57 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 58 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 59 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 60 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 61 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 62 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 63 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[2].gen_pe_col[3].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[0].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[0].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[1].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[1].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[2].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[2].pe_inst.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @(posedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[3].pe_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @(negedge sa_credit_top.sa_top_inst.sa_core_inst.gen_pe_row[3].gen_pe_col[3].pe_inst.rst_n)\n");
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
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_delayed = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11267288226566972605ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line_delayed = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4250413487178912929ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13533876876923442298ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__a_line_delayed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18391538652569970492ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10135913501577206969ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_out_delayed = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1796015836817195737ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__c_line_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10793431808642194357ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8482839565474929461ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398403631184858821ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11505700363829778595ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16161059259835124653ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14020742631651999711ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18280987211240474942ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12412733116511559401ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13216533172820791824ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12657981545095821173ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1596918161707433769ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17632592526666579844ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15341995703810395043ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14641375814758585804ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1039208877516508563ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17793025258474543879ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12085284805026396714ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7293723831974290479ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1744631691580332860ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18070839355592354887ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7098542051867185283ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539029379467831176ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2140704918681633640ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11241903716889929370ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17248216801521527113ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9312946220263883884ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12827858798178531784ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14122966270522266299ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7419890854188102919ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12204987580162887648ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16830520496433679459ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14134268643658541712ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15613745492913518632ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 526806575445917693ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5207645559554156447ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7528242016746997878ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576499831353246462ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5337521977564647451ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15336631979088227048ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5132527267878012486ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5836398178069581392ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12775626983601596115ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11809881060921788107ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4374002213207465518ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13774628082512615239ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3078639154461889252ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9726093407074960928ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15253060568237345715ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7756447498234833546ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12795668319484417509ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12378990986787708269ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17652837308018311512ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9265949039384049900ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 858768982443837319ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14049376610956270196ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4141360566969688440ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13911708728259665589ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14634825978066664109ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1255460218227633951ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18026796114232793878ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14596786079373314713ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1953290213753628448ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 489025053764415274ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11890029763877246783ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4456281657028176374ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3337108386156937654ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11011918252319523550ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5360665629328884456ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13366886147966420381ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13236609988456818855ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9608498704901859195ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12980859808069101862ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3791820620956977255ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8375328797788359129ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15922032713617463151ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2736739180796178957ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5026387559610389097ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4338165732449190796ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7212590608983116507ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9273212899435222681ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9545593002527673114ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12270546778180389418ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11007824408242434529ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17400301631022408762ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17066577400175557609ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5256142238207130085ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 723400916314910148ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5536176834990817236ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16268882978275174868ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 327896432923068570ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14697227927497351939ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7101754948551521353ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18156885288008259441ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15694699840841084555ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11120783747581522921ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3209545432813601406ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15832966115303488282ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5013189565038712824ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14026600557098437648ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5308966089828291721ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7679985137460753772ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9009853257762687591ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 401660340528960723ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8362432748073512520ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12674804234842167845ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377328764059577082ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7798036848308728513ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15962914904240013459ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1279936764261771183ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10412037976556128009ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3407905968241457956ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5721035588014865723ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4720607728066316895ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10926865091673167405ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17962391830840733455ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14499345888448751ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1046175946673014877ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184988280130219842ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854898166397621394ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13198914974645641261ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2362082735004230301ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16844245686543169587ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13409076663070076718ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11598524968821918371ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__i_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16647497992916195293ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__o_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10892803023107458384ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16000513519684244105ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4926098099211436798ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9891547903289675324ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16910848875630947095ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8469012987071125346ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18225581458742937402ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6617493308237946528ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15407905095999741073ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4605948711907570720ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11268560670487680575ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16005087211155626451ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2568018484037215407ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7568715342697842450ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5941239960921826671ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1118721452606557986ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15100299019237983135ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16394741441766607751ull);
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17273848882672247215ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14912310192457420477ull);
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
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13240938774284840125ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11627722503443743549ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9968189619786182211ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16510532711654430111ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15040042830023564777ull);
        }
    }
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6601178260134984998ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10024432126453476422ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7960010375009902815ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2354538179639205327ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8451675715668191088ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3839706926420159795ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10801664707496363914ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18398176555729668825ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6584221791639065773ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11159863484188739070ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14377636458021435796ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7121614771675999999ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8135091137660110393ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14643722626550606044ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11911592647268291423ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13798814951659900631ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5947938496474345375ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8885835452645182367ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14826793706112970727ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2976777084940644812ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10029074888142353798ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12180950180139273588ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16011080595452512737ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12465443810257766311ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15539172507757846057ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2219013453954852048ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2254811601336199427ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12133510655894974206ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16670387542732820722ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1157094436078957156ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7886895178627154000ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8156169980721876638ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15845030341672851000ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11745327258080636540ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13352799310998606553ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5096124719490562098ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7206418995912147563ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4004375952807698694ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 352717931953068033ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4840319216944755049ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14704618865364733602ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9395773075092503228ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11018920280223259171ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3324490162446508850ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3472924773059977338ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10567830034002701019ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15232239973191810494ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17823080411424734326ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3706079485349107211ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16378463789390028185ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17750519609080156497ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18278410322743203045ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 821491558512460390ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707213579436437119ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285101727849179529ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14706173285095671938ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5385762203779943616ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7570164687555253501ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7057209582407864610ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3265302482777706160ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5722663841310090846ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15593612284339868555ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15483573423028109831ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16084096275591819076ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2789235944746422084ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148693050350935602ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9882423356818802153ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8909203200587862842ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2667538424123672341ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16621354622021740785ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15243532426432741892ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14283850016127599832ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7841170880325278746ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7415262972966542082ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5856787239010309218ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17689345635132132217ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10551145921752851371ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6495433659899325415ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16442832398503230185ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10728580117143974338ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10603554945291587582ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14191825210103219083ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4890930878888531091ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6139341227243288290ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1846190051157021707ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17491231781849980645ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398339550242615957ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14697056764917885705ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6996891330374390394ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14778836137323528394ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5410825902372956516ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9198844245208929175ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12784535754139759194ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3122874198714349800ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15569239927483775404ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17763113021107298976ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7172790809545006772ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 755415344756624137ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6123309626861468075ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13096666506804019384ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7924848853385775973ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15586890047017742852ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4055635917184825708ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14301668498065829627ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7715538743473477804ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9722677401898803780ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14790750762541548528ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18377401623419395433ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17875925045974233397ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 263756200066267596ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5901050393990588596ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2920271402337861078ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17371817861770272854ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3025590095282849168ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2293483430722336966ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11308707397903920473ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1389541500157452498ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8580173011439609838ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8679626881590496579ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13366404500516135619ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16916000852459271655ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4740631402301986545ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17890501008410404420ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7329918074783662732ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16580181258409496425ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2682608206769841561ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18103848808945283568ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14634984924785844366ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5416738939460706216ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14332809704928225015ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16354703594900034868ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10639364301452575344ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5904674860285914114ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2432145323065324180ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16857901844545275309ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13359567053892050844ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14942988655033416948ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488348089817458712ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9971135138036975051ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18350333739432307335ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9844909486481820706ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15044590660425431190ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8929902874620090489ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10845611563302262877ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1984715336033959348ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 973429234534905815ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12866091351735184006ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17694075391770240963ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5673950855539420262ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6932460744253969834ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14806419096186821462ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3787074056974723762ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7699858915241464167ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17412299091652701570ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18231467772645296104ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8435702109294391217ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14695249220110847975ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10580947093525842777ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10552463414583535795ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11705899982851435530ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4054730705748521603ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11888644179536616811ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16860388868106896808ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10244087980475089067ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17471903647380765500ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17226947630189834047ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13463336169859345634ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4463877224075664303ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13460942099140824122ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161456765411169877ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 457569782540338878ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14798288612749621049ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14203220686295359427ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1550571871913049355ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16093683343296117652ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3393146260224151786ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9978930639780523341ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 393654479357990305ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16264827591434113646ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7372842019334423165ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2133117659512165813ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 490398521768904335ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17630350522969864321ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10602285628791527949ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12837891109297469222ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382643543661695285ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13004788334982960875ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5402895104748874287ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7551360507155618271ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782947649323052581ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3771869050272280715ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10467318074222667176ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 959300713467561279ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5707059815289009258ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 636236296887663374ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 434666736362452297ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 496104625456251970ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6259343285183514209ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18254071757903529685ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12830324085270817589ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10828689849638249784ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5708063280028098883ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12294526051160440993ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 548034503775577325ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8780857083334489464ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5291375474331333981ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15877901430862753524ull);
    vlSelf->sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13661122930450258323ull);
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
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 38633631630286809ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18217473871955789564ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12294789143949632915ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15825619201579247978ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130418038652159195ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10762102280708058893ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7619426731566859751ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3234837525082036695ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9072163122572534072ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7143116622593929062ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1059877749364820784ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16981591192083037082ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1652999573840725930ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 481667642693324139ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15054298077282871437ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982875454496342196ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12797661699986686679ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12679536175470795829ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13525122129720651829ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1427885843479594149ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2836104660270454884ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9584361114808489126ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6109669759851515086ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7373412961835586364ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090695642781093334ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14264522970228708616ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17839803210074561682ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8588589021056972805ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12681062262106751681ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3530085698191952188ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 518221961078285842ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10007544895905623852ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16376923540412412888ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10190381929923803597ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16088455075130707980ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6046643060791298509ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1260423883700729787ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18287123897348561623ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 290397563230781598ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1798584890947737323ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8864363603162089130ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6153750444374332324ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434676484514838011ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8601682736747056206ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2075000701750917457ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15457761610612082180ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8041649194602176112ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17092168817752341102ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942577049847125782ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12529688233642236869ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14588854497392197247ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8771076799090770938ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2917829623426253105ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15694793312221496892ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11474189528011885957ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11985861744055518533ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14995056991502100109ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8320304823646204175ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13669916050562465249ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18410249578066097794ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5007271793540430647ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768987635038562282ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1203897874398268403ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6279891300313339790ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7427884387745540875ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12431070208583467344ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7805284800988958824ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 413371933353752305ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2113912788661803906ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2640948073610578680ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5241230058809470100ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17422999845417536668ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
