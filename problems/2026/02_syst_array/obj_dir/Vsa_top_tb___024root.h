// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_top_tb.h for the primary calling header

#ifndef VERILATED_VSA_TOP_TB___024ROOT_H_
#define VERILATED_VSA_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsa_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ sa_top_tb__DOT__clk;
        CData/*0:0*/ sa_top_tb__DOT__rst;
        CData/*0:0*/ sa_top_tb__DOT__start;
        CData/*0:0*/ sa_top_tb__DOT__done;
        CData/*1:0*/ sa_top_tb__DOT__dut__DOT__state;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__sa_i_a_vld;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__sa_i_b_we;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__sa_i_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__start_d;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__start_edge;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_top_tb__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_top_tb__DOT__done__0;
        CData/*0:0*/ __VactDidInit;
        QData/*63:0*/ sa_top_tb__DOT__dut__DOT__sa_i_a;
        QData/*63:0*/ sa_top_tb__DOT__dut__DOT__sa_i_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
    };
    struct {
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        VlWide<4>/*127:0*/ sa_top_tb__DOT__dut__DOT__sa_i_c;
        VlWide<4>/*127:0*/ sa_top_tb__DOT__dut__DOT__sa_o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__step;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> sa_top_tb__DOT__matrix_a;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 4> sa_top_tb__DOT__matrix_b;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_top_tb__DOT__matrix_c;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_top_tb__DOT__printable_a;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_top_tb__DOT__printable_b;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_top_tb__DOT__printable_c;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_top_tb__DOT__unnamedblk7__DOT__expected;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 7>, 4> sa_top_tb__DOT__dut__DOT__row_matrix;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 7>, 4> sa_top_tb__DOT__dut__DOT__col_matrix;
        VlUnpacked<IData/*31:0*/, 4> sa_top_tb__DOT__dut__DOT__c_hist;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_top_tb__DOT__dut__DOT__result_reg;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0ca0db50__0;
    VlTriggerScheduler __VtrigSched_hc3b5157f__0;

    // INTERNAL VARIABLES
    Vsa_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_top_tb___024root(Vsa_top_tb__Syms* symsp, const char* v__name);
    ~Vsa_top_tb___024root();
    VL_UNCOPYABLE(Vsa_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
