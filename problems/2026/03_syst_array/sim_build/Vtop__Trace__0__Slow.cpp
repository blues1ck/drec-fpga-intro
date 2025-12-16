// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"o_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_ab_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+7,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_c_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+11,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sa_credit_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"i_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"o_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"i_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"o_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_ab_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+21,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_c_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+25,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBit(c+29,0,"a_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,0,"is_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"last_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"c_vld_top2sa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"c_vld_sa2top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("c_line_sa2fifo", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+36,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBit(c+40,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"fifo_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"fifo_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("credit_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+669,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"i_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"i_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"o_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"o_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+670,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+55,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+57,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+58,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+62+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+78,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+81,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sa_top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_a_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+88,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBit(c+92,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("o_c_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+93,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+95,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+97,0,"we_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"a_vld_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+99,0,"c_vld_line_top2core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("a_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+100,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+101,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+103,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+104,0,"c_vld_line_core2top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,0,"c_vld_line_delayed_core2top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("c_line_core2top", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+107,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+108,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+109,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("dl_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+112,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+114,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+116,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+119,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+120,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+124+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+127,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+133,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+675,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+139+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_a_vld_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+146,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+147,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+148,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+149,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+150,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+151,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+152,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+153,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+154,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+157,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+158+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+161,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+164,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+165+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+675,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+169,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+172,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+173+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_core2top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+180,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+181,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+182,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+184,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+185,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+186,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+675,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+191,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+192+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+195,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+200,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+205,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+208,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+209+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_core2top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+214,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+215,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+216,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+217,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+218,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+219,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+220,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+221,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+675,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+222,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+225,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+226+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+230,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+231,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+234,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+235+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+239,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+242,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+243+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+244,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_top2core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+248,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+249,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+250,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+251,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+252,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+253,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+254,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+255,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+256,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+259,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+260+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+266,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+267+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+269,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+270,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+675,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+271,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+274,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+275+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+278,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sa_core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"i_we_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"i_a_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"i_c_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("i_a_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+285,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+286,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+287,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+288,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+289,0,"o_c_vld_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("o_c_line", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+290,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+291,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+292,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+293,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("we", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+294,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+299,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+304,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+309,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+314,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+319,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+324,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+329,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+334,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+339,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+344,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+349,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+354,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+359,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+364,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+369,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+370,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+371,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+372,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+373,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+374,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+375,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+376,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+377,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+378,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+379,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+381,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+382,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+383,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+384,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+388,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+389,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+390,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+393,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+394,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+395,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+396,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+399,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+400,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+401,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+402,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+403,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+404,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+405,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+406,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+409,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+410,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+411,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+412,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+413,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+414,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+415,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+416,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+417,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+418,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_outer[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inner[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+419,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+425,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+426,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+430,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+431,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+432,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+438,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+439,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+443,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+444,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+445,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+451,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+452,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+455,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+456,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+457,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+458,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+464,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+465,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+469,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+470,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_outer[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inner[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+476,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+477,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+478,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+481,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+482,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+483,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+490,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+491,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+495,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+496,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+503,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+504,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+508,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+509,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+510,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+515,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+516,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+517,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+520,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+521,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+522,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_outer[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inner[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+523,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+529,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+530,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+533,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+534,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+535,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+542,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+543,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+546,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+547,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+548,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+549,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+554,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+555,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+556,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+560,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+561,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+562,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+567,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+568,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+569,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+573,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+574,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_outer[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inner[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+575,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+580,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+581,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+582,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+585,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+586,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+587,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+588,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+593,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+594,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+595,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+596,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+599,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+600,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+601,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+607,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+608,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+612,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+613,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_inner[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+614,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+619,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+620,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+621,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+625,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+626,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("we_line_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+627,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"o_we_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+631,0,"we_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+632,0,"we_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dl_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+633,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+635,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+636,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+637,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+638,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("o_data", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+639,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+640,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+641,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+642,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+673,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+643,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+645,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+646,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+647+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+648,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+649,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+674,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+653,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+654+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+656,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+657,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sr_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+675,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+658,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+661,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+662+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+665,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+666,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+667,(0x00000010U),32);
    bufp->fullIData(oldp+668,(4U),32);
    bufp->fullIData(oldp+669,(8U),32);
    bufp->fullIData(oldp+670,(0x00000040U),32);
    bufp->fullIData(oldp+671,(3U),32);
    bufp->fullIData(oldp+672,(0x00000010U),32);
    bufp->fullIData(oldp+673,(1U),32);
    bufp->fullIData(oldp+674,(2U),32);
    bufp->fullIData(oldp+675,(3U),32);
    bufp->fullIData(oldp+676,(1U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.i_vld));
    bufp->fullBit(oldp+4,(vlSelfRef.o_rdy));
    bufp->fullBit(oldp+5,(vlSelfRef.i_rdy));
    bufp->fullBit(oldp+6,(vlSelfRef.o_vld));
    bufp->fullSData(oldp+7,((0x0000ffffU & (IData)(vlSelfRef.i_ab_line))),16);
    bufp->fullSData(oldp+8,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.i_ab_line 
                                                    >> 0x00000010U)))),16);
    bufp->fullSData(oldp+9,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.i_ab_line 
                                                    >> 0x00000020U)))),16);
    bufp->fullSData(oldp+10,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.i_ab_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullSData(oldp+11,((0x0000ffffU & (IData)(vlSelfRef.o_c_line))),16);
    bufp->fullSData(oldp+12,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->fullSData(oldp+13,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->fullSData(oldp+14,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullBit(oldp+15,(vlSelfRef.sa_credit_top__DOT__clk));
    bufp->fullBit(oldp+16,(vlSelfRef.sa_credit_top__DOT__rst_n));
    bufp->fullBit(oldp+17,(vlSelfRef.sa_credit_top__DOT__i_vld));
    bufp->fullBit(oldp+18,(vlSelfRef.sa_credit_top__DOT__o_rdy));
    bufp->fullBit(oldp+19,(vlSelfRef.sa_credit_top__DOT__i_rdy));
    bufp->fullBit(oldp+20,(vlSelfRef.sa_credit_top__DOT__o_vld));
    bufp->fullSData(oldp+21,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__i_ab_line))),16);
    bufp->fullSData(oldp+22,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__i_ab_line 
                                                     >> 0x00000010U)))),16);
    bufp->fullSData(oldp+23,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__i_ab_line 
                                                     >> 0x00000020U)))),16);
    bufp->fullSData(oldp+24,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__i_ab_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullSData(oldp+25,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__o_c_line))),16);
    bufp->fullSData(oldp+26,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->fullSData(oldp+27,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->fullSData(oldp+28,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullBit(oldp+29,(vlSelfRef.sa_credit_top__DOT__a_vld));
    bufp->fullCData(oldp+30,(vlSelfRef.sa_credit_top__DOT__count),3);
    bufp->fullBit(oldp+31,(vlSelfRef.sa_credit_top__DOT__is_a));
    bufp->fullBit(oldp+32,(vlSelfRef.sa_credit_top__DOT__last_line));
    bufp->fullBit(oldp+33,(vlSelfRef.sa_credit_top__DOT__c_vld_top2sa));
    bufp->fullBit(oldp+34,(vlSelfRef.sa_credit_top__DOT__we));
    bufp->fullBit(oldp+35,(vlSelfRef.sa_credit_top__DOT__c_vld_sa2top));
    bufp->fullSData(oldp+36,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo))),16);
    bufp->fullSData(oldp+37,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo 
                                                     >> 0x00000010U)))),16);
    bufp->fullSData(oldp+38,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo 
                                                     >> 0x00000020U)))),16);
    bufp->fullSData(oldp+39,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo 
                                                     >> 0x00000030U)))),16);
    bufp->fullBit(oldp+40,(vlSelfRef.sa_credit_top__DOT__fifo_full));
    bufp->fullBit(oldp+41,(vlSelfRef.sa_credit_top__DOT__fifo_empty));
    bufp->fullBit(oldp+42,(vlSelfRef.sa_credit_top__DOT__fifo_wr_en));
    bufp->fullBit(oldp+43,(vlSelfRef.sa_credit_top__DOT__fifo_rd_en));
    bufp->fullBit(oldp+44,(vlSelfRef.sa_credit_top__DOT__inc));
    bufp->fullBit(oldp+45,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__clk));
    bufp->fullBit(oldp+46,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__rst_n));
    bufp->fullBit(oldp+47,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc));
    bufp->fullBit(oldp+48,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_vld));
    bufp->fullBit(oldp+49,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld));
    bufp->fullBit(oldp+50,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy));
    bufp->fullCData(oldp+51,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count),4);
    bufp->fullBit(oldp+52,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__clk));
    bufp->fullBit(oldp+53,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rst_n));
    bufp->fullBit(oldp+54,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_en));
    bufp->fullQData(oldp+55,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_data),64);
    bufp->fullBit(oldp+57,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_rd_en));
    bufp->fullQData(oldp+58,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_rd_data),64);
    bufp->fullBit(oldp+60,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full));
    bufp->fullBit(oldp+61,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty));
    bufp->fullQData(oldp+62,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[0]),64);
    bufp->fullQData(oldp+64,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[1]),64);
    bufp->fullQData(oldp+66,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[2]),64);
    bufp->fullQData(oldp+68,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[3]),64);
    bufp->fullQData(oldp+70,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[4]),64);
    bufp->fullQData(oldp+72,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[5]),64);
    bufp->fullQData(oldp+74,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[6]),64);
    bufp->fullQData(oldp+76,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[7]),64);
    bufp->fullCData(oldp+78,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr),3);
    bufp->fullCData(oldp+79,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr),3);
    bufp->fullCData(oldp+80,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count),4);
    bufp->fullBit(oldp+81,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en));
    bufp->fullBit(oldp+82,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en));
    bufp->fullBit(oldp+83,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk));
    bufp->fullBit(oldp+84,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n));
    bufp->fullBit(oldp+85,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_we));
    bufp->fullBit(oldp+86,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+87,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+88,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line))),16);
    bufp->fullSData(oldp+89,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
                                                     >> 0x00000010U)))),16);
    bufp->fullSData(oldp+90,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
                                                     >> 0x00000020U)))),16);
    bufp->fullSData(oldp+91,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullBit(oldp+92,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+93,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line))),16);
    bufp->fullSData(oldp+94,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->fullSData(oldp+95,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->fullSData(oldp+96,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullCData(oldp+97,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line),4);
    bufp->fullCData(oldp+98,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line),4);
    bufp->fullCData(oldp+99,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core),4);
    bufp->fullSData(oldp+100,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line))),16);
    bufp->fullSData(oldp+101,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+102,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+103,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
                                                      >> 0x00000030U)))),16);
    bufp->fullCData(oldp+104,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top),4);
    bufp->fullCData(oldp+105,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top),4);
    bufp->fullSData(oldp+106,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top))),16);
    bufp->fullSData(oldp+107,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+108,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+109,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
                                                      >> 0x00000030U)))),16);
    bufp->fullBit(oldp+110,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk));
    bufp->fullBit(oldp+111,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n));
    bufp->fullSData(oldp+112,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data))),16);
    bufp->fullSData(oldp+113,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+114,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+115,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                      >> 0x00000030U)))),16);
    bufp->fullSData(oldp+116,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data))),16);
    bufp->fullSData(oldp+117,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+118,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+119,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                      >> 0x00000030U)))),16);
    bufp->fullBit(oldp+120,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+121,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullSData(oldp+122,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->fullSData(oldp+123,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->fullSData(oldp+124,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullIData(oldp+125,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+126,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+127,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+128,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullSData(oldp+129,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->fullSData(oldp+130,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->fullSData(oldp+131,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+132,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullIData(oldp+133,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+134,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+135,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+136,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullSData(oldp+137,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->fullSData(oldp+138,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->fullSData(oldp+139,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+140,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullSData(oldp+141,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->fullIData(oldp+142,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+143,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+144,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk));
    bufp->fullBit(oldp+145,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n));
    bufp->fullBit(oldp+146,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data))));
    bufp->fullBit(oldp+147,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+148,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+149,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+150,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data))));
    bufp->fullBit(oldp+151,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+152,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+154,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+155,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+156,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+157,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+158,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+159,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+160,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+161,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+162,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+163,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+164,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+165,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+166,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+167,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+168,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+169,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+170,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+171,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+172,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+173,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+174,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+175,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+176,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+177,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+178,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk));
    bufp->fullBit(oldp+179,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n));
    bufp->fullSData(oldp+180,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data))),16);
    bufp->fullSData(oldp+181,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+182,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+183,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                                      >> 0x00000030U)))),16);
    bufp->fullSData(oldp+184,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data))),16);
    bufp->fullSData(oldp+185,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+186,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+187,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
                                                      >> 0x00000030U)))),16);
    bufp->fullBit(oldp+188,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+189,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullSData(oldp+190,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->fullSData(oldp+191,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->fullSData(oldp+192,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+193,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullSData(oldp+194,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->fullIData(oldp+195,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+196,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+197,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+198,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullSData(oldp+199,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->fullSData(oldp+200,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->fullSData(oldp+201,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullIData(oldp+203,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+204,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+205,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+206,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullSData(oldp+207,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->fullSData(oldp+208,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->fullSData(oldp+209,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullIData(oldp+210,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+211,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+212,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk));
    bufp->fullBit(oldp+213,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n));
    bufp->fullBit(oldp+214,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data))));
    bufp->fullBit(oldp+215,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+216,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+217,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+218,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data))));
    bufp->fullBit(oldp+219,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+220,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+221,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+222,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+223,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+224,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+225,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+226,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+227,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+228,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+229,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+230,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+231,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+232,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+233,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+234,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+235,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+236,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+237,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+238,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+239,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+240,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+241,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+242,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+243,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+244,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+245,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+246,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk));
    bufp->fullBit(oldp+247,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n));
    bufp->fullBit(oldp+248,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data))));
    bufp->fullBit(oldp+249,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+250,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+251,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+252,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data))));
    bufp->fullBit(oldp+253,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+254,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+255,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+256,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+257,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+258,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+259,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+260,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+261,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+262,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+263,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+264,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+265,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+266,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+267,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+268,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+269,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+270,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+271,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+272,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+273,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+274,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+275,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+276,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+277,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+278,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+279,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+280,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk));
    bufp->fullBit(oldp+281,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n));
    bufp->fullCData(oldp+282,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line),4);
    bufp->fullCData(oldp+283,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line),4);
    bufp->fullCData(oldp+284,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line),4);
    bufp->fullSData(oldp+285,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line))),16);
    bufp->fullSData(oldp+286,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+287,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+288,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                      >> 0x00000030U)))),16);
    bufp->fullCData(oldp+289,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line),4);
    bufp->fullSData(oldp+290,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line))),16);
    bufp->fullSData(oldp+291,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+292,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+293,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                      >> 0x00000030U)))),16);
    bufp->fullBit(oldp+294,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [0U][0U]));
    bufp->fullBit(oldp+295,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [0U][1U]));
    bufp->fullBit(oldp+296,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [0U][2U]));
    bufp->fullBit(oldp+297,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [0U][3U]));
    bufp->fullBit(oldp+298,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [0U][4U]));
    bufp->fullBit(oldp+299,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [1U][0U]));
    bufp->fullBit(oldp+300,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [1U][1U]));
    bufp->fullBit(oldp+301,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [1U][2U]));
    bufp->fullBit(oldp+302,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [1U][3U]));
    bufp->fullBit(oldp+303,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [1U][4U]));
    bufp->fullBit(oldp+304,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [2U][0U]));
    bufp->fullBit(oldp+305,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [2U][1U]));
    bufp->fullBit(oldp+306,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [2U][2U]));
    bufp->fullBit(oldp+307,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [2U][3U]));
    bufp->fullBit(oldp+308,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [2U][4U]));
    bufp->fullBit(oldp+309,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [3U][0U]));
    bufp->fullBit(oldp+310,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [3U][1U]));
    bufp->fullBit(oldp+311,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [3U][2U]));
    bufp->fullBit(oldp+312,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [3U][3U]));
    bufp->fullBit(oldp+313,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [3U][4U]));
    bufp->fullBit(oldp+314,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [4U][0U]));
    bufp->fullBit(oldp+315,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [4U][1U]));
    bufp->fullBit(oldp+316,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [4U][2U]));
    bufp->fullBit(oldp+317,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [4U][3U]));
    bufp->fullBit(oldp+318,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                            [4U][4U]));
    bufp->fullBit(oldp+319,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [0U][0U]));
    bufp->fullBit(oldp+320,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [0U][1U]));
    bufp->fullBit(oldp+321,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [0U][2U]));
    bufp->fullBit(oldp+322,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [0U][3U]));
    bufp->fullBit(oldp+323,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [0U][4U]));
    bufp->fullBit(oldp+324,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [1U][0U]));
    bufp->fullBit(oldp+325,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [1U][1U]));
    bufp->fullBit(oldp+326,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [1U][2U]));
    bufp->fullBit(oldp+327,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [1U][3U]));
    bufp->fullBit(oldp+328,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [1U][4U]));
    bufp->fullBit(oldp+329,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [2U][0U]));
    bufp->fullBit(oldp+330,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [2U][1U]));
    bufp->fullBit(oldp+331,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [2U][2U]));
    bufp->fullBit(oldp+332,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [2U][3U]));
    bufp->fullBit(oldp+333,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [2U][4U]));
    bufp->fullBit(oldp+334,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [3U][0U]));
    bufp->fullBit(oldp+335,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [3U][1U]));
    bufp->fullBit(oldp+336,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [3U][2U]));
    bufp->fullBit(oldp+337,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [3U][3U]));
    bufp->fullBit(oldp+338,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [3U][4U]));
    bufp->fullBit(oldp+339,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [4U][0U]));
    bufp->fullBit(oldp+340,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [4U][1U]));
    bufp->fullBit(oldp+341,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [4U][2U]));
    bufp->fullBit(oldp+342,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [4U][3U]));
    bufp->fullBit(oldp+343,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                            [4U][4U]));
    bufp->fullBit(oldp+344,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [0U][0U]));
    bufp->fullBit(oldp+345,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [0U][1U]));
    bufp->fullBit(oldp+346,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [0U][2U]));
    bufp->fullBit(oldp+347,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [0U][3U]));
    bufp->fullBit(oldp+348,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [0U][4U]));
    bufp->fullBit(oldp+349,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [1U][0U]));
    bufp->fullBit(oldp+350,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [1U][1U]));
    bufp->fullBit(oldp+351,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [1U][2U]));
    bufp->fullBit(oldp+352,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [1U][3U]));
    bufp->fullBit(oldp+353,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [1U][4U]));
    bufp->fullBit(oldp+354,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [2U][0U]));
    bufp->fullBit(oldp+355,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [2U][1U]));
    bufp->fullBit(oldp+356,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [2U][2U]));
    bufp->fullBit(oldp+357,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [2U][3U]));
    bufp->fullBit(oldp+358,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [2U][4U]));
    bufp->fullBit(oldp+359,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [3U][0U]));
    bufp->fullBit(oldp+360,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [3U][1U]));
    bufp->fullBit(oldp+361,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [3U][2U]));
    bufp->fullBit(oldp+362,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [3U][3U]));
    bufp->fullBit(oldp+363,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [3U][4U]));
    bufp->fullBit(oldp+364,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [4U][0U]));
    bufp->fullBit(oldp+365,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [4U][1U]));
    bufp->fullBit(oldp+366,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [4U][2U]));
    bufp->fullBit(oldp+367,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [4U][3U]));
    bufp->fullBit(oldp+368,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                            [4U][4U]));
    bufp->fullSData(oldp+369,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [0U][0U]),16);
    bufp->fullSData(oldp+370,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [0U][1U]),16);
    bufp->fullSData(oldp+371,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [0U][2U]),16);
    bufp->fullSData(oldp+372,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [0U][3U]),16);
    bufp->fullSData(oldp+373,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [0U][4U]),16);
    bufp->fullSData(oldp+374,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [1U][0U]),16);
    bufp->fullSData(oldp+375,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [1U][1U]),16);
    bufp->fullSData(oldp+376,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [1U][2U]),16);
    bufp->fullSData(oldp+377,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [1U][3U]),16);
    bufp->fullSData(oldp+378,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [1U][4U]),16);
    bufp->fullSData(oldp+379,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [2U][0U]),16);
    bufp->fullSData(oldp+380,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [2U][1U]),16);
    bufp->fullSData(oldp+381,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [2U][2U]),16);
    bufp->fullSData(oldp+382,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [2U][3U]),16);
    bufp->fullSData(oldp+383,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [2U][4U]),16);
    bufp->fullSData(oldp+384,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [3U][0U]),16);
    bufp->fullSData(oldp+385,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [3U][1U]),16);
    bufp->fullSData(oldp+386,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [3U][2U]),16);
    bufp->fullSData(oldp+387,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [3U][3U]),16);
    bufp->fullSData(oldp+388,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [3U][4U]),16);
    bufp->fullSData(oldp+389,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [4U][0U]),16);
    bufp->fullSData(oldp+390,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [4U][1U]),16);
    bufp->fullSData(oldp+391,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [4U][2U]),16);
    bufp->fullSData(oldp+392,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [4U][3U]),16);
    bufp->fullSData(oldp+393,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                              [4U][4U]),16);
    bufp->fullSData(oldp+394,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [0U][0U]),16);
    bufp->fullSData(oldp+395,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [0U][1U]),16);
    bufp->fullSData(oldp+396,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [0U][2U]),16);
    bufp->fullSData(oldp+397,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [0U][3U]),16);
    bufp->fullSData(oldp+398,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [0U][4U]),16);
    bufp->fullSData(oldp+399,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [1U][0U]),16);
    bufp->fullSData(oldp+400,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [1U][1U]),16);
    bufp->fullSData(oldp+401,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [1U][2U]),16);
    bufp->fullSData(oldp+402,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [1U][3U]),16);
    bufp->fullSData(oldp+403,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [1U][4U]),16);
    bufp->fullSData(oldp+404,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [2U][0U]),16);
    bufp->fullSData(oldp+405,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [2U][1U]),16);
    bufp->fullSData(oldp+406,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [2U][2U]),16);
    bufp->fullSData(oldp+407,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [2U][3U]),16);
    bufp->fullSData(oldp+408,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [2U][4U]),16);
    bufp->fullSData(oldp+409,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [3U][0U]),16);
    bufp->fullSData(oldp+410,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [3U][1U]),16);
    bufp->fullSData(oldp+411,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [3U][2U]),16);
    bufp->fullSData(oldp+412,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [3U][3U]),16);
    bufp->fullSData(oldp+413,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [3U][4U]),16);
    bufp->fullSData(oldp+414,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][0U]),16);
    bufp->fullSData(oldp+415,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][1U]),16);
    bufp->fullSData(oldp+416,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][2U]),16);
    bufp->fullSData(oldp+417,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][3U]),16);
    bufp->fullSData(oldp+418,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                              [4U][4U]),16);
    bufp->fullBit(oldp+419,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+420,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+421,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+422,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+423,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+424,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+425,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+426,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+427,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+428,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+429,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+430,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+431,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+432,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+433,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+434,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+435,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+436,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+437,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+438,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+439,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+440,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+441,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+442,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+443,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+444,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+445,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+446,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+447,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+448,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+449,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+450,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+451,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+452,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+453,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+454,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+455,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+456,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+457,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+458,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+459,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+460,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+461,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+462,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+463,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+464,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+465,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+466,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+467,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+468,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+469,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+470,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+471,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+472,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+473,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+474,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+475,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+476,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+477,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+478,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+479,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+480,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+481,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+482,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+483,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+484,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+485,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+486,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+487,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+488,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+489,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+490,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+491,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+492,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+493,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+494,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+495,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+496,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+497,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+498,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+499,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+500,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+501,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+502,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+503,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+504,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+505,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+506,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+507,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+508,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+509,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+510,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+511,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+512,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+513,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+514,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+515,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+516,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+517,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+518,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+519,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+520,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+521,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+522,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+523,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+524,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+525,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+526,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+527,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+528,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+529,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+530,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+531,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+532,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+533,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+534,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+535,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+536,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+537,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+538,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+539,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+540,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+541,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+542,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+543,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+544,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+545,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+546,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+547,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+548,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+549,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+550,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+551,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+552,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+553,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+554,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+555,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+556,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+557,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+558,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+559,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+560,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+561,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+562,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+563,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+564,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+565,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+566,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+567,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+568,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+569,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+570,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+571,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+572,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+573,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+574,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+575,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+576,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+577,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+578,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+579,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+580,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+581,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+582,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+583,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+584,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+585,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+586,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+587,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+588,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+589,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+590,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+591,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+592,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+593,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+594,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+595,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+596,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+597,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+598,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+599,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+600,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+601,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+602,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+603,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+604,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+605,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+606,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+607,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+608,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+609,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+610,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+611,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+612,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+613,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+614,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->fullBit(oldp+615,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->fullBit(oldp+616,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->fullBit(oldp+617,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->fullBit(oldp+618,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->fullSData(oldp+619,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->fullSData(oldp+620,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->fullBit(oldp+621,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->fullBit(oldp+622,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->fullBit(oldp+623,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->fullSData(oldp+624,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->fullSData(oldp+625,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->fullSData(oldp+626,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->fullBit(oldp+627,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk));
    bufp->fullBit(oldp+628,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n));
    bufp->fullBit(oldp+629,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we));
    bufp->fullCData(oldp+630,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line),4);
    bufp->fullCData(oldp+631,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift),4);
    bufp->fullCData(oldp+632,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen),4);
    bufp->fullBit(oldp+633,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk));
    bufp->fullBit(oldp+634,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n));
    bufp->fullBit(oldp+635,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
    bufp->fullBit(oldp+636,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+637,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+638,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+639,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data))));
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+642,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+643,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+644,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+645,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+646,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+647,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+648,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+649,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+650,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+651,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+652,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+653,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+654,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+655,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+656,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+657,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+658,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->fullBit(oldp+659,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->fullBit(oldp+660,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+661,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->fullBit(oldp+662,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+663,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+664,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+665,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+666,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
}
