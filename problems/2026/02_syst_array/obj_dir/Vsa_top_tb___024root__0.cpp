// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_top_tb.h for the primary calling header

#include "Vsa_top_tb__pch.h"

extern "C" svBit VerifySA();

void Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__VerifySA_TOP(CData/*0:0*/ &VerifySA__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__VerifySA_TOP\n"); );
    // Body
    svBit VerifySA__Vfuncrtn__Vcvt;
    VerifySA__Vfuncrtn__Vcvt = VerifySA();
    VerifySA__Vfuncrtn = (1U & (VerifySA__Vfuncrtn__Vcvt));
}

extern "C" void SetElemA(short Elem, int Pos);

void Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemA_TOP(SData/*15:0*/ Elem, IData/*31:0*/ Pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemA_TOP\n"); );
    // Body
    short Elem__Vcvt;
    Elem__Vcvt = Elem;
    int Pos__Vcvt;
    Pos__Vcvt = Pos;
    SetElemA(Elem__Vcvt, Pos__Vcvt);
}

extern "C" void SetElemB(short Elem, int Pos);

void Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemB_TOP(SData/*15:0*/ Elem, IData/*31:0*/ Pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemB_TOP\n"); );
    // Body
    short Elem__Vcvt;
    Elem__Vcvt = Elem;
    int Pos__Vcvt;
    Pos__Vcvt = Pos;
    SetElemB(Elem__Vcvt, Pos__Vcvt);
}

extern "C" void SetElemC(short Elem, int Pos);

void Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemC_TOP(SData/*15:0*/ Elem, IData/*31:0*/ Pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemC_TOP\n"); );
    // Body
    short Elem__Vcvt;
    Elem__Vcvt = Elem;
    int Pos__Vcvt;
    Pos__Vcvt = Pos;
    SetElemC(Elem__Vcvt, Pos__Vcvt);
}

extern "C" void SetSize(int Size);

void Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetSize_TOP(IData/*31:0*/ Size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetSize_TOP\n"); );
    // Body
    int Size__Vcvt;
    Size__Vcvt = Size;
    SetSize(Size__Vcvt);
}

VL_ATTR_COLD void Vsa_top_tb___024root___eval_initial__TOP(Vsa_top_tb___024root* vlSelf);
VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_top_tb___024root* vlSelf);
VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_top_tb___024root* vlSelf);

