// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_dpi_tb.h for the primary calling header

#include "Vsa_dpi_tb__pch.h"

extern "C" void matmul_ref(int size, const svOpenArrayHandle a_flat, const svOpenArrayHandle b_flat, const svOpenArrayHandle c_flat);

void Vsa_dpi_tb___024root____Vdpiimwrap_sa_dpi_tb__DOT__matmul_ref__Vdpioc2_TOP(IData/*31:0*/ size, const VlUnpacked<IData/*31:0*/, 16> &a_flat, const VlUnpacked<IData/*31:0*/, 16> &b_flat, VlUnpacked<IData/*31:0*/, 16> &c_flat) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root____Vdpiimwrap_sa_dpi_tb__DOT__matmul_ref__Vdpioc2_TOP\n"); );
    // Body
    int size__Vcvt;
    size__Vcvt = size;
    static const int a_flat__Vopenprops__ulims[2] = {0, 15};
    static const int a_flat__Vopenprops__plims[2] = {31, 0};
    static const VerilatedVarProps a_flat__Vopenprops(VLVT_UINT32, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Unpacked{}, 1, a_flat__Vopenprops__ulims, VerilatedVarProps::Packed{}, 1, a_flat__Vopenprops__plims);
    VerilatedDpiOpenVar a_flat__Vopenarray (&a_flat__Vopenprops, &a_flat);
    static const int b_flat__Vopenprops__ulims[2] = {0, 15};
    static const int b_flat__Vopenprops__plims[2] = {31, 0};
    static const VerilatedVarProps b_flat__Vopenprops(VLVT_UINT32, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Unpacked{}, 1, b_flat__Vopenprops__ulims, VerilatedVarProps::Packed{}, 1, b_flat__Vopenprops__plims);
    VerilatedDpiOpenVar b_flat__Vopenarray (&b_flat__Vopenprops, &b_flat);
    static const int c_flat__Vopenprops__ulims[2] = {0, 15};
    static const int c_flat__Vopenprops__plims[2] = {31, 0};
    static const VerilatedVarProps c_flat__Vopenprops(VLVT_UINT32, VLVD_OUT|VLVF_DPI_CLAY, VerilatedVarProps::Unpacked{}, 1, c_flat__Vopenprops__ulims, VerilatedVarProps::Packed{}, 1, c_flat__Vopenprops__plims);
    VerilatedDpiOpenVar c_flat__Vopenarray (&c_flat__Vopenprops, &c_flat);
    matmul_ref(size__Vcvt, &a_flat__Vopenarray, &b_flat__Vopenarray, &c_flat__Vopenarray);
}

VlCoroutine Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_dpi_tb___024root* vlSelf);
VlCoroutine Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_dpi_tb___024root* vlSelf);

