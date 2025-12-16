// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxis_fifo_tb.h for the primary calling header

#include "Vaxis_fifo_tb__pch.h"

VL_ATTR_COLD void Vaxis_fifo_tb___024root___eval_initial__TOP(Vaxis_fifo_tb___024root* vlSelf);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vaxis_fifo_tb___024root* vlSelf);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vaxis_fifo_tb___024root* vlSelf);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__2(Vaxis_fifo_tb___024root* vlSelf);

void Vaxis_fifo_tb___024root___eval_initial(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaxis_fifo_tb___024root___eval_initial__TOP(vlSelf);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_3__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_3__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_4__sync);
VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_4__sync);

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i;
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.axis_fifo_tb__DOT__test_passed = 1U;
    vlSelfRef.axis_fifo_tb__DOT__error_count = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         403);
    vlSelfRef.axis_fifo_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         405);
    vlSelfRef.axis_fifo_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         407);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    VL_WRITEF_NX("=== Test 1: Idle Cycles ===\n",0);
    vlSelfRef.axis_fifo_tb__DOT__test_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__received_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__test_tlast.clear();
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 0U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbeefU);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 1U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef0U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 2U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef1U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 3U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef2U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 4U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef3U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 5U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef4U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 6U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef5U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 7U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef6U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 8U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef7U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 9U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xdeadbef8U);
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk1__DOT__i = 0x0000000aU;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf, __Vfork_1__sync);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "tb/axis_fifo_tb.sv", 
                                  206);
    if (VL_UNLIKELY(((0x0000000aU != vlSelfRef.axis_fifo_tb__DOT__received_data.size())))) {
        VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:213: Assertion failed in %Naxis_fifo_tb.test_idle_cycles: Test 1 failed: Expected 10 items, got %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.axis_fifo_tb__DOT__received_data.size());
        VL_STOP_MT("tb/axis_fifo_tb.sv", 213, "");
        vlSelfRef.axis_fifo_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
    } else {
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 0U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 0: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 1U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 1: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 2U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 2: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 3U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 3: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 4U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 4: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 5U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 5: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 6U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 6: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 7U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 7: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 8U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 8: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 9U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:218: Assertion failed in %Naxis_fifo_tb.test_idle_cycles.unnamedblk2: Test 1 failed: Data mismatch at index 9: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 218, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__unnamedblk2__DOT__i = 0x0000000aU;
        if (VL_UNLIKELY(((1U & (~ vlSelfRef.axis_fifo_tb__DOT__test_tlast.at(9U)))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:224: Assertion failed in %Naxis_fifo_tb.test_idle_cycles: Test 1 failed: TLAST not set on last item\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 224, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        VL_WRITEF_NX("Test 1 passed: Idle cycles handled correctly\n",0);
    }
    __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             230);
        __Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_axis_fifo_tb__DOT__test_idle_cycles__0__axis_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VL_WRITEF_NX("=== Test 2: Backpressure ===\n",0);
    vlSelfRef.axis_fifo_tb__DOT__test_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__received_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__test_tlast.clear();
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 0U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebabeU);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 1U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebabfU);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 2U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac0U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 3U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac1U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 4U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac2U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 5U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac3U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 6U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac4U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 7U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac5U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 8U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac6U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 9U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac7U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 0x0000000aU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac8U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 0x0000000bU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xcafebac9U);
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk3__DOT__i = 0x0000000cU;
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(2U, nullptr);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(vlSelf, __Vfork_2__sync);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(vlSelf, __Vfork_2__sync);
    co_await __Vfork_2__sync.join(nullptr, "tb/axis_fifo_tb.sv", 
                                  246);
    if (VL_UNLIKELY(((0x0000000cU != vlSelfRef.axis_fifo_tb__DOT__received_data.size())))) {
        VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:253: Assertion failed in %Naxis_fifo_tb.test_backpressure: Test 2 failed: Expected 12 items, got %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.axis_fifo_tb__DOT__received_data.size());
        VL_STOP_MT("tb/axis_fifo_tb.sv", 253, "");
        vlSelfRef.axis_fifo_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
    } else {
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 0U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 0: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 1U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 1: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 2U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 2: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 3U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 3: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 4U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 4: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 5U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 5: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 6U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 6: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 7U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 7: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 8U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 8: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 9U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 9: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 0x0000000aU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000aU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000aU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 10: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000aU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000aU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 0x0000000bU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000bU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000bU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:258: Assertion failed in %Naxis_fifo_tb.test_backpressure.unnamedblk4: Test 2 failed: Data mismatch at index 11: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000bU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000bU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 258, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__unnamedblk4__DOT__i = 0x0000000cU;
        if (VL_UNLIKELY(((1U & (~ vlSelfRef.axis_fifo_tb__DOT__test_tlast.at(0x0000000bU)))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:264: Assertion failed in %Naxis_fifo_tb.test_backpressure: Test 2 failed: TLAST not set on last item\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 264, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        VL_WRITEF_NX("Test 2 passed: Backpressure handled correctly\n",0);
    }
    __Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             270);
        __Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_axis_fifo_tb__DOT__test_backpressure__3__axis_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    VL_WRITEF_NX("=== Test 3: Idle Cycles + Backpressure ===\n",0);
    vlSelfRef.axis_fifo_tb__DOT__test_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__received_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__test_tlast.clear();
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345678U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 1U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345679U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 2U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x1234567aU);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 3U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x1234567bU);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 4U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x1234567cU);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 5U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x1234567dU);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 6U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x1234567eU);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 7U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x1234567fU);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 8U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345680U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 9U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345681U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0x0000000aU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345682U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0x0000000bU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345683U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0x0000000cU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345684U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0x0000000dU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345685U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0x0000000eU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0x12345686U);
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk5__DOT__i = 0x0000000fU;
    VlForkSync __Vfork_3__sync;
    __Vfork_3__sync.init(2U, nullptr);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__0(vlSelf, __Vfork_3__sync);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__1(vlSelf, __Vfork_3__sync);
    co_await __Vfork_3__sync.join(nullptr, "tb/axis_fifo_tb.sv", 
                                  286);
    if (VL_UNLIKELY(((0x0000000fU != vlSelfRef.axis_fifo_tb__DOT__received_data.size())))) {
        VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:293: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure: Test 3 failed: Expected 15 items, got %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.axis_fifo_tb__DOT__received_data.size());
        VL_STOP_MT("tb/axis_fifo_tb.sv", 293, "");
        vlSelfRef.axis_fifo_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
    } else {
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 0: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 1U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 1: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 2U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 2: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 3U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 3: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 4U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 4: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 5U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 5: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 6U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 6: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 7U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 7: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 8U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 8: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 9U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 9: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0x0000000aU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000aU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000aU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 10: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000aU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000aU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0x0000000bU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000bU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000bU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 11: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000bU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000bU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0x0000000cU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000cU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000cU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 12: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000cU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000cU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0x0000000dU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000dU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000dU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 13: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000dU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000dU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0x0000000eU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000eU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000eU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:298: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure.unnamedblk6: Test 3 failed: Data mismatch at index 14: expected %x, got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000eU),
                         32,vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000eU));
            VL_STOP_MT("tb/axis_fifo_tb.sv", 298, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__unnamedblk6__DOT__i = 0x0000000fU;
        if (VL_UNLIKELY(((1U & (~ vlSelfRef.axis_fifo_tb__DOT__test_tlast.at(0x0000000eU)))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:304: Assertion failed in %Naxis_fifo_tb.test_idle_and_backpressure: Test 3 failed: TLAST not set on last item\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 304, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        VL_WRITEF_NX("Test 3 passed: Idle cycles and backpressure handled correctly\n",0);
    }
    __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             310);
        __Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_axis_fifo_tb__DOT__test_idle_and_backpressure__6__axis_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0;
    vlSelf->__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent = 0;
    vlSelf->__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18274590883324314763ull);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0;
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    VL_WRITEF_NX("=== Test 4: FIFO Full Condition ===\n",0);
    vlSelfRef.axis_fifo_tb__DOT__test_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__received_data.clear();
    vlSelfRef.axis_fifo_tb__DOT__test_tlast.clear();
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba98U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 1U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba99U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 2U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba9aU);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 3U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba9bU);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 4U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba9cU);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 5U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba9dU);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 6U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba9eU);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 7U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcba9fU);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 8U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcbaa0U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 9U;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcbaa1U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0x0000000aU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcbaa2U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0x0000000bU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcbaa3U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0x0000000cU;
    vlSelfRef.axis_fifo_tb__DOT__test_data.push_back(0xfedcbaa4U);
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk7__DOT__i = 0x0000000dU;
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
    VL_WRITEF_NX("[test_fifo_full] Starting: DEPTH=8, sending 13 items\n",0);
    VlForkSync __Vfork_4__sync;
    __Vfork_4__sync.init(2U, nullptr);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__0(vlSelf, __Vfork_4__sync);
    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__1(vlSelf, __Vfork_4__sync);
    co_await __Vfork_4__sync.join(nullptr, "tb/axis_fifo_tb.sv", 
                                  330);
    if (VL_UNLIKELY(((0x0000000dU != vlSelfRef.axis_fifo_tb__DOT__received_data.size())))) {
        VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:375: Assertion failed in %Naxis_fifo_tb.test_fifo_full: Test 4 failed: Expected 13 items, got %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.axis_fifo_tb__DOT__received_data.size());
        VL_STOP_MT("tb/axis_fifo_tb.sv", 375, "");
        vlSelfRef.axis_fifo_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
    } else {
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 1U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(1U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 1\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 2U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(2U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(2U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 3U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(3U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(3U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 4U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(4U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(4U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 4\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 5U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(5U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(5U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 5\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 6U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(6U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(6U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 6\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 7U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(7U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(7U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 7\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 8U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(8U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(8U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 8\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 9U;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(9U) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(9U))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 9\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0x0000000aU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000aU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000aU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 10\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0x0000000bU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000bU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000bU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 11\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0x0000000cU;
        if (VL_UNLIKELY(((vlSelfRef.axis_fifo_tb__DOT__received_data.at(0x0000000cU) 
                          != vlSelfRef.axis_fifo_tb__DOT__test_data.at(0x0000000cU))))) {
            VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:380: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk9: Test 4 failed: Data mismatch at index 12\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/axis_fifo_tb.sv", 380, "");
            vlSelfRef.axis_fifo_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
        }
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk9__DOT__i = 0x0000000dU;
        VL_WRITEF_NX("Test 4 passed: FIFO full condition handled correctly\n",0);
    }
    __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             387);
        __Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    if ((0U == vlSelfRef.axis_fifo_tb__DOT__error_count)) {
        VL_WRITEF_NX("\n=== ALL TESTS PASSED ===\n",0);
        vlSelfRef.axis_fifo_tb__DOT__test_passed = 1U;
    } else {
        VL_WRITEF_NX("\n=== TESTS FAILED: %0d errors ===\n",0,
                     32,vlSelfRef.axis_fifo_tb__DOT__error_count);
        vlSelfRef.axis_fifo_tb__DOT__test_passed = 0U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "tb/axis_fifo_tb.sv", 
                                         424);
    VL_FINISH_MT("tb/axis_fifo_tb.sv", 424, "");
    co_return;
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__1\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__10__max_cycles;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__max_cycles = 0;
    // Body
    VL_WRITEF_NX("[test_fifo_full] Waiting 18 cycles before reading\n",0);
    vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000012U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             366);
        vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__axis_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("[test_fifo_full] Starting to read\n",0);
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items = 0x0000000dU;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received = 0;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received = 0U;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles = 0;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles = 0U;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__max_cycles = 0;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__10__max_cycles = 0x00002710U;
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
    VL_WRITEF_NX("[receive_continuous] Starting to receive %0d items\n",0,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items);
    {
        while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received, __Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items)) {
            co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge axis_fifo_tb.clk)", 
                                                                 "tb/axis_fifo_tb.sv", 
                                                                 165);
            __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles 
                = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles);
            if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles, __Vtask_axis_fifo_tb__DOT__receive_continuous__10__max_cycles)))) {
                VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:168: Assertion failed in %Naxis_fifo_tb.receive_continuous: [receive_continuous] TIMEOUT: Received only %0d/%0d items after %0d cycles\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received,
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items,
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles);
                VL_STOP_MT("tb/axis_fifo_tb.sv", 168, "");
                VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:169: Assertion failed in %Naxis_fifo_tb.receive_continuous: [receive_continuous] m_axis_tvalid=%b, m_axis_tready=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(
                                                   (0U 
                                                    != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                                   & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             1,(IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready));
                VL_STOP_MT("tb/axis_fifo_tb.sv", 169, "");
                goto __Vlabel0;
            }
            if ((((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                  & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))) 
                 & (IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready))) {
                vlSelfRef.axis_fifo_tb__DOT__received_data.push_back((IData)(
                                                                             vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                             [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr]));
                vlSelfRef.axis_fifo_tb__DOT__test_tlast.push_back(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                              [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr] 
                                                                              >> 0x00000020U))));
                __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received 
                    = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received);
                if (VL_UNLIKELY((((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__10__received, (IData)(5U))) 
                                  | (__Vtask_axis_fifo_tb__DOT__receive_continuous__10__received 
                                     == __Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items))))) {
                    VL_WRITEF_NX("[receive_continuous] Received %0d/%0d items\n",0,
                                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__received,
                                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items);
                }
            } else if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles, (IData)(0x000003e8U)))))) {
                VL_WRITEF_NX("[receive_continuous] Waiting: received=%0d, m_axis_tvalid=%b, m_axis_tready=%b, cycles=%0d\n[receive_continuous] FIFO state: s_axis_tready=%b, m_axis_tvalid=%b\n",0,
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__received,
                             1,((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             1,(IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready),
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles,
                             1,((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             1,((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))));
            }
        }
        __Vlabel0: ;
    }
    VL_WRITEF_NX("[receive_continuous] Finished: received %0d/%0d items in %0d cycles\n",0,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__received,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__num_items,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__10__cycles);
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         189);
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
    __Vfork_4__sync.done("tb/axis_fifo_tb.sv", 364);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_4__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent = 0U;
    vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    while (VL_GTS_III(32, 0x0000000dU, vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             336);
        vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles 
            = ((IData)(1U) + vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles);
        if (((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
             & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))) {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata 
                = vlSelfRef.axis_fifo_tb__DOT__test_data.at(vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent);
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast 
                = (0x0000000cU == vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent);
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 1U;
            vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent 
                = ((IData)(1U) + vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent);
            if (VL_UNLIKELY((((0U == VL_MODDIVS_III(32, vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent, (IData)(3U))) 
                              | (0x0000000dU == vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent))))) {
                VL_WRITEF_NX("[test_fifo_full] Sent %0d/13 items, s_axis_tready=%b\n",0,
                             32,vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent,
                             1,((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))));
            }
        } else {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
            if (VL_LTES_III(32, 8U, vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent)) {
                if (VL_UNLIKELY((((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                  & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:351: Assertion failed in %Naxis_fifo_tb.test_fifo_full.unnamedblk8: Test 4 failed: s_axis_tready should be 0 when FIFO is full\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("tb/axis_fifo_tb.sv", 351, "");
                    vlSelfRef.axis_fifo_tb__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.axis_fifo_tb__DOT__error_count);
                }
            }
            if (VL_UNLIKELY((((0U == VL_MODDIVS_III(32, vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles, (IData)(0x00000064U))) 
                              & VL_LTS_III(32, 0U, vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles))))) {
                VL_WRITEF_NX("[test_fifo_full] Waiting to send: sent=%0d, s_axis_tready=%b, cycles=%0d\n",0,
                             32,vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent,
                             1,((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             32,vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles);
            }
        }
    }
    VL_WRITEF_NX("[test_fifo_full] Finished sending: sent %0d items in %0d cycles\n",0,
                 32,vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__sent,
                 32,vlSelfRef.__Vtask_axis_fifo_tb__DOT__test_fifo_full__9__unnamedblk8__DOT__cycles);
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    __Vfork_4__sync.done("tb/axis_fifo_tb.sv", 331);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__1\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__num_items;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_cycles;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_cycles = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count = 0;
    // Body
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_cycles = 2U;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__num_items = 0x0000000fU;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received = 0;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received = 0U;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count = 0;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count = 0U;
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
    while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__num_items)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             104);
        if (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count)) {
            vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
            __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count 
                = (__Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count 
                   - (IData)(1U));
        } else {
            vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
            if ((((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                  & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))) 
                 & (IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready))) {
                vlSelfRef.axis_fifo_tb__DOT__received_data.push_back((IData)(
                                                                             vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                             [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr]));
                vlSelfRef.axis_fifo_tb__DOT__test_tlast.push_back(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                              [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr] 
                                                                              >> 0x00000020U))));
                __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received 
                    = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received);
                if (((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received, (IData)(2U))) 
                     & VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__received, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__num_items))) {
                    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_count 
                        = __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__8__backpressure_cycles;
                }
            }
        }
    }
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         126);
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
    __Vfork_3__sync.done("tb/axis_fifo_tb.sv", 288);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_3__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__num_items;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_cycles;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_cycles = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count = 0;
    // Body
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_cycles = 2U;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__num_items = 0x0000000fU;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent = 0;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent = 0U;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count = 0;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__num_items)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             67);
        if (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count)) {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
            __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count 
                = (__Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count 
                   - (IData)(1U));
        } else if (((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                    & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))) {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata 
                = vlSelfRef.axis_fifo_tb__DOT__test_data.at(__Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent);
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast 
                = (__Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent 
                   == (__Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__num_items 
                       - (IData)(1U)));
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 1U;
            __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent 
                = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent);
            if (((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent, (IData)(2U))) 
                 & VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__sent, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__num_items))) {
                __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_count 
                    = __Vtask_axis_fifo_tb__DOT__send_data_with_idle__7__idle_cycles;
            }
        } else {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         91);
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    __Vfork_3__sync.done("tb/axis_fifo_tb.sv", 287);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__num_items;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_cycles;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_cycles = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count = 0;
    // Body
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_cycles = 3U;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__num_items = 0x0000000cU;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received = 0;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received = 0U;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count = 0;
    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count = 0U;
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
    while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__num_items)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             104);
        if (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count)) {
            vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
            __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count 
                = (__Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count 
                   - (IData)(1U));
        } else {
            vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
            if ((((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                  & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))) 
                 & (IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready))) {
                vlSelfRef.axis_fifo_tb__DOT__received_data.push_back((IData)(
                                                                             vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                             [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr]));
                vlSelfRef.axis_fifo_tb__DOT__test_tlast.push_back(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                              [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr] 
                                                                              >> 0x00000020U))));
                __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received 
                    = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received);
                if (((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received, (IData)(2U))) 
                     & VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__received, __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__num_items))) {
                    __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_count 
                        = __Vtask_axis_fifo_tb__DOT__receive_data_with_backpressure__5__backpressure_cycles;
                }
            }
        }
    }
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         126);
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
    __Vfork_2__sync.done("tb/axis_fifo_tb.sv", 248);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_continuous__4__num_items;
    __Vtask_axis_fifo_tb__DOT__send_continuous__4__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent;
    __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent = 0;
    // Body
    __Vtask_axis_fifo_tb__DOT__send_continuous__4__num_items = 0x0000000cU;
    __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent = 0;
    __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent, __Vtask_axis_fifo_tb__DOT__send_continuous__4__num_items)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             139);
        if (((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
             & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))) {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata 
                = vlSelfRef.axis_fifo_tb__DOT__test_data.at(__Vtask_axis_fifo_tb__DOT__send_continuous__4__sent);
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast 
                = (__Vtask_axis_fifo_tb__DOT__send_continuous__4__sent 
                   == (__Vtask_axis_fifo_tb__DOT__send_continuous__4__num_items 
                       - (IData)(1U)));
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 1U;
            __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent 
                = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__send_continuous__4__sent);
        } else {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         150);
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    __Vfork_2__sync.done("tb/axis_fifo_tb.sv", 247);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__receive_continuous__2__max_cycles;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__max_cycles = 0;
    // Body
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items = 0x0000000aU;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received = 0;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received = 0U;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles = 0;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles = 0U;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__max_cycles = 0;
    __Vtask_axis_fifo_tb__DOT__receive_continuous__2__max_cycles = 0x00002710U;
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 1U;
    VL_WRITEF_NX("[receive_continuous] Starting to receive %0d items\n",0,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items);
    {
        while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received, __Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items)) {
            co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge axis_fifo_tb.clk)", 
                                                                 "tb/axis_fifo_tb.sv", 
                                                                 165);
            __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles 
                = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles);
            if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles, __Vtask_axis_fifo_tb__DOT__receive_continuous__2__max_cycles)))) {
                VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:168: Assertion failed in %Naxis_fifo_tb.receive_continuous: [receive_continuous] TIMEOUT: Received only %0d/%0d items after %0d cycles\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received,
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items,
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles);
                VL_STOP_MT("tb/axis_fifo_tb.sv", 168, "");
                VL_WRITEF_NX("[%0t] %%Error: axis_fifo_tb.sv:169: Assertion failed in %Naxis_fifo_tb.receive_continuous: [receive_continuous] m_axis_tvalid=%b, m_axis_tready=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(
                                                   (0U 
                                                    != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                                   & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             1,(IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready));
                VL_STOP_MT("tb/axis_fifo_tb.sv", 169, "");
                goto __Vlabel0;
            }
            if ((((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                  & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))) 
                 & (IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready))) {
                vlSelfRef.axis_fifo_tb__DOT__received_data.push_back((IData)(
                                                                             vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                             [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr]));
                vlSelfRef.axis_fifo_tb__DOT__test_tlast.push_back(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                                                              [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr] 
                                                                              >> 0x00000020U))));
                __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received 
                    = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received);
                if (VL_UNLIKELY((((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__2__received, (IData)(5U))) 
                                  | (__Vtask_axis_fifo_tb__DOT__receive_continuous__2__received 
                                     == __Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items))))) {
                    VL_WRITEF_NX("[receive_continuous] Received %0d/%0d items\n",0,
                                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__received,
                                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items);
                }
            } else if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles, (IData)(0x000003e8U)))))) {
                VL_WRITEF_NX("[receive_continuous] Waiting: received=%0d, m_axis_tvalid=%b, m_axis_tready=%b, cycles=%0d\n[receive_continuous] FIFO state: s_axis_tready=%b, m_axis_tvalid=%b\n",0,
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__received,
                             1,((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             1,(IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready),
                             32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles,
                             1,((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))),
                             1,((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                                & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))));
            }
        }
        __Vlabel0: ;
    }
    VL_WRITEF_NX("[receive_continuous] Finished: received %0d/%0d items in %0d cycles\n",0,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__received,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__num_items,
                 32,__Vtask_axis_fifo_tb__DOT__receive_continuous__2__cycles);
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         189);
    vlSelfRef.axis_fifo_tb__DOT__m_axis_tready = 0U;
    __Vfork_1__sync.done("tb/axis_fifo_tb.sv", 208);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vaxis_fifo_tb___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__num_items;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__num_items = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_cycles;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_cycles = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent = 0;
    IData/*31:0*/ __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count = 0;
    // Body
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_cycles = 2U;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__num_items = 0x0000000aU;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent = 0;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent = 0U;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count = 0;
    __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    while (VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__num_items)) {
        co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge axis_fifo_tb.clk)", 
                                                             "tb/axis_fifo_tb.sv", 
                                                             67);
        if (VL_LTS_III(32, 0U, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count)) {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
            __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count 
                = (__Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count 
                   - (IData)(1U));
        } else if (((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                    & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))) {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata 
                = vlSelfRef.axis_fifo_tb__DOT__test_data.at(__Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent);
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast 
                = (__Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent 
                   == (__Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__num_items 
                       - (IData)(1U)));
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 1U;
            __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent 
                = ((IData)(1U) + __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent);
            if (((0U == VL_MODDIVS_III(32, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent, (IData)(2U))) 
                 & VL_LTS_III(32, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__sent, __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__num_items))) {
                __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_count 
                    = __Vtask_axis_fifo_tb__DOT__send_data_with_idle__1__idle_cycles;
            }
        } else {
            vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h682c734a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge axis_fifo_tb.clk)", 
                                                         "tb/axis_fifo_tb.sv", 
                                                         91);
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid = 0U;
    vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast = 0U;
    __Vfork_1__sync.done("tb/axis_fifo_tb.sv", 207);
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000df8475800ULL, 
                                         nullptr, "tb/axis_fifo_tb.sv", 
                                         429);
    VL_WRITEF_NX("\n=== TIMEOUT: Simulation exceeded 60 seconds ===\nThis indicates a deadlock or infinite loop in the testbench\n",0);
    VL_FINISH_MT("tb/axis_fifo_tb.sv", 432, "");
}

