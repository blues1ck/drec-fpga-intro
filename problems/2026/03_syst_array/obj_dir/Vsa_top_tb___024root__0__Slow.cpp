// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_top_tb.h for the primary calling header

#include "Vsa_top_tb__pch.h"

VL_ATTR_COLD void Vsa_top_tb___024root___eval_static(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_static\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0 
        = vlSelfRef.sa_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst_n__0 
        = vlSelfRef.sa_top_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vsa_top_tb___024root___eval_initial__TOP(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial__TOP\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[0U][0U] = 0U;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[0U][1U] = 0U;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[0U][2U] = 0U;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[0U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__clk = 0U;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg = 8U;
}

VL_ATTR_COLD void Vsa_top_tb___024root___eval_final(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_final\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_top_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsa_top_tb___024root___eval_phase__stl(Vsa_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_top_tb___024root___eval_settle(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_settle\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsa_top_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/sa_top_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsa_top_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsa_top_tb___024root___eval_triggers__stl(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_triggers__stl\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsa_top_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsa_top_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_top_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsa_top_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsa_top_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vsa_top_tb___024root___stl_sequent__TOP__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___stl_sequent__TOP__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full 
        = (((3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr)) 
            == (3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr) 
                                       >> 2U))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full 
        = (((3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr)) 
            == (3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr) 
                                       >> 2U))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full 
        = (((3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr)) 
            == (3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr) 
                                       >> 2U))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__i_c_ready) 
           & (IData)(vlSelfRef.sa_top_tb__DOT__o_c_valid));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[4U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[4U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[4U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[4U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[4U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[4U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[4U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[4U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
        = (((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem[
                            (((IData)(0x0000003fU) 
                              + (0x000000ffU & VL_SHIFTL_III(8,8,32, 
                                                             (3U 
                                                              & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U)))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U))))) 
           | (((0U == (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                   (3U 
                                                    & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U)))
                ? 0ULL : ((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem[
                                          (((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (3U 
                                                                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                             (3U 
                                                              & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U))))) 
              | ((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem[
                                 (7U & (VL_SHIFTL_III(8,8,32, 
                                                      (3U 
                                                       & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U) 
                                        >> 5U))])) 
                 >> (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                 (3U 
                                                  & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr)), 6U)))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__i_we 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__mem) 
                 >> (3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_empty 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_empty 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_empty 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
        = ((0xffffffff00000000ULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out) 
           | (IData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                               [4U][1U] << 0x00000010U) 
                              | vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [4U][0U]))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
        = ((0x00000000ffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out) 
           | ((QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][3U] << 0x00000010U) 
                               | vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                               [4U][2U]))) << 0x00000020U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data 
        = (((QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                              [2U] << 0x00000010U) 
                             | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                             [1U]))) << 0x00000020U) 
           | (QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                               [0U] << 0x00000010U) 
                              | (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data))))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__i_we)
            ? (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg)
            : 0U);
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & (~ ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_empty) 
                    | ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_empty) 
                       | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_empty)))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][0U] 
        = (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data 
                                  >> 0x10U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data 
                                  >> 0x20U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data 
                                  >> 0x30U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                             [0U] << 1U) 
                                            | (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                             [0U] << 1U) 
                                            | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                             [0U] << 1U) 
                                            | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[0U][1U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                 >> 1U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[0U][2U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                 >> 2U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[0U][3U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                 >> 3U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data) 
                 >> 1U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data) 
                 >> 2U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data) 
                 >> 3U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[0U][1U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data) 
                 >> 1U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[0U][2U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data) 
                 >> 2U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[0U][3U] 
        = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data) 
                 >> 3U));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out 
        = ((0x0cU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out)) 
           | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [4U][1U] << 1U) | vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
              [4U][0U]));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out 
        = ((3U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out)) 
           | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [4U][3U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                                  [4U][2U] << 2U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_dec 
        = ((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc)) 
           & ((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                          [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                  [1U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                  [2U]))) & (0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits))));
}

