// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_top_tb.h for the primary calling header

#include "Vsa_top_tb__pch.h"

VL_ATTR_COLD void Vsa_top_tb___024root___eval_static__TOP(Vsa_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_top_tb___024root___eval_static(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_static\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_top_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst__0 = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__done__0 
        = vlSelfRef.sa_top_tb__DOT__done;
}

VL_ATTR_COLD void Vsa_top_tb___024root___eval_static__TOP(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_static__TOP\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_top_tb__DOT__clk = 0U;
    vlSelfRef.sa_top_tb__DOT__rst = 1U;
    vlSelfRef.sa_top_tb__DOT__start = 0U;
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
            VL_FATAL_MT("tb/sa_dpi_tb.sv", 3, "", "Settle region did not converge after 100 tries");
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
    vlSelfRef.sa_top_tb__DOT__dut__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__start_d)) 
           & (IData)(vlSelfRef.sa_top_tb__DOT__start));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c))) 
                   >> 0x00000020U));
}

VL_ATTR_COLD void Vsa_top_tb___024root___eval_stl(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_stl\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsa_top_tb___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge sa_top_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( sa_top_tb.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsa_top_tb___024root___ctor_var_reset(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___ctor_var_reset\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sa_top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13480027262230923970ull);
    vlSelf->sa_top_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5711543363573614661ull);
    vlSelf->sa_top_tb__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6057130646399887897ull);
    vlSelf->sa_top_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2109260017680129724ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__matrix_a[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8522455701336611586ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__matrix_b[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 19865699989537678ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__matrix_c[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17978524762013207829ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__printable_a[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__printable_b[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__printable_c[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__unnamedblk7__DOT__expected[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 190329030149203343ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 7; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__row_matrix[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6896824684168332004ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 7; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__col_matrix[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14982295099802767445ull);
        }
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_i_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6714821737591610652ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_i_a_vld = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9300798860664900036ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_i_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6637340979657136581ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_i_b_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11485651322559377805ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sa_top_tb__DOT__dut__DOT__sa_i_c, __VscopeHash, 15672936037777263057ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__sa_i_c_vld = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3213709373921235638ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sa_top_tb__DOT__dut__DOT__sa_o_c, __VscopeHash, 2919504128442797480ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sa_top_tb__DOT__dut__DOT__c_hist[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14393821362133862703ull);
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__step = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_top_tb__DOT__dut__DOT__result_reg[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5750044369756167375ull);
        }
    }
    vlSelf->sa_top_tb__DOT__dut__DOT__start_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4383740596796278041ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__start_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14639557904010391339ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx = 0;
    vlSelf->sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15695970569251189972ull);
    vlSelf->sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8429249498443907301ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4481850737880055586ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 137100440692170121ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16640400636235486936ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1054759103237905317ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6261611168246356323ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5708420541091939130ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16907731774034744322ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14137034150866950165ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12089406105694296604ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4414169821011561580ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17975344269185300813ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11195872227070889779ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11446062665325803406ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13473108095469179673ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7678705642902050264ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2751696271233774718ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14713468676707388424ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3896475511491118920ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17689959313875948171ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8832358094956400046ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7725054555430646211ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12622866453157345406ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8382394716633741197ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11990626879026577663ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11183155964265290940ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11800773620950088131ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1552152093848340204ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1060964150810466241ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1223898300097897596ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5238499462660440590ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2156618024634809187ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9487018496484138753ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5520839330048714967ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14543327787544541247ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15315638220815546728ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3957845697522517994ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7597027050268085024ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16905024817679820831ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3917994699236430311ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10723665436810944482ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17535133053978607509ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8696345496057581901ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 892515178010515755ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3340745398739756698ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17890979288170456014ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6231275380902027868ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3394013961620773863ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8226442981491666143ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16094791150314222387ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13520688247800916137ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1905254991660454660ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8752928355814570450ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3158180718342599584ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1751661396352275490ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18031754738484836185ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12280234274722684770ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9501229186765693704ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17754791238286650989ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3645457742391773118ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3778961472360438161ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4823122794516714524ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18380465399537492834ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11418261391002089480ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10324503522740649518ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17352610156599653572ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1307266787995393005ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12803711416405544850ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5349603846689951586ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16304823748080130575ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15229462413646154831ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6979313928963445425ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5165245151730009438ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12518078392710286677ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12380267560247224919ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3805108767733869203ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9011384213746026688ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8411788274796808708ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14335330020614054311ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14865106262045528848ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9908741230693672728ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5573857552943880624ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14811015271056845171ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3683323420287202678ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12595324132815619535ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3557306316007961489ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8806748391137795896ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2841687386885763284ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2974470938728309424ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3407539391723496128ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14547118993455089960ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2743206525956406733ull);
    vlSelf->sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1729655575826841056ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7849127663566280117ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14414371553149154565ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_top_tb__DOT__done__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11345125614300935716ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