VlCoroutine Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__2(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb/axis_fifo_tb.sv", 
                                             49);
        vlSelfRef.__VdlyVal__axis_fifo_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__clk)));
        vlSelfRef.__VdlySet__axis_fifo_tb__DOT__clk__v0 = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxis_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vaxis_fifo_tb___024root___eval_triggers__act(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_triggers__act\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.axis_fifo_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.axis_fifo_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__clk__0 
        = vlSelfRef.axis_fifo_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__axis_fifo_tb__DOT__rst_n__0 
        = vlSelfRef.axis_fifo_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxis_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vaxis_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___trigger_anySet__act\n"); );
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

void Vaxis_fifo_tb___024root___act_comb__TOP__0(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___act_comb__TOP__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en = 
        ((IData)(vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid) 
         & ((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
            & ((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
               & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))));
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en = 
        (((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
          & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n))) 
         & ((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
            & (IData)(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready)));
}

void Vaxis_fifo_tb___024root___eval_act(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_act\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vaxis_fifo_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vaxis_fifo_tb___024root___nba_sequent__TOP__0(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*32:0*/ __VdlyVal__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0;
    __VdlyVal__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0;
    __VdlyDim0__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0;
    __VdlySet__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 = 0;
    // Body
    __VdlySet__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 = 0U;
    if (vlSelfRef.axis_fifo_tb__DOT__rst_n) {
        if (vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en) {
            vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr)));
        }
        if (vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) {
            __VdlyVal__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata)));
            __VdlyDim0__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 
                = vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr;
            __VdlySet__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr = 0U;
        vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr = 0U;
    }
    if (vlSelfRef.axis_fifo_tb__DOT__rst_n) {
        vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                       << 1U) | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count))
                               : ((1U == (((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                           << 1U) | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en)))
                                   ? ((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((1U 
                                                 == 
                                                 (((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en))) 
                                                << 1U) 
                                               | (2U 
                                                  == 
                                                  (((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en)))))))))) {
            if ((0U != (((1U == (((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                  << 1U) | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en))) 
                         << 1U) | (2U == (((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                           << 1U) | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: axis_fifo.sv:73: Assertion failed in %Naxis_fifo_tb.dut: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 2,(((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en) 
                                     << 1U) | (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en)));
                    VL_STOP_MT("src/axis_fifo.sv", 73, "");
                }
            }
        }
    } else {
        vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count = 0U;
    }
    vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n 
        = (1U & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__rst_n)));
    if (__VdlySet__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0) {
        vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[__VdlyDim0__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0] 
            = __VdlyVal__axis_fifo_tb__DOT__dut__DOT__fifo_mem__v0;
    }
}