VL_ATTR_COLD void Vsa_top_tb___024root____Vm_traceActivitySetAll(Vsa_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_top_tb___024root___eval_stl(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_stl\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsa_top_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vsa_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsa_top_tb___024root___eval_phase__stl(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_phase__stl\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsa_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsa_top_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsa_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsa_top_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_top_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsa_top_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sa_top_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge sa_top_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsa_top_tb___024root____Vm_traceActivitySetAll(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root____Vm_traceActivitySetAll\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vsa_top_tb___024root___ctor_var_reset(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___ctor_var_reset\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sa_top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13480027262230923970ull);
    vlSelf->sa_top_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4835556802741405221ull);
    vlSelf->sa_top_tb__DOT__i_a_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676315992296915511ull);
    vlSelf->sa_top_tb__DOT__i_a_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4353932710145865924ull);
    vlSelf->sa_top_tb__DOT__i_we_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14482006662023309740ull);
    vlSelf->sa_top_tb__DOT__i_we_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5465160171249869980ull);
    vlSelf->sa_top_tb__DOT__i_c_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1834435518165372979ull);
    vlSelf->sa_top_tb__DOT__i_c_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2565652814349589434ull);
    vlSelf->sa_top_tb__DOT__o_c_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12699831620532421129ull);
    vlSelf->sa_top_tb__DOT__i_c_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3569928569584826569ull);
    vlSelf->sa_top_tb__DOT__c_vld_correct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3114101162607371088ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__c_vld_line_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13541687167438175976ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__c_line_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 667648899823801437ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5076809636611478627ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7422692649164421868ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem, __VscopeHash, 2414142106902216823ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3710567310414683660ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7236240535449895591ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14164101988456889196ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9319590179688571476ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__mem = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12091731086933667078ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1695768083032143396ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11411560247640110979ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7856256189314423448ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7532673771735637822ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem, __VscopeHash, 8310768438323029285ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17983966467938711347ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15989658062331052173ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2799530854673997625ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7517253526293258871ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5609707846541302478ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__i_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11199862286357781926ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6801414963318511331ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10081155531098397329ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1939505211000786876ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15152557659353935149ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13958387727974281843ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13531566198120411247ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18185496718814250735ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3597997026777668652ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14513997513036741645ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15202374745591931934ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 562985498415350968ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13196576740920614016ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3047112102438850100ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9993007936740338144ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7698419017008876631ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13116471276341258378ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8574455569585327612ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10787454248880956524ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3609785737497815028ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13771683448882567582ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13079926973379699691ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11929477454480197576ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12741551390636019676ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h05254db7__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11563313298662090484ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5464120233657702510ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h3851acd1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15637696703847344304ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7402391855517777234ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15450365955439631953ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8307151972730220746ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h05254db7__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1678918526404045667ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5384207594262540840ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14462698613178118278ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8738241494726909488ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1946116973604794353ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11387813768746799545ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10923225514834663910ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3432438389937683206ull);
        }
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18259430958731233179ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4728867138972901842ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3188699772349279828ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4759693083017816046ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759749149762811008ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5317524725627996110ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13068642624925857607ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5502608552995813580ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2503334338780276252ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8144904738968024222ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16870049724238225183ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9702387560318987996ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3654517862473255868ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1186773796208202876ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9981165956725913254ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11909987448038465332ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6820714258127133137ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4009173758724489088ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2690502954323115561ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 254812602784795130ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 755715822959211964ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17708560592749828579ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6230532580200265025ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7096223285072198783ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13382069388482341408ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17475428587835437991ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4562599729181574042ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16013443868901001206ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5907158598285860811ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11054249379684059293ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1093292949203059880ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3467800758379777932ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16413153521833878403ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17411003002392170836ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15808474930334029016ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14482652496287095217ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9902056479411268058ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10528863118358959847ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6724529406492594170ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17787604541759759889ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10910462094419964741ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3275257828336536538ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12636525830362476790ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3081415645798898070ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1906427032092117803ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14871319582131145701ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9518395334205479250ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2674003925799332633ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6443688243851630924ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3592136043351313425ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14609504572524876220ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12245669287996810308ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 294362649105411256ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7606959140525258783ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2934800874973880688ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2687629444715127671ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11264773760272197490ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182338653914986835ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5113085246043343380ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7834342669397489135ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14762027868447793606ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2661513735762805375ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6020436653413434104ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 120263807963388047ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9353154966591936624ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 79245742026384916ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12614771561231822226ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8000205150162854730ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15405094990915412811ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9264914807438496859ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6503637011838590923ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12247327819968235298ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7548443641438686194ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13622423593020140878ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4584681610285878041ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5173419342849059795ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17207123834164474455ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14375487040366851117ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13958782589416365827ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695098996656152430ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5918265741230698450ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4356738424994517041ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4158978494331187746ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12796706975473481902ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5786858150783015195ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14385429420280556729ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12356274459116547569ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9065375203101437722ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6922726991356670458ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16796826920876459957ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8682843765947759867ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14189438317718860663ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14539529554326872400ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10731255594163221987ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7028348356850514321ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16051686814023603907ull);
    vlSelf->__VdlyVal__sa_top_tb__DOT__clk__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16555802496292635232ull);
    vlSelf->__VdlySet__sa_top_tb__DOT__clk__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7849127663566280117ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 228677649157021084ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