void Vsa_top_tb___024root___eval_initial(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a = 0;
    IData/*31:0*/ __Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__pos;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__pos = 0;
    SData/*15:0*/ __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__c;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__c = 0;
    CData/*0:0*/ __Vfunc_sa_top_tb__DOT__VerifySA__8__Vfuncout;
    __Vfunc_sa_top_tb__DOT__VerifySA__8__Vfuncout = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.sa_top_tb__DOT__rst_n = 1U;
    vlSelfRef.sa_top_tb__DOT__i_we = 0U;
    vlSelfRef.sa_top_tb__DOT__i_a_vld = 0U;
    vlSelfRef.sa_top_tb__DOT__i_c_vld = 0U;
    co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_top_tb.clk)", 
                                                         "src/sa_top_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sa_top_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_top_tb.clk)", 
                                                         "src/sa_top_tb.sv", 
                                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sa_top_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_top_tb.clk)", 
                                                         "src/sa_top_tb.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i = 0;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos = 0;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a = 0;
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b = 0;
    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetSize_TOP(4U);
    __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i)))) {
        __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j = 0U;
        while (VL_GTS_III(32, 4U, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j)))) {
            __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos 
                = (0x0000ffffU & (VL_MULS_III(32, (IData)(4U), 
                                              VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i))) 
                                  + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j))));
            __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
                = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos))));
            __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b 
                = (0x0000ffffU & (- ((IData)(1U) + 
                                     VL_MULS_III(32, (IData)(2U), 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos))))));
            Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemA_TOP(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a, 
                                                                            VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos)));
            Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemB_TOP(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b, 
                                                                            VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__pos)));
            __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j 
                = (0x0000ffffU & ((IData)(1U) + (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__unnamedblk2__DOT__j)));
        }
        __Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i 
            = (0x0000ffffU & ((IData)(1U) + (IData)(__Vtask_sa_top_tb__DOT__GenMatrices__0__unnamedblk1__DOT__i)));
    }
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i = 3U;
    while (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i)))) {
        if ((0U == VL_MODDIVS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i)), (IData)(2U)))) {
            vlSelfRef.sa_top_tb__DOT__i_we = 0U;
            vlSelfRef.sa_top_tb__DOT__i_a_vld = 0U;
            vlSelfRef.sa_top_tb__DOT__i_a_line = 0ULL;
            co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sa_top_tb.clk)", 
                                                                 "src/sa_top_tb.sv", 
                                                                 65);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sa_top_tb.clk)", 
                                                                 "src/sa_top_tb.sv", 
                                                                 66);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sa_top_tb.clk)", 
                                                                 "src/sa_top_tb.sv", 
                                                                 67);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 0U;
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos 
            = (0x0000ffffU & VL_MULS_III(32, (IData)(4U), 
                                         VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i))));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b 
            = (0x0000ffffU & (- ((IData)(1U) + VL_MULS_III(32, (IData)(2U), 
                                                           VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos))))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0xffffffffffff0000ULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | (IData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b)));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 1U;
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos 
            = (0x0000ffffU & ((IData)(1U) + VL_MULS_III(32, (IData)(4U), 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i)))));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b 
            = (0x0000ffffU & (- ((IData)(1U) + VL_MULS_III(32, (IData)(2U), 
                                                           VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos))))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0xffffffff0000ffffULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | ((QData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b)) 
                                                 << 0x00000010U));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 2U;
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos 
            = (0x0000ffffU & ((IData)(2U) + VL_MULS_III(32, (IData)(4U), 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i)))));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b 
            = (0x0000ffffU & (- ((IData)(1U) + VL_MULS_III(32, (IData)(2U), 
                                                           VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos))))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0xffff0000ffffffffULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | ((QData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b)) 
                                                 << 0x00000020U));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 3U;
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos 
            = (0x0000ffffU & ((IData)(3U) + VL_MULS_III(32, (IData)(4U), 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i)))));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b 
            = (0x0000ffffU & (- ((IData)(1U) + VL_MULS_III(32, (IData)(2U), 
                                                           VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__pos))))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0x0000ffffffffffffULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | ((QData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b)) 
                                                 << 0x00000030U));
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
        vlSelfRef.sa_top_tb__DOT__i_we = 1U;
        vlSelfRef.sa_top_tb__DOT__i_a_vld = 1U;
        co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_top_tb.clk)", 
                                                             "src/sa_top_tb.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i 
            = (0x0000ffffU & ((IData)(__Vtask_sa_top_tb__DOT__LoadIdleB__4__unnamedblk4__DOT__i) 
                              - (IData)(1U)));
    }
    vlSelfRef.sa_top_tb__DOT__i_we = 0U;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a = 0;
    __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i)))) {
        if ((2U == VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i)))) {
            vlSelfRef.sa_top_tb__DOT__i_a_vld = 0U;
            vlSelfRef.sa_top_tb__DOT__i_c_vld = 0U;
            co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sa_top_tb.clk)", 
                                                                 "src/sa_top_tb.sv", 
                                                                 87);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 0U;
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos 
            = (0x0000ffffU & VL_MULS_III(32, (IData)(4U), 
                                         VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i))));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a 
            = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0xffffffffffff0000ULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | (IData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a)));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 1U;
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos 
            = (0x0000ffffU & ((IData)(1U) + VL_MULS_III(32, (IData)(4U), 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i)))));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a 
            = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0xffffffff0000ffffULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | ((QData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a)) 
                                                 << 0x00000010U));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 2U;
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos 
            = (0x0000ffffU & ((IData)(2U) + VL_MULS_III(32, (IData)(4U), 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i)))));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a 
            = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0xffff0000ffffffffULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | ((QData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a)) 
                                                 << 0x00000020U));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 3U;
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos 
            = (0x0000ffffU & ((IData)(3U) + VL_MULS_III(32, (IData)(4U), 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i)))));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a 
            = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__pos))));
        vlSelfRef.sa_top_tb__DOT__i_a_line = ((0x0000ffffffffffffULL 
                                               & vlSelfRef.sa_top_tb__DOT__i_a_line) 
                                              | ((QData)((IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__a)) 
                                                 << 0x00000030U));
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
        vlSelfRef.sa_top_tb__DOT__i_a_vld = 1U;
        vlSelfRef.sa_top_tb__DOT__i_c_vld = 1U;
        co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_top_tb.clk)", 
                                                             "src/sa_top_tb.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i 
            = (0x0000ffffU & ((IData)(1U) + (IData)(__Vtask_sa_top_tb__DOT__LoadIdleA__5__unnamedblk7__DOT__i)));
    }
    vlSelfRef.sa_top_tb__DOT__i_a_vld = 0U;
    vlSelfRef.sa_top_tb__DOT__i_c_vld = 0U;
    __Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i = 0;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__pos = 0;
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__c = 0;
    __Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_top_tb.clk)", 
                                                             "src/sa_top_tb.sv", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_sa_top_tb__DOT__WriteC__6__sa_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i)))) {
        if ((2U == VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i)))) {
            if ((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                  >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                    [1U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                    [2U])))) {
                vlSelfRef.sa_top_tb__DOT__c_vld_correct = 0U;
            }
            co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge sa_top_tb.clk)", 
                                                                 "src/sa_top_tb.sv", 
                                                                 110);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        } else if ((1U & (~ (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                              >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                        [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                                [1U] 
                                                & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                                [2U])))))) {
            vlSelfRef.sa_top_tb__DOT__c_vld_correct = 0U;
        }
        __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j = 0U;
        while (VL_GTS_III(32, 4U, VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j)))) {
            __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__pos 
                = (0x0000ffffU & (VL_MULS_III(32, (IData)(4U), 
                                              VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i))) 
                                  + VL_EXTENDS_II(16,16, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j))));
            __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__c 
                = (0x0000ffffU & (IData)(((((QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                                       >> 0x00000030U)) 
                                                              << 0x00000010U) 
                                                             | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                                             [0U]))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                                               [1U] 
                                                               << 0x00000010U) 
                                                              | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                                              [2U])))) 
                                          >> (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j), 4U)))));
            Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__SetElemC_TOP(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__c, 
                                                                            VL_EXTENDS_II(32,16, (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__pos)));
            __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j 
                = (0x0000ffffU & ((IData)(1U) + (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__unnamedblk11__DOT__j)));
        }
        co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_top_tb.clk)", 
                                                             "src/sa_top_tb.sv", 
                                                             121);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i 
            = (0x0000ffffU & ((IData)(1U) + (IData)(__Vtask_sa_top_tb__DOT__WriteC__6__unnamedblk10__DOT__i)));
    }
    if ((([&]() {
                    Vsa_top_tb___024root____Vdpiimwrap_sa_top_tb__DOT__VerifySA_TOP(__Vfunc_sa_top_tb__DOT__VerifySA__8__Vfuncout);
                }(), (IData)(__Vfunc_sa_top_tb__DOT__VerifySA__8__Vfuncout)) 
         & (IData)(vlSelfRef.sa_top_tb__DOT__c_vld_correct))) {
        VL_WRITEF_NX("PASSED\n",0);
    } else {
        VL_WRITEF_NX("FAILED\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "src/sa_top_tb.sv", 
                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("src/sa_top_tb.sv", 151, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "src/sa_top_tb.sv", 
                                             41);
        vlSelfRef.__VdlyVal__sa_top_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__clk)));
        vlSelfRef.__VdlySet__sa_top_tb__DOT__clk__v0 = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_top_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsa_top_tb___024root___eval_triggers__act(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_triggers__act\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.sa_top_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.sa_top_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0 
        = vlSelfRef.sa_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst_n__0 
        = vlSelfRef.sa_top_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsa_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsa_top_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___trigger_anySet__act\n"); );
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

void Vsa_top_tb___024root___act_comb__TOP__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___act_comb__TOP__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                             [0U] << 1U) 
                                            | (IData)(vlSelfRef.sa_top_tb__DOT__i_a_vld)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data 
        = (((QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                              [2U] << 0x00000010U) 
                             | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                             [1U]))) << 0x00000020U) 
           | (QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                               [0U] << 0x00000010U) 
                              | (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__i_a_line))))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__i_we) ? (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg)
            : 0U);
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                             [0U] << 1U) 
                                            | (IData)(vlSelfRef.sa_top_tb__DOT__i_c_vld)));
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
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                             [0U] << 1U) 
                                            | (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
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
}

