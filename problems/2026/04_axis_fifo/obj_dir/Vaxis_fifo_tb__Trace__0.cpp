// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxis_fifo_tb__Syms.h"


void Vaxis_fifo_tb___024root__trace_chg_0_sub_0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaxis_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_chg_0\n"); );
    // Body
    Vaxis_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxis_fifo_tb___024root*>(voidSelf);
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vaxis_fifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaxis_fifo_tb___024root__trace_chg_0_sub_0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_chg_0_sub_0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                              & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))));
        bufp->chgBit(oldp+1,(((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                              & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))));
        bufp->chgIData(oldp+2,((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                       [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr])),32);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                            [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr] 
                                            >> 0x00000020U)))));
        bufp->chgQData(oldp+4,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[0]),33);
        bufp->chgQData(oldp+6,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[1]),33);
        bufp->chgQData(oldp+8,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[2]),33);
        bufp->chgQData(oldp+10,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[3]),33);
        bufp->chgQData(oldp+12,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[4]),33);
        bufp->chgQData(oldp+14,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[5]),33);
        bufp->chgQData(oldp+16,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[6]),33);
        bufp->chgQData(oldp+18,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[7]),33);
        bufp->chgCData(oldp+20,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr),3);
        bufp->chgCData(oldp+21,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr),3);
        bufp->chgCData(oldp+22,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count),4);
        bufp->chgBit(oldp+23,((8U == (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count))));
        bufp->chgBit(oldp+24,((0U == (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count))));
        bufp->chgBit(oldp+25,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n));
    }
    bufp->chgBit(oldp+26,(vlSelfRef.axis_fifo_tb__DOT__clk));
    bufp->chgBit(oldp+27,(vlSelfRef.axis_fifo_tb__DOT__rst_n));
    bufp->chgBit(oldp+28,(vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid));
    bufp->chgIData(oldp+29,(vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata),32);
    bufp->chgBit(oldp+30,(vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast));
    bufp->chgBit(oldp+31,(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready));
    bufp->chgBit(oldp+32,(vlSelfRef.axis_fifo_tb__DOT__test_passed));
    bufp->chgIData(oldp+33,(vlSelfRef.axis_fifo_tb__DOT__error_count),32);
    bufp->chgBit(oldp+34,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en));
    bufp->chgBit(oldp+35,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en));
}

void Vaxis_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_cleanup\n"); );
    // Body
    Vaxis_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxis_fifo_tb___024root*>(voidSelf);
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
