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
        CData/*0:0*/ sa_top_tb__DOT__rst_n;
        CData/*0:0*/ sa_top_tb__DOT__i_a_valid;
        CData/*0:0*/ sa_top_tb__DOT__i_we_valid;
        CData/*0:0*/ sa_top_tb__DOT__i_we_data;
        CData/*0:0*/ sa_top_tb__DOT__i_c_valid;
        CData/*0:0*/ sa_top_tb__DOT__o_c_valid;
        CData/*0:0*/ sa_top_tb__DOT__i_c_ready;
        CData/*0:0*/ sa_top_tb__DOT__c_vld_correct;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__c_vld_line_out;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_empty;
        CData/*2:0*/ sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr;
        CData/*2:0*/ sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_empty;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__mem;
        CData/*2:0*/ sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr;
        CData/*2:0*/ sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_empty;
        CData/*2:0*/ sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr;
        CData/*2:0*/ sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_dec;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__i_we;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0;
        CData/*3:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    };
    struct {
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
        CData/*0:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
        CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__sa_top_tb__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_top_tb__DOT__rst_n__0;
        QData/*63:0*/ sa_top_tb__DOT__i_a_data;
        QData/*63:0*/ sa_top_tb__DOT__i_c_data;
        QData/*63:0*/ sa_top_tb__DOT__dut__DOT__c_line_out;
        QData/*63:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data;
        QData/*63:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h05254db7__0;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h05254db7__0;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
    };
    struct {
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg;
        SData/*15:0*/ sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlWide<8>/*255:0*/ sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem;
        VlWide<8>/*255:0*/ sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem;
        VlUnpacked<CData/*0:0*/, 1> sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 2> sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 3> sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 1> sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 2> sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 3> sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 1> sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 2> sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 3> sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<SData/*15:0*/, 1> sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<SData/*15:0*/, 2> sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<SData/*15:0*/, 3> sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 3> sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 2> sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<CData/*0:0*/, 1> sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<SData/*15:0*/, 3> sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<SData/*15:0*/, 2> sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<SData/*15:0*/, 1> sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 5>, 5> sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 5>, 5> sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0ca0db50__0;

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