void Vsa_top_tb___024root___eval_act(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_act\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsa_top_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vsa_top_tb___024root___nba_sequent__TOP__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0;
    // Body
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 0U;
    if (vlSelfRef.sa_top_tb__DOT__rst_n) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                      >> 0x00000020U)));
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                     >> 1U));
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                      >> 0x00000010U)));
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out));
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
            [1U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out));
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
            [1U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__i_a_line 
                                      >> 0x00000010U)));
        if (vlSelfRef.sa_top_tb__DOT__i_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg 
                = ((8U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg) 
                          << 3U)) | (7U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg) 
                                           >> 1U)));
        }
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_top_tb__DOT__i_a_vld;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__i_a_line 
                                      >> 0x00000020U)));
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                     >> 2U));
        __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_top_tb__DOT__i_a_vld;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [1U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__i_a_line 
                                      >> 0x00000030U)));
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [1U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_h07c77690__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                     >> 3U));
        __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [1U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_top_tb__DOT__i_c_vld;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 
            = vlSelfRef.sa_top_tb__DOT__i_c_vld;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [0U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
            [1U];
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT____Vlvbound_hed2f8500__0;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [0U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [0U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [0U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [0U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [1U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [1U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [1U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [1U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [2U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [2U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [2U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [2U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [3U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [3U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [3U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
            [3U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [0U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [0U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [0U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [0U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [1U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [1U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [1U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [1U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [2U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [2U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [2U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [2U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [3U][0U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [3U][1U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [3U][2U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
            [3U][3U];
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [0U][0U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [0U][0U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [0U][1U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [0U][1U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [0U][2U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [0U][2U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [0U][3U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [0U][3U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [1U][0U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [1U][0U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [1U][1U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [1U][1U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [1U][2U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [1U][2U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [1U][3U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [1U][3U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [2U][0U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [2U][0U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [2U][1U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [2U][1U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [2U][2U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [2U][2U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [2U][3U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [2U][3U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [3U][0U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [3U][0U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [3U][1U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [3U][1U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [3U][2U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [3U][2U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld 
            = (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
               [3U][3U] & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
               [3U][3U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [0U][0U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [0U][0U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [0U][1U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [0U][1U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [0U][2U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [0U][2U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [0U][3U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [0U][3U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [1U][0U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [1U][0U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [1U][1U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [1U][1U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [1U][2U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [1U][2U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [1U][3U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [1U][3U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [2U][0U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [2U][0U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [2U][1U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [2U][1U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [2U][2U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [2U][2U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [2U][3U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [2U][3U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [3U][0U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [3U][0U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [3U][1U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [3U][1U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [3U][2U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [3U][2U]));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c 
            = (0x0000ffffU & ((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                               [3U][3U] * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg)) 
                              + vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                              [3U][3U]));
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][0U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [0U][0U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][1U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [0U][1U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][2U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [0U][2U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [0U][3U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [0U][3U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][0U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [1U][0U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][1U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [1U][1U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][2U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [1U][2U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [1U][3U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [1U][3U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][0U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [2U][0U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][1U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [2U][1U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][2U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [2U][2U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [2U][3U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [2U][3U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][0U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [3U][0U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][1U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [3U][1U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][2U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [3U][2U];
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
            [3U][3U]) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                [3U][3U];
        }
    } else {
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3 = 1U;
        __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg = 8U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2 = 1U;
        __VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3 = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst_n)))) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i = 1U;
    }
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst_n) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                     >> 2U)));
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__i_a_vld));
    __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst_n) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                     >> 1U)));
    __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__i_c_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] 
        = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] 
        = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v0;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v2;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data__v3) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2U] = 0U;
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] 
        = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] 
        = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] 
        = __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0U] 
        = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data__v0;
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v0;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v0;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v1;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v2;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data__v3) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2U] = 0U;
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[0U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[1U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[2U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig[3U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld;
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
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][0U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig[4U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[0U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[1U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[2U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig[3U][4U] 
        = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a;
}

void Vsa_top_tb___024root___nba_sequent__TOP__1(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___nba_sequent__TOP__1\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__sa_top_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__sa_top_tb__DOT__clk__v0 = 0U;
        vlSelfRef.sa_top_tb__DOT__clk = vlSelfRef.__VdlyVal__sa_top_tb__DOT__clk__v0;
    }
}

void Vsa_top_tb___024root___nba_comb__TOP__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___nba_comb__TOP__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__i_we) ? (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg)
            : 0U);
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                             [0U] << 1U) 
                                            | (IData)(vlSelfRef.sa_top_tb__DOT__i_a_vld)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data 
        = (((QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                              [2U] << 0x00000010U) 
                             | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                             [1U]))) << 0x00000020U) 
           | (QData)((IData)(((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                               [0U] << 0x00000010U) 
                              | (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__i_a_line))))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                             [0U] << 1U) 
                                            | (IData)(vlSelfRef.sa_top_tb__DOT__i_c_vld)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data 
        = (((vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
             [2U] << 3U) | (vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U] << 2U)) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                             [0U] << 1U) 
                                            | (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
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
}

void Vsa_top_tb___024root___eval_nba(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_nba\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsa_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsa_top_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsa_top_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vsa_top_tb___024root___timing_commit(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___timing_commit\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h0ca0db50__0.commit(
                                                   "@(posedge sa_top_tb.clk)");
    }
}

void Vsa_top_tb___024root___timing_resume(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___timing_resume\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0ca0db50__0.resume(
                                                   "@(posedge sa_top_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsa_top_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsa_top_tb___024root___eval_phase__act(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_phase__act\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsa_top_tb___024root___eval_triggers__act(vlSelf);
    Vsa_top_tb___024root___timing_commit(vlSelf);
    Vsa_top_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsa_top_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsa_top_tb___024root___timing_resume(vlSelf);
        Vsa_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsa_top_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsa_top_tb___024root___eval_phase__nba(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_phase__nba\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsa_top_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsa_top_tb___024root___eval_nba(vlSelf);
        Vsa_top_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsa_top_tb___024root___eval(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsa_top_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/sa_top_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsa_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/sa_top_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsa_top_tb___024root___eval_phase__act(vlSelf));
    } while (Vsa_top_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsa_top_tb___024root___eval_debug_assertions(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_debug_assertions\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