void Vsa_dpi_tb___024root___eval_initial(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_initial\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ sa_dpi_tb__DOT__unnamedblk5__DOT__errors;
    sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 0;
    IData/*31:0*/ sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0;
    sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k;
    sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k = 0;
    IData/*31:0*/ sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk11__DOT__f;
    sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk11__DOT__f = 0;
    VlUnpacked<IData/*31:0*/, 16> __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k;
    __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k = 0;
    IData/*31:0*/ __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r;
    __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 0;
    IData/*31:0*/ __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c;
    __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 0;
    // Body
    vlSelfRef.sa_dpi_tb__DOT__i_a = 0ULL;
    vlSelfRef.sa_dpi_tb__DOT__i_a_vld = 0U;
    vlSelfRef.sa_dpi_tb__DOT__i_b = 0ULL;
    vlSelfRef.sa_dpi_tb__DOT__i_b_we = 0U;
    vlSelfRef.sa_dpi_tb__DOT__i_c[0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__i_c[1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__i_c[2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__i_c[3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__i_c_vld = 0x0fU;
    sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h268bff67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_dpi_tb.clk)", 
                                                             "tb/sa_dpi_tb.sv", 
                                                             118);
        sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sa_dpi_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h268bff67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sa_dpi_tb.clk)", 
                                                         "tb/sa_dpi_tb.sv", 
                                                         120);
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[0U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[0U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [0U][0U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [0U][0U];
    vlSelfRef.sa_dpi_tb__DOT__collected[0U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[0U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[0U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[1U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [0U][1U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[1U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [0U][1U];
    vlSelfRef.sa_dpi_tb__DOT__collected[0U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[0U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[0U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[2U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [0U][2U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[2U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [0U][2U];
    vlSelfRef.sa_dpi_tb__DOT__collected[0U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[0U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[0U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[3U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [0U][3U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[3U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [0U][3U];
    vlSelfRef.sa_dpi_tb__DOT__collected[0U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[1U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[1U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[4U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [1U][0U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[4U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [1U][0U];
    vlSelfRef.sa_dpi_tb__DOT__collected[1U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[1U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[1U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[5U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [1U][1U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[5U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [1U][1U];
    vlSelfRef.sa_dpi_tb__DOT__collected[1U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[1U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[1U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[6U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [1U][2U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[6U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [1U][2U];
    vlSelfRef.sa_dpi_tb__DOT__collected[1U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[1U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[1U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[7U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [1U][3U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[7U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [1U][3U];
    vlSelfRef.sa_dpi_tb__DOT__collected[1U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[2U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[2U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[8U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [2U][0U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[8U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [2U][0U];
    vlSelfRef.sa_dpi_tb__DOT__collected[2U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[2U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[2U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[9U] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [2U][1U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[9U] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [2U][1U];
    vlSelfRef.sa_dpi_tb__DOT__collected[2U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[2U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[2U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0x0aU] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [2U][2U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0x0aU] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [2U][2U];
    vlSelfRef.sa_dpi_tb__DOT__collected[2U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[2U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[2U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0x0bU] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [2U][3U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0x0bU] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [2U][3U];
    vlSelfRef.sa_dpi_tb__DOT__collected[2U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[3U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[3U][0U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0x0cU] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [3U][0U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0x0cU] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [3U][0U];
    vlSelfRef.sa_dpi_tb__DOT__collected[3U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][0U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[3U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[3U][1U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0x0dU] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [3U][1U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0x0dU] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [3U][1U];
    vlSelfRef.sa_dpi_tb__DOT__collected[3U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][1U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[3U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[3U][2U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0x0eU] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [3U][2U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0x0eU] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [3U][2U];
    vlSelfRef.sa_dpi_tb__DOT__collected[3U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][2U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__a_matrix[3U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__b_matrix[3U][3U] = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
    vlSelfRef.sa_dpi_tb__DOT__a_flat[0x0fU] = vlSelfRef.sa_dpi_tb__DOT__a_matrix
        [3U][3U];
    vlSelfRef.sa_dpi_tb__DOT__b_flat[0x0fU] = vlSelfRef.sa_dpi_tb__DOT__b_matrix
        [3U][3U];
    vlSelfRef.sa_dpi_tb__DOT__collected[3U][3U] = 0U;
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][3U] = 0U;
    Vsa_dpi_tb___024root____Vdpiimwrap_sa_dpi_tb__DOT__matmul_ref__Vdpioc2_TOP(4U, vlSelfRef.sa_dpi_tb__DOT__a_flat, vlSelfRef.sa_dpi_tb__DOT__b_flat, __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat);
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[1U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [1U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[2U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [2U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[3U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [3U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[4U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [4U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[5U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [5U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[6U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [6U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[7U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [7U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[8U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [8U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[9U] = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [9U];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0x0000000aU] 
        = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0x0000000aU];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0x0000000bU] 
        = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0x0000000bU];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0x0000000cU] 
        = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0x0000000cU];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0x0000000dU] 
        = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0x0000000dU];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0x0000000eU] 
        = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0x0000000eU];
    vlSelfRef.sa_dpi_tb__DOT__ref_flat[0x0000000fU] 
        = __Vtask_sa_dpi_tb__DOT__matmul_ref__Vdpioc2__1__c_flat
        [0x0000000fU];
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][0U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0U];
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][1U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [1U];
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][2U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [2U];
    vlSelfRef.sa_dpi_tb__DOT__expected[0U][3U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [3U];
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][0U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [4U];
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][1U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [5U];
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][2U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [6U];
    vlSelfRef.sa_dpi_tb__DOT__expected[1U][3U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [7U];
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][0U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [8U];
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][1U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [9U];
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][2U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0x0aU];
    vlSelfRef.sa_dpi_tb__DOT__expected[2U][3U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0x0bU];
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][0U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0x0cU];
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][1U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0x0dU];
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][2U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0x0eU];
    vlSelfRef.sa_dpi_tb__DOT__expected[3U][3U] = vlSelfRef.sa_dpi_tb__DOT__ref_flat
        [0x0fU];
    sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k = 0U;
    while (VL_GTS_III(32, 4U, sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k)) {
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k 
            = sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k;
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 0;
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 0;
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_a = ((0xffffffffffff0000ULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_a) 
                                         | (IData)((IData)(
                                                           (0x0000ffffU 
                                                            & vlSelfRef.sa_dpi_tb__DOT__a_matrix
                                                            [0U]
                                                            [
                                                            (3U 
                                                             & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]))));
        vlSelfRef.sa_dpi_tb__DOT__i_a_vld = (1U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld));
        vlSelfRef.sa_dpi_tb__DOT__i_c[0U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c_vld = (1U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 1U;
        vlSelfRef.sa_dpi_tb__DOT__i_a = ((0xffffffff0000ffffULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_a) 
                                         | ((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & vlSelfRef.sa_dpi_tb__DOT__a_matrix
                                                             [1U]
                                                             [
                                                             (3U 
                                                              & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]))) 
                                            << 0x00000010U));
        vlSelfRef.sa_dpi_tb__DOT__i_a_vld = (2U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld));
        vlSelfRef.sa_dpi_tb__DOT__i_c[1U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c_vld = (2U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 2U;
        vlSelfRef.sa_dpi_tb__DOT__i_a = ((0xffff0000ffffffffULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_a) 
                                         | ((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & vlSelfRef.sa_dpi_tb__DOT__a_matrix
                                                             [2U]
                                                             [
                                                             (3U 
                                                              & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]))) 
                                            << 0x00000020U));
        vlSelfRef.sa_dpi_tb__DOT__i_a_vld = (4U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld));
        vlSelfRef.sa_dpi_tb__DOT__i_c[2U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c_vld = (4U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 3U;
        vlSelfRef.sa_dpi_tb__DOT__i_a = ((0x0000ffffffffffffULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_a) 
                                         | ((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & vlSelfRef.sa_dpi_tb__DOT__a_matrix
                                                             [3U]
                                                             [
                                                             (3U 
                                                              & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]))) 
                                            << 0x00000030U));
        vlSelfRef.sa_dpi_tb__DOT__i_a_vld = (8U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld));
        vlSelfRef.sa_dpi_tb__DOT__i_c[3U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c_vld = (8U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk3__DOT__r = 4U;
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_b = ((0xffffffffffff0000ULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_b) 
                                         | (IData)((IData)(
                                                           (0x0000ffffU 
                                                            & vlSelfRef.sa_dpi_tb__DOT__b_matrix
                                                            [
                                                            (3U 
                                                             & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]
                                                            [0U]))));
        vlSelfRef.sa_dpi_tb__DOT__i_b_we = (1U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 1U;
        vlSelfRef.sa_dpi_tb__DOT__i_b = ((0xffffffff0000ffffULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_b) 
                                         | ((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & vlSelfRef.sa_dpi_tb__DOT__b_matrix
                                                             [
                                                             (3U 
                                                              & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]
                                                             [1U]))) 
                                            << 0x00000010U));
        vlSelfRef.sa_dpi_tb__DOT__i_b_we = (2U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 2U;
        vlSelfRef.sa_dpi_tb__DOT__i_b = ((0xffff0000ffffffffULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_b) 
                                         | ((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & vlSelfRef.sa_dpi_tb__DOT__b_matrix
                                                             [
                                                             (3U 
                                                              & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]
                                                             [2U]))) 
                                            << 0x00000020U));
        vlSelfRef.sa_dpi_tb__DOT__i_b_we = (4U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 3U;
        vlSelfRef.sa_dpi_tb__DOT__i_b = ((0x0000ffffffffffffULL 
                                          & vlSelfRef.sa_dpi_tb__DOT__i_b) 
                                         | ((QData)((IData)(
                                                            (0x0000ffffU 
                                                             & vlSelfRef.sa_dpi_tb__DOT__b_matrix
                                                             [
                                                             (3U 
                                                              & __Vtask_sa_dpi_tb__DOT__drive_iteration__2__k)]
                                                             [3U]))) 
                                            << 0x00000030U));
        vlSelfRef.sa_dpi_tb__DOT__i_b_we = (8U | (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we));
        __Vtask_sa_dpi_tb__DOT__drive_iteration__2__unnamedblk4__DOT__c = 4U;
        co_await vlSelfRef.__VtrigSched_h268bff67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_dpi_tb.clk)", 
                                                             "tb/sa_dpi_tb.sv", 
                                                             143);
        sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k 
            = ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk10__DOT__k);
    }
    sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk11__DOT__f = 0U;
    while (VL_GTS_III(32, 0x0000000cU, sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk11__DOT__f)) {
        vlSelfRef.sa_dpi_tb__DOT__i_a = 0ULL;
        vlSelfRef.sa_dpi_tb__DOT__i_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_b = 0ULL;
        vlSelfRef.sa_dpi_tb__DOT__i_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c[0U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c[1U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c[2U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c[3U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__i_c_vld = 0x0fU;
        co_await vlSelfRef.__VtrigSched_h268bff67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sa_dpi_tb.clk)", 
                                                             "tb/sa_dpi_tb.sv", 
                                                             149);
        sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk11__DOT__f 
            = ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__unnamedblk11__DOT__f);
    }
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.sa_dpi_tb__DOT__total_collected)) {
        co_await vlSelfRef.__VtrigSched_h0e88df06__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'h10 <= sa_dpi_tb.total_collected))", 
                                                             "tb/sa_dpi_tb.sv", 
                                                             152);
    }
    sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 0U;
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [0U][0U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [0U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[0][0]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [0U][0U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [0U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [0U][1U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [0U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[0][1]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [0U][1U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [0U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [0U][2U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [0U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[0][2]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [0U][2U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [0U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [0U][3U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [0U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[0][3]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [0U][3U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [0U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [1U][0U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [1U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[1][0]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [1U][0U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [1U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [1U][1U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [1U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[1][1]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [1U][1U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [1U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [1U][2U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [1U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[1][2]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [1U][2U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [1U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [1U][3U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [1U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[1][3]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [1U][3U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [1U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [2U][0U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [2U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[2][0]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [2U][0U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [2U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [2U][1U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [2U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[2][1]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [2U][1U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [2U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [2U][2U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [2U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[2][2]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [2U][2U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [2U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [2U][3U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [2U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[2][3]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [2U][3U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [2U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [3U][0U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [3U][0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[3][0]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [3U][0U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [3U][0U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [3U][1U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [3U][1U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[3][1]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [3U][1U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [3U][1U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [3U][2U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [3U][2U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[3][2]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [3U][2U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [3U][2U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.sa_dpi_tb__DOT__collected
                      [3U][3U] != vlSelfRef.sa_dpi_tb__DOT__expected
                      [3U][3U])))) {
        VL_WRITEF_NX("[%0t] %%Error: sa_dpi_tb.sv:158: Assertion failed in %Nsa_dpi_tb.unnamedblk5.unnamedblk12.unnamedblk13: Mismatch at C[3][3]: got %0d, expected %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.sa_dpi_tb__DOT__collected
                     [3U][3U],32,vlSelfRef.sa_dpi_tb__DOT__expected
                     [3U][3U]);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 158, "");
        sa_dpi_tb__DOT__unnamedblk5__DOT__errors = 
            ((IData)(1U) + sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
    }
    if (VL_LIKELY(((0U == sa_dpi_tb__DOT__unnamedblk5__DOT__errors)))) {
        VL_WRITEF_NX("PASS: systolic array produced correct 4x4 matrix multiply results.\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: sa_dpi_tb.sv:167: Assertion failed in %Nsa_dpi_tb.unnamedblk5: FAIL: systolic array had %0d mismatches\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,sa_dpi_tb__DOT__unnamedblk5__DOT__errors);
        VL_STOP_MT("tb/sa_dpi_tb.sv", 167, "", false);
    }
    VL_FINISH_MT("tb/sa_dpi_tb.sv", 170, "");
}

VlCoroutine Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/sa_dpi_tb.sv", 
                                             19);
        vlSelfRef.sa_dpi_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.sa_dpi_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_dpi_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsa_dpi_tb___024root___eval_triggers__act(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_triggers__act\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h96bf1eda__0;
    __Vtrigprevexpr_h96bf1eda__0 = 0;
    // Body
    __Vtrigprevexpr_h96bf1eda__0 = VL_LTES_III(32, 0x00000010U, vlSelfRef.sa_dpi_tb__DOT__total_collected);
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(__Vtrigprevexpr_h96bf1eda__0) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h96bf1eda__1)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.sa_dpi_tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.sa_dpi_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__clk__0 
        = vlSelfRef.sa_dpi_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sa_dpi_tb__DOT__rst__0 
        = vlSelfRef.sa_dpi_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h96bf1eda__1 = __Vtrigprevexpr_h96bf1eda__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsa_dpi_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsa_dpi_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___trigger_anySet__act\n"); );
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

void Vsa_dpi_tb___024root___nba_sequent__TOP__0(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___nba_sequent__TOP__0\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__sa_dpi_tb__DOT__total_collected;
    __Vdly__sa_dpi_tb__DOT__total_collected = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0;
    SData/*15:0*/ __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0;
    CData/*0:0*/ __VdlySet__sa_dpi_tb__DOT__col_cursor__v0;
    __VdlySet__sa_dpi_tb__DOT__col_cursor__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_dpi_tb__DOT__col_cursor__v1;
    __VdlySet__sa_dpi_tb__DOT__col_cursor__v1 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__collected__v0;
    __VdlyVal__sa_dpi_tb__DOT__collected__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sa_dpi_tb__DOT__collected__v0;
    __VdlyDim0__sa_dpi_tb__DOT__collected__v0 = 0;
    CData/*0:0*/ __VdlySet__sa_dpi_tb__DOT__collected__v0;
    __VdlySet__sa_dpi_tb__DOT__collected__v0 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__col_cursor__v4;
    __VdlyVal__sa_dpi_tb__DOT__col_cursor__v4 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__collected__v1;
    __VdlyVal__sa_dpi_tb__DOT__collected__v1 = 0;
    CData/*1:0*/ __VdlyDim0__sa_dpi_tb__DOT__collected__v1;
    __VdlyDim0__sa_dpi_tb__DOT__collected__v1 = 0;
    CData/*0:0*/ __VdlySet__sa_dpi_tb__DOT__collected__v1;
    __VdlySet__sa_dpi_tb__DOT__collected__v1 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__col_cursor__v5;
    __VdlyVal__sa_dpi_tb__DOT__col_cursor__v5 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__collected__v2;
    __VdlyVal__sa_dpi_tb__DOT__collected__v2 = 0;
    CData/*1:0*/ __VdlyDim0__sa_dpi_tb__DOT__collected__v2;
    __VdlyDim0__sa_dpi_tb__DOT__collected__v2 = 0;
    CData/*0:0*/ __VdlySet__sa_dpi_tb__DOT__collected__v2;
    __VdlySet__sa_dpi_tb__DOT__collected__v2 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__col_cursor__v6;
    __VdlyVal__sa_dpi_tb__DOT__col_cursor__v6 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__collected__v3;
    __VdlyVal__sa_dpi_tb__DOT__collected__v3 = 0;
    CData/*1:0*/ __VdlyDim0__sa_dpi_tb__DOT__collected__v3;
    __VdlyDim0__sa_dpi_tb__DOT__collected__v3 = 0;
    CData/*0:0*/ __VdlySet__sa_dpi_tb__DOT__collected__v3;
    __VdlySet__sa_dpi_tb__DOT__collected__v3 = 0;
    IData/*31:0*/ __VdlyVal__sa_dpi_tb__DOT__col_cursor__v7;
    __VdlyVal__sa_dpi_tb__DOT__col_cursor__v7 = 0;
    // Body
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__total_collected = vlSelfRef.sa_dpi_tb__DOT__total_collected;
    __VdlySet__sa_dpi_tb__DOT__col_cursor__v0 = 0U;
    __VdlySet__sa_dpi_tb__DOT__col_cursor__v1 = 0U;
    __VdlySet__sa_dpi_tb__DOT__collected__v0 = 0U;
    __VdlySet__sa_dpi_tb__DOT__collected__v1 = 0U;
    __VdlySet__sa_dpi_tb__DOT__collected__v2 = 0U;
    __VdlySet__sa_dpi_tb__DOT__collected__v3 = 0U;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __VdlySet__sa_dpi_tb__DOT__col_cursor__v0 = 1U;
        __Vdly__sa_dpi_tb__DOT__total_collected = 0U;
        __VdlySet__sa_dpi_tb__DOT__col_cursor__v1 = 1U;
    } else {
        if (((IData)(vlSelfRef.sa_dpi_tb__DOT__o_c_vld) 
             & VL_GTS_III(32, 4U, vlSelfRef.sa_dpi_tb__DOT__col_cursor
                          [0U]))) {
            __Vdly__sa_dpi_tb__DOT__total_collected 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__total_collected);
            __VdlyVal__sa_dpi_tb__DOT__collected__v0 
                = vlSelfRef.sa_dpi_tb__DOT__o_c[0U];
            __VdlyDim0__sa_dpi_tb__DOT__collected__v0 
                = (3U & vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [0U]);
            __VdlySet__sa_dpi_tb__DOT__collected__v0 = 1U;
            __VdlyVal__sa_dpi_tb__DOT__col_cursor__v4 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [0U]);
        }
        if ((((IData)(vlSelfRef.sa_dpi_tb__DOT__o_c_vld) 
              >> 1U) & VL_GTS_III(32, 4U, vlSelfRef.sa_dpi_tb__DOT__col_cursor
                                  [1U]))) {
            __Vdly__sa_dpi_tb__DOT__total_collected 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__total_collected);
            __VdlyVal__sa_dpi_tb__DOT__collected__v1 
                = vlSelfRef.sa_dpi_tb__DOT__o_c[1U];
            __VdlyDim0__sa_dpi_tb__DOT__collected__v1 
                = (3U & vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [1U]);
            __VdlySet__sa_dpi_tb__DOT__collected__v1 = 1U;
            __VdlyVal__sa_dpi_tb__DOT__col_cursor__v5 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [1U]);
        }
        if ((((IData)(vlSelfRef.sa_dpi_tb__DOT__o_c_vld) 
              >> 2U) & VL_GTS_III(32, 4U, vlSelfRef.sa_dpi_tb__DOT__col_cursor
                                  [2U]))) {
            __Vdly__sa_dpi_tb__DOT__total_collected 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__total_collected);
            __VdlyVal__sa_dpi_tb__DOT__collected__v2 
                = vlSelfRef.sa_dpi_tb__DOT__o_c[2U];
            __VdlyDim0__sa_dpi_tb__DOT__collected__v2 
                = (3U & vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [2U]);
            __VdlySet__sa_dpi_tb__DOT__collected__v2 = 1U;
            __VdlyVal__sa_dpi_tb__DOT__col_cursor__v6 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [2U]);
        }
        if ((((IData)(vlSelfRef.sa_dpi_tb__DOT__o_c_vld) 
              >> 3U) & VL_GTS_III(32, 4U, vlSelfRef.sa_dpi_tb__DOT__col_cursor
                                  [3U]))) {
            __Vdly__sa_dpi_tb__DOT__total_collected 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__total_collected);
            __VdlyVal__sa_dpi_tb__DOT__collected__v3 
                = vlSelfRef.sa_dpi_tb__DOT__o_c[3U];
            __VdlyDim0__sa_dpi_tb__DOT__collected__v3 
                = (3U & vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [3U]);
            __VdlySet__sa_dpi_tb__DOT__collected__v3 = 1U;
            __VdlyVal__sa_dpi_tb__DOT__col_cursor__v7 
                = ((IData)(1U) + vlSelfRef.sa_dpi_tb__DOT__col_cursor
                   [3U]);
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[3].gen_cols[3].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__total_collected = __Vdly__sa_dpi_tb__DOT__total_collected;
    if (__VdlySet__sa_dpi_tb__DOT__col_cursor__v0) {
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[0U] = 0U;
    }
    if (__VdlySet__sa_dpi_tb__DOT__col_cursor__v1) {
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[1U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[2U] = 0U;
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[3U] = 0U;
    }
    if (__VdlySet__sa_dpi_tb__DOT__collected__v0) {
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[0U] = __VdlyVal__sa_dpi_tb__DOT__col_cursor__v4;
        vlSelfRef.sa_dpi_tb__DOT__collected[0U][__VdlyDim0__sa_dpi_tb__DOT__collected__v0] 
            = __VdlyVal__sa_dpi_tb__DOT__collected__v0;
    }
    if (__VdlySet__sa_dpi_tb__DOT__collected__v1) {
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[1U] = __VdlyVal__sa_dpi_tb__DOT__col_cursor__v5;
        vlSelfRef.sa_dpi_tb__DOT__collected[1U][__VdlyDim0__sa_dpi_tb__DOT__collected__v1] 
            = __VdlyVal__sa_dpi_tb__DOT__collected__v1;
    }
    if (__VdlySet__sa_dpi_tb__DOT__collected__v2) {
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[2U] = __VdlyVal__sa_dpi_tb__DOT__col_cursor__v6;
        vlSelfRef.sa_dpi_tb__DOT__collected[2U][__VdlyDim0__sa_dpi_tb__DOT__collected__v2] 
            = __VdlyVal__sa_dpi_tb__DOT__collected__v2;
    }
    if (__VdlySet__sa_dpi_tb__DOT__collected__v3) {
        vlSelfRef.sa_dpi_tb__DOT__col_cursor[3U] = __VdlyVal__sa_dpi_tb__DOT__col_cursor__v7;
        vlSelfRef.sa_dpi_tb__DOT__collected[3U][__VdlyDim0__sa_dpi_tb__DOT__collected__v3] 
            = __VdlyVal__sa_dpi_tb__DOT__collected__v3;
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[3].gen_cols[2].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[2].gen_cols[3].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[3].gen_cols[1].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[2].gen_cols[2].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[1].gen_cols[3].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                  >> 2U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                               >> 3U)))) 
                                   << 1U) | (3U == 
                                             ((2U & 
                                               ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                >> 2U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                    >> 3U))))))))) {
            if ((0U != (((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                        >> 2U)) | (1U 
                                                   & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                      >> 3U)))) 
                         << 1U) | (3U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                 >> 2U)) 
                                          | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                   >> 3U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[3].gen_cols[0].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                           >> 2U)) 
                                    | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                             >> 3U))));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_a 
                                      >> 0x00000030U)));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
            = (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                     >> 3U));
        if ((3U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                           >> 2U)) | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                            >> 3U))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__i_c[3U] 
                   + ((0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_a 
                                              >> 0x00000030U))) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                  >> 2U)) | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                   >> 3U))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__i_c[3U];
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[2].gen_cols[1].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[0].gen_cols[3].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_b 
                                      >> 0x00000030U)));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_b_we 
            = (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we) 
                     >> 3U));
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if ((8U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we))) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_b 
                                          >> 0x00000030U)));
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[1].gen_cols[2].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__3__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__3__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                  >> 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                               >> 2U)))) 
                                   << 1U) | (3U == 
                                             ((2U & 
                                               ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                >> 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                    >> 2U))))))))) {
            if ((0U != (((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                      >> 2U)))) 
                         << 1U) | (3U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                 >> 1U)) 
                                          | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                   >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[2].gen_cols[0].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                           >> 1U)) 
                                    | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                             >> 2U))));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_a 
                                      >> 0x00000020U)));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
            = (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                     >> 2U));
        if ((3U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                           >> 1U)) | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                            >> 2U))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__i_c[2U] 
                   + ((0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_a 
                                              >> 0x00000020U))) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                  >> 1U)) | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                   >> 2U))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__i_c[2U];
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        }
    }
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
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[0].gen_cols[2].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_b 
                                      >> 0x00000020U)));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_b_we 
            = (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we) 
                     >> 2U));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if ((4U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we))) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_b 
                                          >> 0x00000020U)));
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[1].gen_cols[1].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b;
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__2__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__2__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                               >> 1U)))) 
                                   << 1U) | (3U == 
                                             ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                    >> 1U))))))))) {
            if ((0U != (((1U == ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                                 | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                          >> 1U)))) 
                         << 1U) | (3U == ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                                          | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                                   >> 1U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[1].gen_cols[0].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                                    | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                             >> 1U))));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_a 
                                      >> 0x00000010U)));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
            = (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                     >> 1U));
        if ((3U == ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                    | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                             >> 1U))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__i_c[1U] 
                   + ((0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_a 
                                              >> 0x00000010U))) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld)) 
                           | (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld) 
                                    >> 1U))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__i_c[1U];
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b;
        }
    }
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                                   << 1U) | (3U == 
                                             (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                  << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld))) 
                         << 1U) | (3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                           << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[0].gen_cols[1].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_b 
                                      >> 0x00000010U)));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_b_we 
            = (1U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we) 
                     >> 1U));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_a_vld 
            = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld;
        if ((3U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                     << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                   + ((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == (((IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld) 
                            << 1U) | (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld)))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c;
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if ((2U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we))) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)((vlSelfRef.sa_dpi_tb__DOT__i_b 
                                          >> 0x00000010U)));
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__1__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__1__KET____DOT__u_pe__DOT__b_reg;
    if (vlSelfRef.sa_dpi_tb__DOT__rst) {
        __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c = 0U;
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld)))) 
                                   << 1U) | (3U == 
                                             ((2U & 
                                               ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld))))))))) {
            if ((0U != (((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld)))) 
                         << 1U) | (3U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pe.sv:51: Assertion failed in %Nsa_dpi_tb.dut.gen_rows[0].gen_cols[0].u_pe: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld))));
                    VL_STOP_MT("src/pe.sv", 51, "");
                }
            }
        }
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b 
            = (0x0000ffffU & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_b_we 
            = (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a 
            = (0x0000ffffU & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a));
        vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_a_vld 
            = (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld));
        if ((3U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                           << 1U)) | (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = (vlSelfRef.sa_dpi_tb__DOT__i_c[0U] 
                   + ((0x0000ffffU & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_a)) 
                      * (IData)(vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg)));
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else if ((1U == ((2U & ((IData)(vlSelfRef.sa_dpi_tb__DOT__i_a_vld) 
                                  << 1U)) | (1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_c_vld))))) {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c 
                = vlSelfRef.sa_dpi_tb__DOT__i_c[0U];
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 1U;
        } else {
            vlSelfRef.sa_dpi_tb__DOT__dut__DOT____Vcellout__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__o_c_vld = 0U;
        }
        if ((1U & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b_we))) {
            __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
                = (0x0000ffffU & (IData)(vlSelfRef.sa_dpi_tb__DOT__i_b));
        }
    }
    vlSelfRef.sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg 
        = __Vdly__sa_dpi_tb__DOT__dut__DOT__gen_rows__BRA__0__KET____DOT__gen_cols__BRA__0__KET____DOT__u_pe__DOT__b_reg;
}

