// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_dpi_tb.h for the primary calling header

#ifndef VERILATED_VSA_DPI_TB___024ROOT_H_
#define VERILATED_VSA_DPI_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsa_dpi_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_dpi_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ sa_dpi_tb__DOT__clk;
        CData/*0:0*/ sa_dpi_tb__DOT__rst;
        CData/*3:0*/ sa_dpi_tb__DOT__i_a_vld;
        CData/*3:0*/ sa_dpi_tb__DOT__i_b_we;
        CData/*3:0*/ sa_dpi_tb__DOT__i_c_vld;
        CData/*3:0*/ sa_dpi_tb__DOT__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld;
        CData/*0:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_dpi_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_dpi_tb__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr_h96bf1eda__1;
        CData/*0:0*/ __VactDidInit;
        QData/*63:0*/ sa_dpi_tb__DOT__i_a;
        QData/*63:0*/ sa_dpi_tb__DOT__i_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
    };
    struct {
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
        SData/*15:0*/ sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
        VlWide<4>/*127:0*/ sa_dpi_tb__DOT__i_c;
        VlWide<4>/*127:0*/ sa_dpi_tb__DOT__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__total_collected;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
        IData/*31:0*/ sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_dpi_tb__DOT__a_matrix;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_dpi_tb__DOT__b_matrix;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_dpi_tb__DOT__expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> sa_dpi_tb__DOT__collected;
        VlUnpacked<IData/*31:0*/, 16> sa_dpi_tb__DOT__a_flat;
        VlUnpacked<IData/*31:0*/, 16> sa_dpi_tb__DOT__b_flat;
        VlUnpacked<IData/*31:0*/, 16> sa_dpi_tb__DOT__ref_flat;
        VlUnpacked<IData/*31:0*/, 4> sa_dpi_tb__DOT__col_cursor;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h268bff67__0;
    VlTriggerScheduler __VtrigSched_h0e88df06__0;

    // INTERNAL VARIABLES
    Vsa_dpi_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_dpi_tb___024root(Vsa_dpi_tb__Syms* symsp, const char* v__name);
    ~Vsa_dpi_tb___024root();
    VL_UNCOPYABLE(Vsa_dpi_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
