// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxis_fifo_tb.h for the primary calling header

#include "Vaxis_fifo_tb__pch.h"

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_static__TOP(Vaxis_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vaxis_fifo_tb___024root____Vm_traceActivitySetAll(Vaxis_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_static(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_static\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaxis_fifo_tb___024root___eval_static__TOP(vlSelf);
    Vaxis_fifo_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__clk__0 
        = vlSelfRef.axis_fifo_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__rst_n__0 
        = vlSelfRef.axis_fifo_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_static__TOP(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_static__TOP\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr = 0U;
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr = 0U;
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count = 0U;
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n = 0U;
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_initial__TOP(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_fifo_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_final(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_final\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxis_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaxis_fifo_tb___024root___eval_phase__stl(Vaxis_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_settle(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_settle\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vaxis_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/axis_fifo_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vaxis_fifo_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_triggers__stl(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_triggers__stl\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxis_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vaxis_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxis_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vaxis_fifo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vaxis_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___trigger_anySet__stl\n"); );
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

void Vaxis_fifo_tb___024root___act_comb__TOP__0(Vaxis_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_stl(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_stl\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vaxis_fifo_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vaxis_fifo_tb___024root___eval_phase__stl(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_phase__stl\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaxis_fifo_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vaxis_fifo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vaxis_fifo_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vaxis_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxis_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vaxis_fifo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge axis_fifo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge axis_fifo_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxis_fifo_tb___024root____Vm_traceActivitySetAll(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root____Vm_traceActivitySetAll\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root___ctor_var_reset(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___ctor_var_reset\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->axis_fifo_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5229139833122560673ull);
    vlSelf->axis_fifo_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16864666758075244491ull);
    vlSelf->axis_fifo_tb__DOT__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643201327460491107ull);
    vlSelf->axis_fifo_tb__DOT__s_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15101606980349374744ull);
    vlSelf->axis_fifo_tb__DOT__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 971314328115894838ull);
    vlSelf->axis_fifo_tb__DOT__m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12933706688161012904ull);
    vlSelf->axis_fifo_tb__DOT__test_passed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8202898128259060812ull);
    vlSelf->axis_fifo_tb__DOT__error_count = 0;
    vlSelf->axis_fifo_tb__DOT__test_data.atDefault() = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14201892646063316078ull);
    vlSelf->axis_fifo_tb__DOT__received_data.atDefault() = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17668136205567196571ull);
    vlSelf->axis_fifo_tb__DOT__test_tlast.atDefault() = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9699357104845455102ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->axis_fifo_tb__DOT__dut__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16773962678509228731ull);
    }
    vlSelf->axis_fifo_tb__DOT__dut__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10661109458387566537ull);
    vlSelf->axis_fifo_tb__DOT__dut__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8988657831103764018ull);
    vlSelf->axis_fifo_tb__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11725750477149842032ull);
    vlSelf->axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452105793798958710ull);
    vlSelf->axis_fifo_tb__DOT__dut__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17237769990377783163ull);
    vlSelf->axis_fifo_tb__DOT__dut__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3675012616099299025ull);
    vlSelf->__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent = 0;
    vlSelf->__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles = 0;
    vlSelf->__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18274590883324314763ull);
    vlSelf->__VdlyVal__axis_fifo_tb__DOT__clk__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1038783159786674659ull);
    vlSelf->__VdlySet__axis_fifo_tb__DOT__clk__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13995282956886243537ull);
    vlSelf->__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1902516023508411567ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