void Vsa_dpi_tb___024root___eval_nba(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_nba\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsa_dpi_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vsa_dpi_tb___024root___timing_commit(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___timing_commit\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h268bff67__0.commit(
                                                   "@(posedge sa_dpi_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h0e88df06__0.commit(
                                                   "@( (32'h10 <= sa_dpi_tb.total_collected))");
    }
}

void Vsa_dpi_tb___024root___timing_resume(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___timing_resume\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h268bff67__0.resume(
                                                   "@(posedge sa_dpi_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0e88df06__0.resume(
                                                   "@( (32'h10 <= sa_dpi_tb.total_collected))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsa_dpi_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsa_dpi_tb___024root___eval_phase__act(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_phase__act\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsa_dpi_tb___024root___eval_triggers__act(vlSelf);
    Vsa_dpi_tb___024root___timing_commit(vlSelf);
    Vsa_dpi_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsa_dpi_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsa_dpi_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vsa_dpi_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsa_dpi_tb___024root___eval_phase__nba(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_phase__nba\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsa_dpi_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsa_dpi_tb___024root___eval_nba(vlSelf);
        Vsa_dpi_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsa_dpi_tb___024root___eval(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsa_dpi_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/sa_dpi_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsa_dpi_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/sa_dpi_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsa_dpi_tb___024root___eval_phase__act(vlSelf));
    } while (Vsa_dpi_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsa_dpi_tb___024root___eval_debug_assertions(Vsa_dpi_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_dpi_tb___024root___eval_debug_assertions\n"); );
    Vsa_dpi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
