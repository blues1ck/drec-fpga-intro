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
    vlSelfRef.sa_credit_top__DOT__last_line = (3U == (IData)(vlSelfRef.sa_credit_top__DOT__count));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_rd_data 
        = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem
        [vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data
        [2U];
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full 
        = (8U == (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count));
    vlSelfRef.sa_credit_top__DOT__i_rdy = vlSelfRef.i_rdy;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data
        [2U];
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty 
        = (0U == (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.sa_credit_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
    vlSelfRef.sa_credit_top__DOT__i_ab_line = vlSelfRef.i_ab_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy 
        = (0U < (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count));
    vlSelfRef.sa_credit_top__DOT__i_vld = vlSelfRef.i_vld;
    vlSelfRef.sa_credit_top__DOT__o_c_line = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_rd_data;
    vlSelfRef.sa_credit_top__DOT__fifo_full = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full;
    vlSelfRef.sa_credit_top__DOT__fifo_empty = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
        = ((0xffffffff00000000ULL & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line) 
           | (IData)((IData)(((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                               [4U][1U] << 0x00000010U) 
                              | vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][0U]))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
        = ((0x00000000ffffffffULL & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line) 
           | ((QData)((IData)(((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                                [4U][3U] << 0x00000010U) 
                               | vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                               [4U][2U]))) << 0x00000020U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
        = vlSelfRef.sa_credit_top__DOT__i_ab_line;
    vlSelfRef.sa_credit_top__DOT__o_rdy = vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy;
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_vld 
        = vlSelfRef.sa_credit_top__DOT__i_vld;
    vlSelfRef.o_c_line = vlSelfRef.sa_credit_top__DOT__o_c_line;
    vlSelfRef.sa_credit_top__DOT__o_vld = (1U & (~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_empty)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line;
    vlSelfRef.o_rdy = vlSelfRef.sa_credit_top__DOT__o_rdy;
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld 
        = ((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_vld) 
           & (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy));
    vlSelfRef.o_vld = vlSelfRef.sa_credit_top__DOT__o_vld;
    vlSelfRef.sa_credit_top__DOT__fifo_rd_en = ((IData)(vlSelfRef.sa_credit_top__DOT__i_rdy) 
                                                & (IData)(vlSelfRef.sa_credit_top__DOT__o_vld));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                  >> 0x00000010U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                  >> 0x00000020U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                  >> 0x00000030U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
        = (((QData)((IData)((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
                              << 0x00000010U) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data)))) 
            << 0x00000020U) | (QData)((IData)((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data))))));
    vlSelfRef.sa_credit_top__DOT__a_vld = vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_rd_en 
        = vlSelfRef.sa_credit_top__DOT__fifo_rd_en;
    vlSelfRef.sa_credit_top__DOT__inc = ((IData)(vlSelfRef.sa_credit_top__DOT__fifo_rd_en) 
                                         | ((~ (IData)(vlSelfRef.sa_credit_top__DOT__is_a)) 
                                            & (IData)(vlSelfRef.sa_credit_top__DOT__i_vld)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                  >> 0x00000010U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                  >> 0x00000020U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
        = (((QData)((IData)((((IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                       >> 0x00000030U)) 
                              << 0x00000010U) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data)))) 
            << 0x00000020U) | (QData)((IData)((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                                << 0x00000010U) 
                                               | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data)))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__a_vld;
    vlSelfRef.sa_credit_top__DOT__we = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__is_a)) 
                                        & (IData)(vlSelfRef.sa_credit_top__DOT__a_vld));
    vlSelfRef.sa_credit_top__DOT__c_vld_top2sa = ((IData)(vlSelfRef.sa_credit_top__DOT__a_vld) 
                                                  & (IData)(vlSelfRef.sa_credit_top__DOT__is_a));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en 
        = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty)) 
           & (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_rd_en));
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc 
        = vlSelfRef.sa_credit_top__DOT__inc;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__c_vld_top2sa;
    vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][0U] 
        = (0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                  >> 0x10U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                  >> 0x20U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                  >> 0x30U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                 >> 3U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data 
        = ((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
             << 3U) | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data) 
                       << 2U)) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                   << 1U) | (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld))));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_data 
        = vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen 
        = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we)
            ? (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift)
            : 0U);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                 >> 3U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data 
        = ((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
             << 3U) | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data) 
                       << 2U)) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                   << 1U) | (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line) 
                 >> 3U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                 >> 3U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data 
        = ((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
             << 3U) | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data) 
                       << 2U)) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                   << 1U) | (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][1U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][2U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][3U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line) 
                 >> 3U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line 
        = ((0x0cU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line)) 
           | ((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
               [4U][1U] << 1U) | vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
              [4U][0U]));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line 
        = ((3U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line)) 
           | ((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
               [4U][3U] << 3U) | (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                                  [4U][2U] << 2U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][1U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][2U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][3U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line) 
                 >> 3U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data 
        = ((((2U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                    >> 2U)) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data)) 
            << 2U) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                       << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld 
        = (0x0000000fU == (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top));
    vlSelfRef.sa_credit_top__DOT__c_vld_sa2top = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld;
    vlSelfRef.sa_credit_top__DOT__fifo_wr_en = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_full)) 
                                                & (IData)(vlSelfRef.sa_credit_top__DOT__c_vld_sa2top));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_en 
        = vlSelfRef.sa_credit_top__DOT__fifo_wr_en;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en 
        = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full)) 
           & (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_en));
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((((((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__rst_n__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.sa_credit_top__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__clk__0)))))))))));
    vlSelfRef.__VactTriggered[1U] = (QData)((IData)(
                                                    (((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__rst_n__0)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__credit_inst__DOT__clk__0))) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rst_n)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__rst_n__0)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__fifo_inst__DOT__clk__0))))) 
                                                      << 8U) 
                                                     | (((((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk__0))) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk__0))))) 
                                                         << 4U) 
                                                        | (((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk__0))) 
                                                               << 2U)) 
                                                           | ((((~ (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk__0)))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
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
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0;
    __VdlyVal__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0;
    __VdlyDim0__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0;
    __VdlySet__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    // Body
    __VdlySet__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 = 0U;
    if (vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rst_n) {
        if (vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en) {
            vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr)));
        }
        vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                       << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count))
                               : ((1U == (((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                           << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en)))
                                   ? ((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count))));
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en))) 
                                   << 1U) | (2U == 
                                             (((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                  << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en))) 
                         << 1U) | (2U == (((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                           << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fifo.sv:52: Assertion failed in %Nsa_credit_top.fifo_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) 
                                     << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en)));
                    VL_STOP_MT("src/fifo.sv", 52, "");
                }
            }
        }
        if (vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en) {
            __VdlyVal__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 
                = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_data;
            __VdlyDim0__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 
                = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr;
            __VdlySet__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr = 0U;
        vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr = 0U;
        vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count = 0U;
    }
    if (__VdlySet__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0) {
        vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[__VdlyDim0__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0] 
            = __VdlyVal__sa_credit_top__DOT__fifo_inst__DOT__fifo_mem__v0;
    }
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_rd_data 
        = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem
        [vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr];
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full 
        = (8U == (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty 
        = (0U == (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count));
    vlSelfRef.sa_credit_top__DOT__o_c_line = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_rd_data;
    vlSelfRef.sa_credit_top__DOT__fifo_full = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full;
    vlSelfRef.sa_credit_top__DOT__fifo_empty = vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty;
    vlSelfRef.o_c_line = vlSelfRef.sa_credit_top__DOT__o_c_line;
    vlSelfRef.sa_credit_top__DOT__o_vld = (1U & (~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_empty)));
    vlSelfRef.o_vld = vlSelfRef.sa_credit_top__DOT__o_vld;
    vlSelfRef.sa_credit_top__DOT__fifo_rd_en = ((IData)(vlSelfRef.sa_credit_top__DOT__i_rdy) 
                                                & (IData)(vlSelfRef.sa_credit_top__DOT__o_vld));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_rd_en 
        = vlSelfRef.sa_credit_top__DOT__fifo_rd_en;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en 
        = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty)) 
           & (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_rd_en));
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n) {
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift 
                = ((8U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift) 
                          << 3U)) | (7U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift) 
                                           >> 1U)));
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift = 8U;
    }
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__rst_n) {
        if (vlSelfRef.sa_credit_top__DOT__a_vld) {
            if (vlSelfRef.sa_credit_top__DOT__last_line) {
                vlSelfRef.sa_credit_top__DOT__count = 0U;
                vlSelfRef.sa_credit_top__DOT__is_a 
                    = (1U & (~ (IData)(vlSelfRef.sa_credit_top__DOT__is_a)));
            } else {
                vlSelfRef.sa_credit_top__DOT__count 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.sa_credit_top__DOT__count)));
            }
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__count = 0U;
        vlSelfRef.sa_credit_top__DOT__is_a = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__last_line = (3U == (IData)(vlSelfRef.sa_credit_top__DOT__count));
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                       << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc)))
                               ? ((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count) 
                                  - (IData)(1U)) : 
                              ((1U == (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                        << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc)))
                                ? ((IData)(1U) + (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count))
                                : (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((1U 
                                                 == 
                                                 (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc))) 
                                                << 1U) 
                                               | (2U 
                                                  == 
                                                  (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc)))))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc))) 
                         << 1U) | (2U == (((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: credit.sv:23: Assertion failed in %Nsa_credit_top.credit_inst: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc)));
                    VL_STOP_MT("src/credit.sv", 23, "");
                }
            }
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count = 8U;
    }
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy 
        = (0U < (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count));
    vlSelfRef.sa_credit_top__DOT__o_rdy = vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy;
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld 
        = ((IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_vld) 
           & (IData)(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy));
    vlSelfRef.o_rdy = vlSelfRef.sa_credit_top__DOT__o_rdy;
    vlSelfRef.sa_credit_top__DOT__a_vld = vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld))));
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                        - (IData)(1U)))];
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(0U, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [1U];
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 
                = ((2U >= (3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) ? 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                   [(3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))] : 0U);
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0 = 0U;
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data
        [2U];
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0 
                = ((0U >= (1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) ? 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                   [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))] : 0U);
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0 = 0U;
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [0U];
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                        - (IData)(1U)))];
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(0U, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [1U];
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
                = ((2U >= (3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                   [(3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = 0U;
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data
        [2U];
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 
                = ((0U >= (1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                   [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = 0U;
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [0U];
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][0U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][1U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][2U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n) {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c 
            = (0x0000ffffU & (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a) 
                               * (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b)) 
                              + (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c)));
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld 
            = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld) 
               & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
        if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a;
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b = 0U;
    }
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[4U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][4U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c[4U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[4U][3U] 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                        - (IData)(1U)))];
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(0U, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                        - (IData)(1U)))];
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(0U, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                        - (IData)(1U)))];
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(0U, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
}

void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 
                = ((0U >= (1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                   [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = 0U;
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
}

void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
                = ((2U >= (3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                   [(3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = 0U;
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
}

void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0 
                = ((0U >= (1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) ? 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                   [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))] : 0U);
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h90f613b2__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0 = 0U;
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_he8313a39__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
}

void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 
                = ((2U >= (3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) ? 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                   [(3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))] : 0U);
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0 = 0U;
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h70abe3ab__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
}

void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 
                = ((0U >= (1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                   [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = 0U;
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
}

void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
                = ((2U >= (3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                   [(3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = 0U;
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
}

void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                        - (IData)(1U)))];
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 
                = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.enqueue(0U, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2));
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data
        [1U];
}

void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0 
                = ((0U >= (1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                   [(1U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_hefb97aa7__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 1U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0 = 0U;
            if (VL_LIKELY(((0U >= (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT____Vlvbound_h8300f980__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (1U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data
        [0U];
}

void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    // Body
    if (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n) {
        __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data;
        vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0, 0U);
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
                = ((2U >= (3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                                 - (IData)(1U)))) && 
                   vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                   [(3U & (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                           - (IData)(1U)))]);
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 3U, vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0 = 0U;
            if (VL_LIKELY(((2U >= (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h99f6fe1b__0;
                __VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
                    = (3U & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.enqueue(__VdlyVal__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2, (IData)(__VdlyDim0__sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2));
            }
            vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuesa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data.commit(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data
        [2U];
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__inc = ((IData)(vlSelfRef.sa_credit_top__DOT__fifo_rd_en) 
                                         | ((~ (IData)(vlSelfRef.sa_credit_top__DOT__is_a)) 
                                            & (IData)(vlSelfRef.sa_credit_top__DOT__i_vld)));
    vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc 
        = vlSelfRef.sa_credit_top__DOT__inc;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__we = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__is_a)) 
                                        & (IData)(vlSelfRef.sa_credit_top__DOT__a_vld));
    vlSelfRef.sa_credit_top__DOT__c_vld_top2sa = ((IData)(vlSelfRef.sa_credit_top__DOT__a_vld) 
                                                  & (IData)(vlSelfRef.sa_credit_top__DOT__is_a));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__c_vld_top2sa;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_we;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                 >> 3U));
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
        = ((0xffffffff00000000ULL & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line) 
           | (IData)((IData)(((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                               [4U][1U] << 0x00000010U) 
                              | vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][0U]))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
        = ((0x00000000ffffffffULL & vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line) 
           | ((QData)((IData)(((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                                [4U][3U] << 0x00000010U) 
                               | vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                               [4U][2U]))) << 0x00000020U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                  >> 0x00000010U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                  >> 0x00000020U)));
}

void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                 >> 3U));
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data 
        = ((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
             << 3U) | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data) 
                       << 2U)) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                   << 1U) | (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[1U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[2U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld[3U][0U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line) 
                 >> 3U));
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
        = (((QData)((IData)((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
                              << 0x00000010U) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data)))) 
            << 0x00000020U) | (QData)((IData)((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data))))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[0U][0U] 
        = (0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[1U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                  >> 0x10U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[2U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                  >> 0x20U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a[3U][0U] 
        = (0x0000ffffU & (IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                  >> 0x30U)));
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen 
        = ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we)
            ? (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift)
            : 0U);
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                 >> 3U));
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data 
        = ((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
             << 3U) | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data) 
                       << 2U)) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                   << 1U) | (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][1U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][2U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld[0U][3U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line) 
                 >> 3U));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
        = (((QData)((IData)((((IData)((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                       >> 0x00000030U)) 
                              << 0x00000010U) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data)))) 
            << 0x00000020U) | (QData)((IData)((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                                << 0x00000010U) 
                                               | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data)))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_data 
        = vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
        [3U][3U];
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
        [3U][3U];
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data 
        = ((((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data) 
             << 3U) | ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data) 
                       << 2U)) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                                   << 1U) | (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][0U] 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][1U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][2U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line) 
                 >> 2U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we[0U][3U] 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line) 
                 >> 3U));
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
        [3U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line 
        = ((0x0cU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line)) 
           | ((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
               [4U][1U] << 1U) | vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
              [4U][0U]));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line 
        = ((3U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line)) 
           | ((vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
               [4U][3U] << 3U) | (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                                  [4U][2U] << 2U)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data 
        = (1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                 >> 1U));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data 
        = (1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                 >> 2U));
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [0U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [1U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [2U][3U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][0U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][1U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][2U];
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
        [3U][3U];
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data 
        = ((((2U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                    >> 2U)) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data)) 
            << 2U) | (((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data) 
                       << 1U) | (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data)));
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top 
        = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data;
    vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld 
        = (0x0000000fU == (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top));
    vlSelfRef.sa_credit_top__DOT__c_vld_sa2top = vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld;
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_credit_top__DOT__fifo_wr_en = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_full)) 
                                                & (IData)(vlSelfRef.sa_credit_top__DOT__c_vld_sa2top));
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_en 
        = vlSelfRef.sa_credit_top__DOT__fifo_wr_en;
    vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en 
        = ((~ (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full)) 
           & (IData)(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_en));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000030000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000030000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0003000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x000c000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0030000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0300000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0c00000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x3000000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0xc000000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0000000003000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x000000000c000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x0000000000300000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if (((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (3ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (3ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if (((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff0000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        Vtop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if (((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0x000000000000fc00ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x000000000fc00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0x000000000000000fULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if (((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0x00000000003f0003ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if (((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xfffffffc00000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if (((0x0000000000000cffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff000000fc00ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if (((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff000fc00000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if (((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0x00000000000003ffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if (((0x0000000000000cffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff00003f0003ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if (((0x0000000000000cffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff00000003ffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if (((0x0000000000000cffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff03f03f0003ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if (((0x0000000000000fffULL & vlSelfRef.__VnbaTriggered
          [1U]) | (0xffffff03f03f0003ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vtop___024root___nba_comb__TOP__14(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
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

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
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
            VL_FATAL_MT("sa_credit_top.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("sa_credit_top.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("sa_credit_top.sv", 1, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.i_vld & 0xfeU)))) {
        Verilated::overWidthError("i_vld");
    }
    if (VL_UNLIKELY(((vlSelfRef.i_rdy & 0xfeU)))) {
        Verilated::overWidthError("i_rdy");
    }
}
#endif  // VL_DEBUG
