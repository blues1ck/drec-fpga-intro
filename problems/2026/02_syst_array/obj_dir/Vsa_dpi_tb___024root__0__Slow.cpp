// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_dpi_tb.h for the primary calling header

#include "Vsa_dpi_tb__pch.h"

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_static__TOP(Vsa_dpi_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_static(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_static\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_dpi_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__rst__0 = 1U;
    vlSelfRef.__Vtrigprevexpr_h96bf1eda__1 = VL_LTES_III(32, 0x00000010U, vlSelfRef.sa_dpi_tb__DOT__total_collected);
}

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_static__TOP(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_static__TOP\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_dpi_tb__DOT__clk = 0U;
    vlSelfRef.sa_dpi_tb__DOT__rst = 1U;
}

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_final(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_final\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_dpi_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsa_dpi_tb___024root___eval_phase__stl(Vsa_dpi_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_settle(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_settle\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsa_dpi_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/sa_dpi_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsa_dpi_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_triggers__stl(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_triggers__stl\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsa_dpi_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsa_dpi_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_dpi_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsa_dpi_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsa_dpi_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vsa_dpi_tb___024root___stl_sequent__TOP__0(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___stl_sequent__TOP__0\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_dpi_tb__DOT__o_c[0U] = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
    vlSelfRef.sa_dpi_tb__DOT__o_c[1U] = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c;
    vlSelfRef.sa_dpi_tb__DOT__o_c[2U] = (IData)((((QData)((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c))));
    vlSelfRef.sa_dpi_tb__DOT__o_c[3U] = (IData)(((((QData)((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c))) 
                                                 >> 0x00000020U));
    vlSelfRef.sa_dpi_tb__DOT__o_c_vld = ((((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld)));
}

VL_ATTR_COLD void Vsa_dpi_tb___024root___eval_stl(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_stl\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsa_dpi_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vsa_dpi_tb___024root___eval_phase__stl(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_phase__stl\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsa_dpi_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsa_dpi_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsa_dpi_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsa_dpi_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_dpi_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsa_dpi_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sa_dpi_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge sa_dpi_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( (32'h10 <= sa_dpi_tb.total_collected))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsa_dpi_tb___024root___ctor_var_reset(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___ctor_var_reset\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sa_dpi_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16511169473747609565ull);
    vlSelf->sa_dpi_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370124370411988617ull);
    vlSelf->sa_dpi_tb__DOT__i_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7615107772084410259ull);
    vlSelf->sa_dpi_tb__DOT__i_a_vld = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16861978684756868662ull);
    vlSelf->sa_dpi_tb__DOT__i_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10172280008297332752ull);
    vlSelf->sa_dpi_tb__DOT__i_b_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14693440880893621101ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sa_dpi_tb__DOT__i_c, __VscopeHash, 15073347137073343628ull);
    vlSelf->sa_dpi_tb__DOT__i_c_vld = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1668193052577134064ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sa_dpi_tb__DOT__o_c, __VscopeHash, 14683763250952646100ull);
    vlSelf->sa_dpi_tb__DOT__o_c_vld = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10619446160495559295ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_dpi_tb__DOT__a_matrix[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_dpi_tb__DOT__b_matrix[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_dpi_tb__DOT__expected[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->sa_dpi_tb__DOT__collected[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sa_dpi_tb__DOT__a_flat[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sa_dpi_tb__DOT__b_flat[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sa_dpi_tb__DOT__ref_flat[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->sa_dpi_tb__DOT__col_cursor[__Vi0] = 0;
    }
    vlSelf->sa_dpi_tb__DOT__total_collected = 0;
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15124098218406948891ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2613637485638509169ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3214277156296641181ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12179072542241418638ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16768494303002403409ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4467113587933979861ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6574811794034770496ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13575954333571922141ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8172618204084928235ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11066293407139325830ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2280904602881958981ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10212349164437390487ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9219330259213153641ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6570392321658813049ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12589463220766782463ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2433887792394952090ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16366551869171229152ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6519314739113337420ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2709989400033639109ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5255983865280611231ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14974498762278670073ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12021514627207882201ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10195750623201296026ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14299051635757465698ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14807617361208069372ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18205967161456732148ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3499132270529469094ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4283319778784437555ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16725961355235734427ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15061705518111344503ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5515700574309283591ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2772604755124273069ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8495642395302022465ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14596366518156780812ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18342964873472511496ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7931081998598895029ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9650305926766971170ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8051177317803681798ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 157745438785757199ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6655948803204983006ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7443951698714181736ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 307129720312688001ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4099916914715484323ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8598185706466625628ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14755633274448598188ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17100654564600950979ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14008935109005823423ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15073237045400363834ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3282275521530168958ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2953589479131882443ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8835250806892916608ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7820337179153731485ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9510631424866072041ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11592137851926161145ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4129449900569653768ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1565109585068316178ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12917014368522372665ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5180630106893146223ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7932641718939868248ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7794542527114167025ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8756926604377376409ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9375939933709035784ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2080197668298837721ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1602382257286076548ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16824701718080082526ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12322336632245616797ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10992972762102066385ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15174167661151109442ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11883894501655429119ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2970423629155682203ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3619983445335169796ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11222385299489291020ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10133142871594273924ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11013894083650818740ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8575883714691695267ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10981743927378781026ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18331139096990619287ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5264536843839481711ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7839357536638774585ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 939113630738059192ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 985481832201603128ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3606856372085944715ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1553098762898416278ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3903787320137476728ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6225412319885488142ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10772309905521761346ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18420251318515777736ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12122141925379627319ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14011323587146776859ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13824598904734677063ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4562158463380541070ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4669456239112417910ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 605025897156551636ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7047701488810674916ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11786908743507476434ull);
    vlSelf->sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4285126619760464016ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3118098094199171626ull);
    vlSelf->__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11242320698634468045ull);
    vlSelf->__Vtrigprevexpr_h96bf1eda__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 426813652731402249ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
