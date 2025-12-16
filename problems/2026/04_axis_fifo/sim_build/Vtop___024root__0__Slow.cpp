// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo__DOT__clk__0 
        = vlSelfRef.axis_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo__DOT__rst_n__0 
        = vlSelfRef.axis_fifo__DOT__rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("src/axis_fifo.sv", 1, "", "Settle region did not converge after 100 tries");
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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge axis_fifo.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge axis_fifo.rst_n)\n");
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
    vlSelf->s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7678217216116487763ull);
    vlSelf->s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12236809265553805965ull);
    vlSelf->s_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6413635470731068441ull);
    vlSelf->s_axis_tstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5372727792339366163ull);
    vlSelf->s_axis_tkeep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6494536958632130591ull);
    vlSelf->s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 750346815483064505ull);
    vlSelf->s_axis_tid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3746330493245997045ull);
    vlSelf->s_axis_tdest = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14905977634003549670ull);
    vlSelf->s_axis_tuser = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8856106712201831047ull);
    vlSelf->m_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11050073027672567459ull);
    vlSelf->m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5619517951140101778ull);
    vlSelf->m_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8796747702141925029ull);
    vlSelf->m_axis_tstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6311274944724556768ull);
    vlSelf->m_axis_tkeep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3915191572914464546ull);
    vlSelf->m_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3666489172703407315ull);
    vlSelf->m_axis_tid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11561059174860515233ull);
    vlSelf->m_axis_tdest = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17812931604494678829ull);
    vlSelf->m_axis_tuser = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4289079287625486832ull);
    vlSelf->axis_fifo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6916208153541226414ull);
    vlSelf->axis_fifo__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11067725727072001125ull);
    vlSelf->axis_fifo__DOT__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7521428343061974440ull);
    vlSelf->axis_fifo__DOT__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16191640180540363076ull);
    vlSelf->axis_fifo__DOT__s_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1498608922069609900ull);
    vlSelf->axis_fifo__DOT__s_axis_tstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3043115969071844841ull);
    vlSelf->axis_fifo__DOT__s_axis_tkeep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8147128211472239028ull);
    vlSelf->axis_fifo__DOT__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2815257314056208865ull);
    vlSelf->axis_fifo__DOT__s_axis_tid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13497476346723314878ull);
    vlSelf->axis_fifo__DOT__s_axis_tdest = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4681517328174192110ull);
    vlSelf->axis_fifo__DOT__s_axis_tuser = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17006746227886319108ull);
    vlSelf->axis_fifo__DOT__m_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615001115694989151ull);
    vlSelf->axis_fifo__DOT__m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5295182258944872964ull);
    vlSelf->axis_fifo__DOT__m_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9096644664502163770ull);
    vlSelf->axis_fifo__DOT__m_axis_tstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5823424891342676175ull);
    vlSelf->axis_fifo__DOT__m_axis_tkeep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3439980133339472818ull);
    vlSelf->axis_fifo__DOT__m_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7453209560400199845ull);
    vlSelf->axis_fifo__DOT__m_axis_tid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6786957694847137124ull);
    vlSelf->axis_fifo__DOT__m_axis_tdest = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17204437279855392112ull);
    vlSelf->axis_fifo__DOT__m_axis_tuser = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6017703747054438892ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->axis_fifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 14419546496840906289ull);
    }
    vlSelf->axis_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16991405196833143633ull);
    vlSelf->axis_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3801030341157983648ull);
    vlSelf->axis_fifo__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14513604577741812720ull);
    vlSelf->axis_fifo__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11800509884871870992ull);
    vlSelf->axis_fifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2597060814445909040ull);
    vlSelf->axis_fifo__DOT__wait_clk_after_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7191538070536731440ull);
    vlSelf->axis_fifo__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309506915128814306ull);
    vlSelf->axis_fifo__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11705728310240839223ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__axis_fifo__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13104765624155307497ull);
    vlSelf->__Vtrigprevexpr___TOP__axis_fifo__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9989614971466365415ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
