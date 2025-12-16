// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxis_fifo_tb__Syms.h"


VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_init_sub__TOP__0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_init_sub__TOP__0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("axis_fifo_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s_axis_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"s_axis_tready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"s_axis_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"m_axis_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"m_axis_tready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"m_axis_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"m_axis_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"test_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s_axis_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"s_axis_tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"s_axis_tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"m_axis_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"m_axis_tready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"m_axis_tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"m_axis_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+5+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+21,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wait_clk_after_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_init_top(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_init_top\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaxis_fifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaxis_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaxis_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_register(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_register\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaxis_fifo_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vaxis_fifo_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vaxis_fifo_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vaxis_fifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_const_0_sub_0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_const_0\n"); );
    // Body
    Vaxis_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxis_fifo_tb___024root*>(voidSelf);
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vaxis_fifo_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_const_0_sub_0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_const_0_sub_0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+37,(8U),32);
    bufp->fullIData(oldp+38,(0x00000020U),32);
    bufp->fullIData(oldp+39,(3U),32);
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_full_0_sub_0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_full_0\n"); );
    // Body
    Vaxis_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxis_fifo_tb___024root*>(voidSelf);
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vaxis_fifo_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_full_0_sub_0(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxis_fifo_tb___024root__trace_full_0_sub_0\n"); );
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(((8U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                           & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))));
    bufp->fullBit(oldp+2,(((0U != (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count)) 
                           & (~ (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n)))));
    bufp->fullIData(oldp+3,((IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                    [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr])),32);
    bufp->fullBit(oldp+4,((1U & (IData)((vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem
                                         [vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr] 
                                         >> 0x00000020U)))));
    bufp->fullQData(oldp+5,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[0]),33);
    bufp->fullQData(oldp+7,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[1]),33);
    bufp->fullQData(oldp+9,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[2]),33);
    bufp->fullQData(oldp+11,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[3]),33);
    bufp->fullQData(oldp+13,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[4]),33);
    bufp->fullQData(oldp+15,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[5]),33);
    bufp->fullQData(oldp+17,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[6]),33);
    bufp->fullQData(oldp+19,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__fifo_mem[7]),33);
    bufp->fullCData(oldp+21,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_ptr),3);
    bufp->fullCData(oldp+22,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_ptr),3);
    bufp->fullCData(oldp+23,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count),4);
    bufp->fullBit(oldp+24,((8U == (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count))));
    bufp->fullBit(oldp+25,((0U == (IData)(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__count))));
    bufp->fullBit(oldp+26,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wait_clk_after_rst_n));
    bufp->fullBit(oldp+27,(vlSelfRef.axis_fifo_tb__DOT__clk));
    bufp->fullBit(oldp+28,(vlSelfRef.axis_fifo_tb__DOT__rst_n));
    bufp->fullBit(oldp+29,(vlSelfRef.axis_fifo_tb__DOT__s_axis_tvalid));
    bufp->fullIData(oldp+30,(vlSelfRef.axis_fifo_tb__DOT__s_axis_tdata),32);
    bufp->fullBit(oldp+31,(vlSelfRef.axis_fifo_tb__DOT__s_axis_tlast));
    bufp->fullBit(oldp+32,(vlSelfRef.axis_fifo_tb__DOT__m_axis_tready));
    bufp->fullBit(oldp+33,(vlSelfRef.axis_fifo_tb__DOT__test_passed));
    bufp->fullIData(oldp+34,(vlSelfRef.axis_fifo_tb__DOT__error_count),32);
    bufp->fullBit(oldp+35,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__wr_en));
    bufp->fullBit(oldp+36,(vlSelfRef.axis_fifo_tb__DOT__dut__DOT__rd_en));
}