void Vaxis_fifo_tb___024root___nba_sequent__TOP__1(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___nba_sequent__TOP__1\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__axis_fifo_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__axis_fifo_tb__DOT__clk__v0 = 0U;
        vlSelfRef.axis_fifo_tb__DOT__clk = vlSelfRef.__VdlyVal__axis_fifo_tb__DOT__clk__v0;
    }
}

void Vaxis_fifo_tb___024root___eval_nba(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_nba\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaxis_fifo_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaxis_fifo_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaxis_fifo_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vaxis_fifo_tb___024root___timing_commit(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___timing_commit\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h682c734a__0.commit(
                                                   "@(posedge axis_fifo_tb.clk)");
    }
}

void Vaxis_fifo_tb___024root___timing_resume(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___timing_resume\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h682c734a__0.resume(
                                                   "@(posedge axis_fifo_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vaxis_fifo_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaxis_fifo_tb___024root___eval_phase__act(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_phase__act\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vaxis_fifo_tb___024root___eval_triggers__act(vlSelf);
    Vaxis_fifo_tb___024root___timing_commit(vlSelf);
    Vaxis_fifo_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vaxis_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vaxis_fifo_tb___024root___timing_resume(vlSelf);
        Vaxis_fifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vaxis_fifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaxis_fifo_tb___024root___eval_phase__nba(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_phase__nba\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vaxis_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vaxis_fifo_tb___024root___eval_nba(vlSelf);
        Vaxis_fifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vaxis_fifo_tb___024root___eval(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaxis_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/axis_fifo_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaxis_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/axis_fifo_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vaxis_fifo_tb___024root___eval_phase__act(vlSelf));
    } while (Vaxis_fifo_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vaxis_fifo_tb___024root___eval_debug_assertions(Vaxis_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root___eval_debug_assertions\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
