// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_top_tb.h for the primary calling header

#include "Vsa_top_tb__pch.h"

VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_top_tb___024root* vlSelf);
VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_top_tb___024root* vlSelf);

void Vsa_top_tb___024root___eval_initial(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ sa_top_tb__DOT__unnamedblk7__DOT__errors;
    sa_top_tb__DOT__unnamedblk7__DOT__errors = 0;
    IData/*31:0*/ sa_top_tb__DOT__unnamedblk7__DOT__unnamedblk1_1__DOT____Vrepeat0;
    sa_top_tb__DOT__unnamedblk7__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> __Vtask_sa_top_tb__DOT__display_matrix__0__mat;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            __Vtask_sa_top_tb__DOT__display_matrix__0__mat[__Vi0][__Vi1] = 0;
        }
    }
    std::string __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> __Vtask_sa_top_tb__DOT__display_matrix__1__mat;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            __Vtask_sa_top_tb__DOT__display_matrix__1__mat[__Vi0][__Vi1] = 0;
        }
    }
    std::string __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line;
    std::string __Vtask_sa_top_tb__DOT__display_matrix__2__name;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> __Vtask_sa_top_tb__DOT__display_matrix__2__mat;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            __Vtask_sa_top_tb__DOT__display_matrix__2__mat[__Vi0][__Vi1] = 0;
        }
    }
    IData/*31:0*/ __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 0;
    std::string __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line;
    IData/*31:0*/ __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0;
    std::string __Vtask_sa_top_tb__DOT__display_matrix__3__name;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> __Vtask_sa_top_tb__DOT__display_matrix__3__mat;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            __Vtask_sa_top_tb__DOT__display_matrix__3__mat[__Vi0][__Vi1] = 0;
        }
    }
    IData/*31:0*/ __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 0;
    std::string __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line;
    IData/*31:0*/ __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0;
    // Body
    vlSelfRef.sa_top_tb__DOT__matrix_a[0U][0U] = 1U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[0U][1U] = 2U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[0U][2U] = 3U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[0U][3U] = 4U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[1U][0U] = 5U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[1U][1U] = 6U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[1U][2U] = 7U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[1U][3U] = 8U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[2U][0U] = 1U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[2U][1U] = 2U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[2U][2U] = 3U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[2U][3U] = 4U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[3U][0U] = 5U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[3U][1U] = 6U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[3U][2U] = 7U;
    vlSelfRef.sa_top_tb__DOT__matrix_a[3U][3U] = 8U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[0U][0U] = 3U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[0U][1U] = 4U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[0U][2U] = 5U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[0U][3U] = 6U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[1U][0U] = 7U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[1U][1U] = 8U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[1U][2U] = 9U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[1U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[2U][0U] = 3U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[2U][1U] = 4U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[2U][2U] = 5U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[2U][3U] = 6U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[3U][0U] = 7U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[3U][1U] = 8U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[3U][2U] = 9U;
    vlSelfRef.sa_top_tb__DOT__matrix_b[3U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__printable_a[0U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[0U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_b[0U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[0U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_a[0U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[0U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_b[0U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[0U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_a[0U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[0U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_b[0U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[0U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_a[0U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[0U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_b[0U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[0U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_a[1U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[1U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_b[1U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[1U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_a[1U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[1U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_b[1U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[1U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_a[1U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[1U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_b[1U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[1U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_a[1U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[1U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_b[1U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[1U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_a[2U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[2U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_b[2U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[2U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_a[2U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[2U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_b[2U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[2U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_a[2U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[2U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_b[2U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[2U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_a[2U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[2U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_b[2U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[2U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_a[3U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[3U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_b[3U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[3U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_a[3U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[3U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_b[3U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[3U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_a[3U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[3U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_b[3U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[3U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_a[3U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_a[3U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_b[3U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_b[3U][3U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[0U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[0U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[0U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[0U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[0U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[1U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[1U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[1U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[1U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[2U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[2U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[2U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[2U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[3U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[3U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[3U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__0__mat[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_a[3U]
        [3U];
    VL_WRITEF_NX("Matrix A:\n",0);
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                               [0U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [0U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [0U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [0U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                               [1U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [1U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [1U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [1U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                               [2U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [2U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [2U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [2U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                               [3U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [3U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [3U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__0__mat
                                                                                [3U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__0__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[0U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[0U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[0U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[0U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[0U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[1U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[1U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[1U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[1U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[2U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[2U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[2U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[2U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[3U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[3U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[3U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__1__mat[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_b[3U]
        [3U];
    VL_WRITEF_NX("Matrix B:\n",0);
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                               [0U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [0U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [0U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [0U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                               [1U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [1U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [1U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [1U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                               [2U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [2U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [2U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [2U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                               [3U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [3U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [3U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__1__mat
                                                                                [3U]
                                                                                [3U]) );
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__1__unnamedblk1__DOT__unnamedblk2__DOT__line));
    sa_top_tb__DOT__unnamedblk7__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, sa_top_tb__DOT__unnamedblk7__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_top_tb.clk)", 
                                                             "tb/sa_dpi_tb.sv", 
                                                             88);
        sa_top_tb__DOT__unnamedblk7__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (sa_top_tb__DOT__unnamedblk7__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sa_top_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_top_tb.clk)", 
                                                         "tb/sa_dpi_tb.sv", 
                                                         90);
    vlSelfRef.sa_top_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_top_tb.clk)", 
                                                         "tb/sa_dpi_tb.sv", 
                                                         92);
    vlSelfRef.sa_top_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_hc3b5157f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( sa_top_tb.done)", 
                                                             "tb/sa_dpi_tb.sv", 
                                                             96);
    }
    co_await vlSelfRef.__VtrigSched_h0ca0db50__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_top_tb.clk)", 
                                                         "tb/sa_dpi_tb.sv", 
                                                         97);
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][0U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][1U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][2U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[0U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [0U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [0U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][0U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][1U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][2U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[1U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [1U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [1U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][0U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][1U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][2U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[2U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [2U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [2U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][0U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][0U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][0U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][0U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][1U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][1U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][1U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][1U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][2U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][2U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][2U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][2U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][3U] = 0U;
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][0U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [0U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][1U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [1U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][2U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [2U][3U]));
    vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected[3U][3U] 
        = (vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
           [3U][3U] + (vlSelfRef.sa_top_tb__DOT__matrix_a
                       [3U][3U] * vlSelfRef.sa_top_tb__DOT__matrix_b
                       [3U][3U]));
    vlSelfRef.sa_top_tb__DOT__printable_c[0U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_c[0U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_c[0U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_c[0U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_c[1U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_c[1U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_c[1U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_c[1U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_c[2U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_c[2U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_c[2U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_c[2U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][3U];
    vlSelfRef.sa_top_tb__DOT__printable_c[3U][0U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][0U];
    vlSelfRef.sa_top_tb__DOT__printable_c[3U][1U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][1U];
    vlSelfRef.sa_top_tb__DOT__printable_c[3U][2U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][2U];
    vlSelfRef.sa_top_tb__DOT__printable_c[3U][3U] = 
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][3U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[0U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[0U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[0U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[0U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[0U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[1U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[1U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[1U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[1U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[2U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[2U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[2U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[2U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[3U]
        [0U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[3U]
        [1U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[3U]
        [2U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__mat[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__printable_c[3U]
        [3U];
    __Vtask_sa_top_tb__DOT__display_matrix__2__name = "Result matrix C (hardware)"s;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 0;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line.clear();
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0;
    VL_WRITEF_NX("%@:\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__2__name));
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                               [0U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [0U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [0U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [0U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                               [1U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [1U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [1U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [1U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                               [2U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [2U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [2U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [2U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                               [3U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [3U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [3U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__2__mat
                                                                                [3U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__2__unnamedblk1__DOT__r = 4U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[0U][0U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [0U][0U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[0U][1U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [0U][1U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[0U][2U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [0U][2U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[0U][3U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [0U][3U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[1U][0U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [1U][0U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[1U][1U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [1U][1U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[1U][2U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [1U][2U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[1U][3U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [1U][3U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[2U][0U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [2U][0U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[2U][1U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [2U][1U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[2U][2U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [2U][2U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[2U][3U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [2U][3U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[3U][0U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [3U][0U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[3U][1U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [3U][1U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[3U][2U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [3U][2U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__mat[3U][3U] 
        = vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
        [3U][3U];
    __Vtask_sa_top_tb__DOT__display_matrix__3__name = "Expected matrix"s;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 0;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line.clear();
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0;
    VL_WRITEF_NX("%@:\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__3__name));
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                               [0U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [0U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [0U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [0U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                               [1U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [1U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [1U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [1U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                               [2U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [2U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [2U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [2U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line = ""s;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(""s, VL_SFORMATF_N_NX("%6d",0,
                                               32,__Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                               [3U]
                                               [0U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 1U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [3U]
                                                                                [1U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 2U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [3U]
                                                                                [2U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 3U;
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line 
        = VL_CONCATN_NNN(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line, VL_SFORMATF_N_NX("%6d",0,
                                                                                32,
                                                                                __Vtask_sa_top_tb__DOT__display_matrix__3__mat
                                                                                [3U]
                                                                                [3U]) );
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 4U;
    VL_WRITEF_NX("  %@\n",0,-1,&(__Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__unnamedblk2__DOT__line));
    __Vtask_sa_top_tb__DOT__display_matrix__3__unnamedblk1__DOT__r = 4U;
    sa_top_tb__DOT__unnamedblk7__DOT__errors = 0U;
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [0U][0U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [0U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [0][0]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [0U][0U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [0U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [0U][1U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [0U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [0][1]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [0U][1U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [0U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [0U][2U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [0U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [0][2]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [0U][2U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [0U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [0U][3U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [0U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [0][3]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [0U][3U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [0U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [1U][0U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [1U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [1][0]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [1U][0U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [1U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [1U][1U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [1U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [1][1]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [1U][1U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [1U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [1U][2U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [1U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [1][2]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [1U][2U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [1U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [1U][3U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [1U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [1][3]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [1U][3U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [1U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [2U][0U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [2U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [2][0]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [2U][0U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [2U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [2U][1U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [2U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [2][1]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [2U][1U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [2U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [2U][2U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [2U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [2][2]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [2U][2U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [2U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [2U][3U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [2U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [2][3]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [2U][3U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [2U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [3U][0U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [3U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [3][0]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [3U][0U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [3U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [3U][1U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [3U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [3][1]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [3U][1U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [3U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [3U][2U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [3U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [3][2]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [3U][2U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [3U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_top_tb__DOT__matrix_c
                      [3U][3U] != vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                      [3U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:120: Assertion failed in %Nsa_top_tb.unnamedblk7.unnamedblk15.unnamedblk16: Mismatch at [3][3]: got %0# expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_top_tb__DOT__matrix_c
                     [3U][3U],32,vlSelfRef.sa_top_tb__DOT__unnamedblk7__DOT__expected
                     [3U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 120, "");
        sa_top_tb__DOT__unnamedblk7__DOT__errors = 
            ((IData)(1U) + sa_top_tb__DOT__unnamedblk7__DOT__errors);
    }
    if (VL_LIKELY(((0U == sa_top_tb__DOT__unnamedblk7__DOT__errors)))) {
        VL_WRITEF_NX("PASS: systolic array produced correct result\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: sa_dpi_tb.sv:129: Assertion failed in %Nsa_top_tb.unnamedblk7: FAIL: detected %0d mismatches\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,sa_top_tb__DOT__unnamedblk7__DOT__errors);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 129, "", false);
    }
    VL_FINISH_MT("tb/sa_dpi_tb.sv", 132, "");
}

VlCoroutine Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/sa_dpi_tb.sv", 
                                             34);
        vlSelfRef.sa_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__clk)));
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
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.sa_top_tb__DOT__done) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__done__0)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.sa_top_tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.sa_top_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__clk__0 
        = vlSelfRef.sa_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__rst__0 
        = vlSelfRef.sa_top_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_top_tb__DOT__done__0 
        = vlSelfRef.sa_top_tb__DOT__done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
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
    vlSelfRef.sa_top_tb__DOT__dut__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__start_d)) 
           & (IData)(vlSelfRef.sa_top_tb__DOT__start));
}

void Vsa_top_tb___024root___eval_act(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_act\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsa_top_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vsa_top_tb___024root___nba_sequent__TOP__0(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__sa_top_tb__DOT__dut__DOT__state;
    __Vdly__sa_top_tb__DOT__dut__DOT__state = 0;
    IData/*31:0*/ __Vdly__sa_top_tb__DOT__dut__DOT__step;
    __Vdly__sa_top_tb__DOT__dut__DOT__step = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__matrix_c__v0;
    __VdlySet__sa_top_tb__DOT__matrix_c__v0 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v28;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v28 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v28;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v28 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v28;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v28 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v17;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v17 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v29;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v29 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v29;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v29 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v19;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v19 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v30;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v30 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v30;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v30 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v21;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v21 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v31;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v31 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v31;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v31 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v27;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v27 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v36;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v36 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v36;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v36 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v29;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v29 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v37;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v37 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v37;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v37 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v31;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v31 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v38;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v38 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v38;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v38 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v39;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v39 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v39;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v39 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v39;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v39 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v44;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v44 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v44;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v44 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v44;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v44 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v45;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v45 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v45;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v45 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v45;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v45 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v46;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v46 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v46;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v46 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v46;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v46 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v47;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v47 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v47;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v47 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v47;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v47 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v52;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v52 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v52;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v52 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v52;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v52 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v53;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v53 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v53;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v53 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v53;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v53 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v54;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v54 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v54;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v54 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v54;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v54 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v55;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v55 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v55;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v55 = 0;
    SData/*15:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v55;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v55 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v8;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v8 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v8;
    __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v8 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v9;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v9 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v9;
    __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v9 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v10;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v10 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v11;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v11 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v11;
    __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v11 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v32;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v32 = 0;
    CData/*1:0*/ __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v32;
    __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v32 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v32;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v32 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v33;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v33 = 0;
    CData/*1:0*/ __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v33;
    __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v33 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v33;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v33 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v34;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v34 = 0;
    CData/*1:0*/ __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v34;
    __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v34 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v34;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v34 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v35;
    __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v35 = 0;
    CData/*1:0*/ __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v35;
    __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v35 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v35;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v35 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v16;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v16 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__matrix_c__v16;
    __VdlySet__sa_top_tb__DOT__matrix_c__v16 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v17;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v17 = 0;
    CData/*0:0*/ __VdlySet__sa_top_tb__DOT__matrix_c__v17;
    __VdlySet__sa_top_tb__DOT__matrix_c__v17 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v18;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v18 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v19;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v19 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v20;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v20 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v21;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v21 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v22;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v22 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v23;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v23 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v24;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v24 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v25;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v25 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v26;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v26 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v27;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v27 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v28;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v28 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v29;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v29 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v30;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v30 = 0;
    IData/*31:0*/ __VdlyVal__sa_top_tb__DOT__matrix_c__v31;
    __VdlyVal__sa_top_tb__DOT__matrix_c__v31 = 0;
    // Body
    __Vdly__sa_top_tb__DOT__dut__DOT__state = vlSelfRef.sa_top_tb__DOT__dut__DOT__state;
    __Vdly__sa_top_tb__DOT__dut__DOT__step = vlSelfRef.sa_top_tb__DOT__dut__DOT__step;
    __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v8 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v9 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v11 = 0U;
    __VdlySet__sa_top_tb__DOT__matrix_c__v16 = 0U;
    __VdlySet__sa_top_tb__DOT__matrix_c__v17 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v32 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v33 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v34 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v35 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v39 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v44 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v45 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v46 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v47 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v52 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v53 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v54 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v55 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v21 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v27 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v29 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v31 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v17 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v19 = 0U;
    __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v28 = 0U;
    __VdlySet__sa_top_tb__DOT__matrix_c__v0 = 0U;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__start_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
                                                   && (IData)(vlSelfRef.sa_top_tb__DOT__start));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst) ? 0U
            : (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst) ? 0U
            : (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst) ? 0U
            : (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst) ? 0U
            : (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        if ((8U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we))) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                                          >> 0x00000030U)));
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
            = (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c);
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
            = (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c);
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
            = (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c);
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst) ? 0U
            : (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        if ((4U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we))) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                                          >> 0x00000020U)));
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
            = (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c);
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
            = (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c);
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                     >> 1U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((2U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                            & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                      ? ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld) 
                         >> 1U) : ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld) 
                                   >> 1U))));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
            = (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c);
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                     >> 2U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((4U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                            & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                      ? ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld) 
                         >> 2U) : ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld) 
                                   >> 2U))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
        = ((IData)(vlSelfRef.sa_top_tb__DOT__rst) ? 0U
            : (((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                     >> 3U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((8U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                            & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                      ? ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld) 
                         >> 3U) : ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld) 
                                   >> 3U))));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we) 
                     >> 3U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a));
        if ((2U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we))) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                                          >> 0x00000010U)));
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
            = ((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                      & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[0U] 
                   + ((0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a)) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[0U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                                      >> 0x00000010U)));
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
            = ((2U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                      & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[1U] 
                   + ((0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                                              >> 0x00000010U))) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[1U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                                      >> 0x00000020U)));
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
            = ((4U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                      & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[2U] 
                   + ((0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                                              >> 0x00000020U))) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[2U]);
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                                      >> 0x00000030U)));
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we) 
                     >> 2U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
            = ((8U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld) 
                      & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld)))
                ? (vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[3U] 
                   + ((0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                                              >> 0x00000030U))) 
                      * (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)))
                : vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[3U]);
        if ((1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we))) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b));
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        }
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        }
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                                      >> 0x00000030U)));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        if (vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we) 
                     >> 1U)));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we));
    vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we 
        = ((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__rst))) 
           && (1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we)));
    if (vlSelfRef.sa_top_tb__DOT__rst) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = 0U;
        __Vdly__sa_top_tb__DOT__dut__DOT__state = 0U;
        __Vdly__sa_top_tb__DOT__dut__DOT__step = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a = 0ULL;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b = 0ULL;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld = 0U;
        vlSelfRef.sa_top_tb__DOT__done = 0U;
        __VdlySet__sa_top_tb__DOT__matrix_c__v0 = 1U;
    } else {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                                      >> 0x00000020U)));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                                      >> 0x00000010U)));
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__u_sa_core__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b));
        vlSelfRef.sa_top_tb__DOT__done = 0U;
        if ((0U == (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__state))) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a = 0ULL;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b = 0ULL;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[0U] = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[1U] = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[2U] = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[3U] = 0U;
            if (vlSelfRef.sa_top_tb__DOT__dut__DOT__start_edge) {
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [0U][0U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [0U][0U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v28 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v28 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v28 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                __Vdly__sa_top_tb__DOT__dut__DOT__step = 0U;
                __Vdly__sa_top_tb__DOT__dut__DOT__state = 1U;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [0U][1U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [1U][0U];
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v17 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v29 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v29 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [0U][2U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [2U][0U];
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v19 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v30 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v30 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [0U][3U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [3U][0U];
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v21 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v31 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v31 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [1U][0U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [0U][1U];
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v27 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v36 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v36 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [1U][1U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [1U][1U];
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v29 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v37 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v37 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [1U][2U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [2U][1U];
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v31 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v38 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v38 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [1U][3U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [3U][1U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v39 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v39 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v39 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [2U][0U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [0U][2U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v44 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v44 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v44 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [2U][1U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [1U][2U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v45 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v45 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v45 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [2U][2U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [2U][2U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v46 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v46 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v46 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [2U][3U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [3U][2U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v47 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v47 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v47 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [3U][0U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [0U][3U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v52 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v52 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v52 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [3U][1U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [1U][3U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v53 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v53 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v53 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [3U][2U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [2U][3U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v54 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v54 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v54 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_a
                    [3U][3U];
                vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0 
                    = vlSelfRef.sa_top_tb__DOT__matrix_b
                    [3U][3U];
                __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v55 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h609df45d__0;
                __VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v55 = 1U;
                __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v55 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT____Vlvbound_h404c371e__0;
            }
        } else if ((1U == (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__state))) {
            if (VL_GTS_III(32, 7U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step)) {
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = ((0xffffffffffff0000ULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a) 
                       | (IData)((IData)(((6U >= (7U 
                                                  & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                           ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                          [0U][(7U 
                                                & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                           : 0U))));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = ((0x0eU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld)) 
                       | ((0U != ((6U >= (7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                   ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                  [0U][(7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                   : 0U)) | (VL_LTES_III(32, 0U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                                             & VL_GTS_III(32, 4U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step))));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = ((0xffffffff0000ffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a) 
                       | ((QData)((IData)(((6U >= (7U 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                            ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                           [1U][(7U 
                                                 & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                            : 0U))) 
                          << 0x00000010U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = ((0x0dU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld)) 
                       | (((0U != ((6U >= (7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                    ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                   [1U][(7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                    : 0U)) | (VL_LTES_III(32, 1U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                                              & VL_GTS_III(32, 5U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step))) 
                          << 1U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = ((0xffff0000ffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a) 
                       | ((QData)((IData)(((6U >= (7U 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                            ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                           [2U][(7U 
                                                 & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                            : 0U))) 
                          << 0x00000020U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = ((0x0bU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld)) 
                       | (((0U != ((6U >= (7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                    ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                   [2U][(7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                    : 0U)) | (VL_LTES_III(32, 2U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                                              & VL_GTS_III(32, 6U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step))) 
                          << 2U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = ((0x0000ffffffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a) 
                       | ((QData)((IData)(((6U >= (7U 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                            ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                           [3U][(7U 
                                                 & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                            : 0U))) 
                          << 0x00000030U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = ((7U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld)) 
                       | (((0U != ((6U >= (7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                    ? vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix
                                   [3U][(7U & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                    : 0U)) | (VL_LTES_III(32, 3U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                                              & VL_GTS_III(32, 7U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step))) 
                          << 3U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = ((0xffffffffffff0000ULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b) 
                       | (IData)((IData)(((6U >= (7U 
                                                  & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                           ? vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix
                                          [0U][(7U 
                                                & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                           : 0U))));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = ((0x0eU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we)) 
                       | (VL_LTES_III(32, 0U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                          & VL_GTS_III(32, 4U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step)));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = ((0xffffffff0000ffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b) 
                       | ((QData)((IData)(((6U >= (7U 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                            ? vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix
                                           [1U][(7U 
                                                 & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                            : 0U))) 
                          << 0x00000010U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = ((0x0dU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we)) 
                       | ((VL_LTES_III(32, 1U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                           & VL_GTS_III(32, 5U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step)) 
                          << 1U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = ((0xffff0000ffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b) 
                       | ((QData)((IData)(((6U >= (7U 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                            ? vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix
                                           [2U][(7U 
                                                 & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                            : 0U))) 
                          << 0x00000020U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = ((0x0bU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we)) 
                       | ((VL_LTES_III(32, 2U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                           & VL_GTS_III(32, 6U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step)) 
                          << 2U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = ((0x0000ffffffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b) 
                       | ((QData)((IData)(((6U >= (7U 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__step))
                                            ? vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix
                                           [3U][(7U 
                                                 & vlSelfRef.sa_top_tb__DOT__dut__DOT__step)]
                                            : 0U))) 
                          << 0x00000030U));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = ((7U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we)) 
                       | ((VL_LTES_III(32, 3U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step) 
                           & VL_GTS_III(32, 7U, vlSelfRef.sa_top_tb__DOT__dut__DOT__step)) 
                          << 3U));
            } else {
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = (0xffffffffffff0000ULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = (0x0eU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = (0xffffffff0000ffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = (0x0dU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = (0xffff0000ffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = (0x0bU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a 
                    = (0x0000ffffffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld 
                    = (7U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = (0xffffffffffff0000ULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = (0x0eU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = (0xffffffff0000ffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = (0x0dU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = (0xffff0000ffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = (0x0bU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we));
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b 
                    = (0x0000ffffffffffffULL & vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b);
                vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we 
                    = (7U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we));
            }
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[0U] 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist
                [0U];
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld 
                = (1U | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld));
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[1U] 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist
                [1U];
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld 
                = (2U | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld));
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[2U] 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist
                [2U];
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld 
                = (4U | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld));
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[3U] 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist
                [3U];
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld 
                = (8U | (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld));
            __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v8 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[0U];
            __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v8 = 1U;
            __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v9 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[1U];
            __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v9 = 1U;
            __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v10 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[2U];
            vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx 
                = (vlSelfRef.sa_top_tb__DOT__dut__DOT__step 
                   - (IData)(3U));
            __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v11 
                = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[3U];
            __VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v11 = 1U;
            if ((VL_LTES_III(32, 0U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx) 
                 & VL_GTS_III(32, 4U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx))) {
                __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v32 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[0U];
                __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v32 
                    = (3U & vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx);
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v32 = 1U;
            }
            vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx 
                = ((vlSelfRef.sa_top_tb__DOT__dut__DOT__step 
                    - (IData)(3U)) - (IData)(1U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx) 
                 & VL_GTS_III(32, 4U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx))) {
                __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v33 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[1U];
                __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v33 
                    = (3U & vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx);
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v33 = 1U;
            }
            vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx 
                = ((vlSelfRef.sa_top_tb__DOT__dut__DOT__step 
                    - (IData)(3U)) - (IData)(2U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx) 
                 & VL_GTS_III(32, 4U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx))) {
                __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v34 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[2U];
                __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v34 
                    = (3U & vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx);
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v34 = 1U;
            }
            vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx 
                = ((vlSelfRef.sa_top_tb__DOT__dut__DOT__step 
                    - (IData)(3U)) - (IData)(3U));
            if ((VL_LTES_III(32, 0U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx) 
                 & VL_GTS_III(32, 4U, vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx))) {
                __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v35 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_o_c[3U];
                __VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v35 
                    = (3U & vlSelfRef.sa_top_tb__DOT__dut__DOT__unnamedblk13__DOT__unnamedblk14__DOT__col_idx);
                __VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v35 = 1U;
            }
            if ((9U == vlSelfRef.sa_top_tb__DOT__dut__DOT__step)) {
                __VdlyVal__sa_top_tb__DOT__matrix_c__v16 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [0U][0U];
                __VdlySet__sa_top_tb__DOT__matrix_c__v16 = 1U;
                vlSelfRef.sa_top_tb__DOT__done = 1U;
                __Vdly__sa_top_tb__DOT__dut__DOT__state = 2U;
                __VdlyVal__sa_top_tb__DOT__matrix_c__v17 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [0U][1U];
                __VdlySet__sa_top_tb__DOT__matrix_c__v17 = 1U;
                __VdlyVal__sa_top_tb__DOT__matrix_c__v18 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [0U][2U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v19 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [0U][3U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v20 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [1U][0U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v21 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [1U][1U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v22 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [1U][2U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v23 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [1U][3U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v24 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [2U][0U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v25 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [2U][1U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v26 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [2U][2U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v27 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [2U][3U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v28 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [3U][0U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v29 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [3U][1U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v30 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [3U][2U];
                __VdlyVal__sa_top_tb__DOT__matrix_c__v31 
                    = vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg
                    [3U][3U];
            } else {
                __Vdly__sa_top_tb__DOT__dut__DOT__step 
                    = ((IData)(1U) + vlSelfRef.sa_top_tb__DOT__dut__DOT__step);
            }
        } else if ((2U == (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__state))) {
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a_vld = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b_we = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c_vld = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_a = 0ULL;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_b = 0ULL;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[0U] = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[1U] = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[2U] = 0U;
            vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_i_c[3U] = 0U;
            vlSelfRef.sa_top_tb__DOT__done = 1U;
            if (vlSelfRef.sa_top_tb__DOT__dut__DOT__start_edge) {
                __Vdly__sa_top_tb__DOT__dut__DOT__state = 0U;
            }
        } else {
            __Vdly__sa_top_tb__DOT__dut__DOT__state = 0U;
        }
    }
    vlSelfRef.sa_top_tb__DOT__dut__DOT__state = __Vdly__sa_top_tb__DOT__dut__DOT__state;
    vlSelfRef.sa_top_tb__DOT__dut__DOT__step = __Vdly__sa_top_tb__DOT__dut__DOT__step;
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
    if (__VdlySet__sa_top_tb__DOT__matrix_c__v0) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][6U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v28) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v28;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v28;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v17) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v29;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v29;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v19) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v30;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v30;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v8) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[0U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v8;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v9) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v9;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v10;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__c_hist__v11) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__c_hist[3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__c_hist__v11;
    }
    if (__VdlySet__sa_top_tb__DOT__matrix_c__v16) {
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][0U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v16;
    }
    if (__VdlySet__sa_top_tb__DOT__matrix_c__v17) {
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][1U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v17;
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][2U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v18;
        vlSelfRef.sa_top_tb__DOT__matrix_c[0U][3U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v19;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][0U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v20;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][1U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v21;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][2U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v22;
        vlSelfRef.sa_top_tb__DOT__matrix_c[1U][3U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v23;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][0U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v24;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][1U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v25;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][2U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v26;
        vlSelfRef.sa_top_tb__DOT__matrix_c[2U][3U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v27;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][0U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v28;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][1U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v29;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][2U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v30;
        vlSelfRef.sa_top_tb__DOT__matrix_c[3U][3U] 
            = __VdlyVal__sa_top_tb__DOT__matrix_c__v31;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v21) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v31;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[0U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v31;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][4U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[0U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][0U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v27) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v36;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][1U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v36;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v29) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v37;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v37;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v31) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][3U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v38;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v38;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v32) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[0U][__VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v32] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v32;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v33) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[1U][__VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v33] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v33;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v34) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[2U][__VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v34] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v34;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__result_reg__v35) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__result_reg[3U][__VdlyDim0__sa_top_tb__DOT__dut__DOT__result_reg__v35] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__result_reg__v35;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v39) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][4U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v39;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[1U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][4U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v39;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][5U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[1U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][1U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v44) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v44;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][2U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v44;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v45) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v45;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v45;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v46) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][4U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v46;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][4U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v46;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v47) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][5U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v47;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[2U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][2U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][5U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v47;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[2U][6U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][0U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][1U] = 0U;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][2U] = 0U;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v52) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v52;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][3U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v52;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v53) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][4U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v53;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][4U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v53;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v54) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][5U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v54;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][5U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v54;
    }
    if (__VdlySet__sa_top_tb__DOT__dut__DOT__row_matrix__v55) {
        vlSelfRef.sa_top_tb__DOT__dut__DOT__row_matrix[3U][6U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__row_matrix__v55;
        vlSelfRef.sa_top_tb__DOT__dut__DOT__col_matrix[3U][6U] 
            = __VdlyVal__sa_top_tb__DOT__dut__DOT__col_matrix__v55;
    }
}

void Vsa_top_tb___024root___eval_nba(Vsa_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root___eval_nba\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsa_top_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsa_top_tb___024root___act_comb__TOP__0(vlSelf);
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
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hc3b5157f__0.commit(
                                                   "@( sa_top_tb.done)");
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
        vlSelfRef.__VtrigSched_hc3b5157f__0.resume(
                                                   "@( sa_top_tb.done)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
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
            VL_FATAL_MT("tb/sa_dpi_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsa_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/sa_dpi_tb.sv", 3, "", "Active region did not converge after 100 tries");
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
