// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsa_axi_top_tb__Syms.h"


VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_init_sub__TOP__0(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("sa_axi_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+540,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+543,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_start_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_start_ac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"o_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"m_axi_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"m_axi_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"m_axi_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"m_axi_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"m_axi_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+546,0,"m_axi_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"m_axi_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"m_axi_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"m_axi_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"m_axi_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"m_axi_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"m_axi_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"m_axi_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"m_axi_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"m_axi_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+546,0,"m_axi_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+113,0,"m_axi_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"m_axi_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"m_axi_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"m_axi_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"m_axi_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"m_axi_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"m_axi_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("matrix_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+7,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+11,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+15,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+19,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("matrix_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+23,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+27,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+31,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+35,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("matrix_c_ref", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+39,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+43,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+47,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+51,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+55,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"read_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+121,0,"read_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+122,0,"read_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"write_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"write_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+126,0,"write_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+540,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_start_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_start_ac",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_addr_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"m_axi_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"m_axi_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"m_axi_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"m_axi_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"m_axi_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+546,0,"m_axi_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"m_axi_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"m_axi_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"m_axi_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"m_axi_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"m_axi_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"m_axi_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"m_axi_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"m_axi_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"m_axi_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+546,0,"m_axi_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+113,0,"m_axi_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"m_axi_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"m_axi_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"m_axi_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"m_axi_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"m_axi_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"ELEMENTS_PER_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"WORDS_PER_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"BURST_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"ACTUAL_BURST_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+127,0,"load_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"load_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"store_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+130,0,"b_line_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"a_line_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"c_line_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+136,0,"b_we_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"c_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+139,0,"read_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+141,0,"read_elem_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+142,0,"reading_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"reading_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+144,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+146,0,"write_elem_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"writing_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"b_burst_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"a_burst_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"c_burst_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+151,0,"burst_done_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"burst_done_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"burst_done_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("addr_gen_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+540,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_start_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_start_ac",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_addr_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"m_axi_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"m_axi_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"m_axi_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"m_axi_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"m_axi_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+546,0,"m_axi_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"m_axi_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"m_axi_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"m_axi_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"m_axi_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"m_axi_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+546,0,"m_axi_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+127,0,"o_load_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"o_load_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"o_store_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"i_burst_done_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"i_burst_done_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"i_burst_done_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"ELEMENTS_PER_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"ADDR_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"BURST_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+154,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+537,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"row_cnt_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"row_cnt_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"row_cnt_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"current_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"current_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"current_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+538,0,"start_b_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"start_ac_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"start_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"start_ac_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sa_top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+132,0,"i_a_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+138,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"o_c_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+163,0,"we_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"a_vld_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"c_vld_line_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+166,0,"a_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+168,0,"c_vld_line_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"c_vld_line_out_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+170,0,"c_line_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dl_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+132,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+175,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+179+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+185+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+188,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+189,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_a_vld_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+191,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+192+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+195,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+196+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+198,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+200,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_out_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+170,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("gen_shift_reg[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+207,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+208+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+214,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+215+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+220,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+221+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+222,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_in_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+551,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+224,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+551,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+228,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+229+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+551,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+234+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
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
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_out_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+240,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+241+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
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
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+247,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+248+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+253,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+254+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sa_core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"i_we_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"i_a_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"i_c_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+166,0,"i_a_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+168,0,"o_c_vld_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+170,0,"o_c_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("we_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+257,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+262,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+267,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+272,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+277,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_vld_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+282,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+287,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+292,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+297,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+302,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_vld_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+307,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+312,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+317,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+322,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+327,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+332,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+333,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+334,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+335,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+336,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+337,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+338,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+339,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+340,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+341,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+342,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+343,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+344,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+345,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+346,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+347,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+348,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+349,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+350,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+351,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+352,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+353,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+354,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+355,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+60,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+65,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+70,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+75,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+80,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+83,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+361,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+365,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+366,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+371,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+375,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+376,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+381,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+391,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+395,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+396,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+401,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+405,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+406,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+411,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+415,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+416,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+421,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+425,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+426,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+92,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+431,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+435,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+436,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+441,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+445,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+446,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+451,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+455,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+456,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+95,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+461,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+465,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+466,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+470,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+471,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+475,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+476,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+480,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+481,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+484,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+485,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+486,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+491,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+495,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+496,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+501,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+505,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+506,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+541,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+510,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+511,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+515,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+516,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("we_line_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"o_we_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"we_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+517,0,"we_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dl_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+542,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+517,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+550,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+519,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+520+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+521,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+522,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+548,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+523,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+524,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+525+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+527,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+528,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+549,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+536,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+529,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+530,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+531+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+534,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+535,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"actual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_init_top(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_init_top\n"); );
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_axi_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsa_axi_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsa_axi_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_register(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_register\n"); );
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsa_axi_top_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsa_axi_top_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsa_axi_top_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsa_axi_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_const_0_sub_0(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_const_0\n"); );
    // Body
    Vsa_axi_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsa_axi_top_tb___024root*>(voidSelf);
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsa_axi_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_const_0_sub_0(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_const_0_sub_0\n"); );
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+540,(0x00000020U),32);
    bufp->fullIData(oldp+541,(0x00000010U),32);
    bufp->fullIData(oldp+542,(4U),32);
    bufp->fullIData(oldp+543,(0x00000400U),32);
    bufp->fullCData(oldp+544,(3U),8);
    bufp->fullCData(oldp+545,(2U),3);
    bufp->fullCData(oldp+546,(1U),2);
    bufp->fullBit(oldp+547,(1U));
    bufp->fullIData(oldp+548,(2U),32);
    bufp->fullIData(oldp+549,(3U),32);
    bufp->fullIData(oldp+550,(1U),32);
    bufp->fullBit(oldp+551,(0U));
    bufp->fullCData(oldp+552,(0U),4);
}

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_full_0_sub_0(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_full_0\n"); );
    // Body
    Vsa_axi_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsa_axi_top_tb___024root*>(voidSelf);
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsa_axi_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsa_axi_top_tb___024root__trace_full_0_sub_0(Vsa_axi_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_axi_top_tb___024root__trace_full_0_sub_0\n"); );
    Vsa_axi_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.sa_axi_top_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.sa_axi_top_tb__DOT__i_start_b));
    bufp->fullBit(oldp+3,(vlSelfRef.sa_axi_top_tb__DOT__i_start_ac));
    bufp->fullIData(oldp+4,(vlSelfRef.sa_axi_top_tb__DOT__i_addr_b),32);
    bufp->fullIData(oldp+5,(vlSelfRef.sa_axi_top_tb__DOT__i_addr_a),32);
    bufp->fullIData(oldp+6,(vlSelfRef.sa_axi_top_tb__DOT__i_addr_c),32);
    bufp->fullSData(oldp+7,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                            [0U][0U]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                            [0U][1U]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                            [0U][2U]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [0U][3U]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [1U][0U]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [1U][1U]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [1U][2U]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [1U][3U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [2U][0U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [2U][1U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [2U][2U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [2U][3U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [3U][0U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [3U][1U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [3U][2U]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.sa_axi_top_tb__DOT__matrix_a
                             [3U][3U]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [0U][0U]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [0U][1U]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [0U][2U]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [0U][3U]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [1U][0U]),16);
    bufp->fullSData(oldp+28,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [1U][1U]),16);
    bufp->fullSData(oldp+29,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [1U][2U]),16);
    bufp->fullSData(oldp+30,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [1U][3U]),16);
    bufp->fullSData(oldp+31,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [2U][0U]),16);
    bufp->fullSData(oldp+32,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [2U][1U]),16);
    bufp->fullSData(oldp+33,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [2U][2U]),16);
    bufp->fullSData(oldp+34,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [2U][3U]),16);
    bufp->fullSData(oldp+35,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [3U][0U]),16);
    bufp->fullSData(oldp+36,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [3U][1U]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [3U][2U]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.sa_axi_top_tb__DOT__matrix_b
                             [3U][3U]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [0U][0U]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [0U][1U]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [0U][2U]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [0U][3U]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [1U][0U]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [1U][1U]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [1U][2U]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [1U][3U]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [2U][0U]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [2U][1U]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [2U][2U]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [2U][3U]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [3U][0U]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [3U][1U]),16);
    bufp->fullSData(oldp+53,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [3U][2U]),16);
    bufp->fullSData(oldp+54,(vlSelfRef.sa_axi_top_tb__DOT__matrix_c_ref
                             [3U][3U]),16);
    bufp->fullIData(oldp+55,(vlSelfRef.sa_axi_top_tb__DOT__errors),32);
    bufp->fullIData(oldp+56,(vlSelfRef.sa_axi_top_tb__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+57,(vlSelfRef.sa_axi_top_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j),32);
    bufp->fullSData(oldp+58,(vlSelfRef.sa_axi_top_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__expected),16);
    bufp->fullSData(oldp+59,(vlSelfRef.sa_axi_top_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__actual),16);
    bufp->fullSData(oldp+60,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+61,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+62,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->fullSData(oldp+63,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->fullSData(oldp+64,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][4U]),16);
    bufp->fullSData(oldp+65,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+66,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+67,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->fullSData(oldp+68,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->fullSData(oldp+69,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][4U]),16);
    bufp->fullSData(oldp+70,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->fullSData(oldp+71,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->fullSData(oldp+72,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->fullSData(oldp+73,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->fullSData(oldp+74,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][4U]),16);
    bufp->fullSData(oldp+75,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->fullSData(oldp+76,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->fullSData(oldp+77,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->fullSData(oldp+78,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][3U]),16);
    bufp->fullSData(oldp+79,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][4U]),16);
    bufp->fullSData(oldp+80,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][0U]),16);
    bufp->fullSData(oldp+81,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][1U]),16);
    bufp->fullSData(oldp+82,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][2U]),16);
    bufp->fullSData(oldp+83,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][3U]),16);
    bufp->fullSData(oldp+84,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][4U]),16);
    bufp->fullSData(oldp+85,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+86,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+87,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->fullSData(oldp+88,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->fullSData(oldp+89,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+90,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+91,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->fullSData(oldp+92,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->fullSData(oldp+93,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->fullSData(oldp+94,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->fullSData(oldp+95,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->fullSData(oldp+96,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->fullSData(oldp+97,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->fullSData(oldp+98,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->fullSData(oldp+99,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                              [3U][3U]),16);
    bufp->fullCData(oldp+101,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift_reg),4);
    bufp->fullBit(oldp+102,((0U != (IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__state))));
    bufp->fullBit(oldp+103,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_arvalid));
    bufp->fullBit(oldp+104,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_arready));
    bufp->fullIData(oldp+105,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_araddr),32);
    bufp->fullBit(oldp+106,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_rvalid));
    bufp->fullBit(oldp+107,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_rready));
    bufp->fullIData(oldp+108,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_rdata),32);
    bufp->fullBit(oldp+109,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_rlast));
    bufp->fullBit(oldp+110,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_awvalid));
    bufp->fullBit(oldp+111,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_awready));
    bufp->fullIData(oldp+112,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_awaddr),32);
    bufp->fullBit(oldp+113,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_wvalid));
    bufp->fullBit(oldp+114,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_wready));
    bufp->fullIData(oldp+115,(((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT____VdfgRegularize_hed751b34_0_0)
                                ? (0x0000ffffU & (IData)(
                                                         (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__write_buffer 
                                                          >> 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,6,32, 
                                                                           ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__write_elem_cnt) 
                                                                            - (IData)(1U)), 4U)))))
                                : 0U)),32);
    bufp->fullBit(oldp+116,((4U == (IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__write_elem_cnt))));
    bufp->fullBit(oldp+117,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_bvalid));
    bufp->fullCData(oldp+118,(vlSelfRef.sa_axi_top_tb__DOT__m_axi_bresp),2);
    bufp->fullIData(oldp+119,(vlSelfRef.sa_axi_top_tb__DOT__read_addr),32);
    bufp->fullCData(oldp+120,(vlSelfRef.sa_axi_top_tb__DOT__read_len),8);
    bufp->fullCData(oldp+121,(vlSelfRef.sa_axi_top_tb__DOT__read_cnt),8);
    bufp->fullBit(oldp+122,(vlSelfRef.sa_axi_top_tb__DOT__read_active));
    bufp->fullIData(oldp+123,(vlSelfRef.sa_axi_top_tb__DOT__write_addr),32);
    bufp->fullCData(oldp+124,(vlSelfRef.sa_axi_top_tb__DOT__write_len),8);
    bufp->fullCData(oldp+125,(vlSelfRef.sa_axi_top_tb__DOT__write_cnt),8);
    bufp->fullBit(oldp+126,(vlSelfRef.sa_axi_top_tb__DOT__write_active));
    bufp->fullBit(oldp+127,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__load_b));
    bufp->fullBit(oldp+128,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__load_a));
    bufp->fullBit(oldp+129,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__store_c));
    bufp->fullQData(oldp+130,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__b_line_data),64);
    bufp->fullQData(oldp+132,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_line_data),64);
    bufp->fullQData(oldp+134,((((QData)((IData)((((IData)(
                                                          (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_line_out 
                                                           >> 0x00000030U)) 
                                                  << 0x00000010U) 
                                                 | vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                                 [0U]))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                                    [1U] 
                                                                    << 0x00000010U) 
                                                                   | vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                                   [2U]))))),64);
    bufp->fullBit(oldp+136,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__b_we_valid));
    bufp->fullBit(oldp+137,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_valid));
    bufp->fullBit(oldp+138,((((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_vld_line_out) 
                              >> 3U) & (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                        [0U] & (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                [1U] 
                                                & vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                [2U])))));
    bufp->fullQData(oldp+139,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__read_buffer),64);
    bufp->fullCData(oldp+141,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__read_elem_cnt),8);
    bufp->fullBit(oldp+142,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__reading_b));
    bufp->fullBit(oldp+143,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__reading_a));
    bufp->fullQData(oldp+144,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__write_buffer),64);
    bufp->fullCData(oldp+146,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__write_elem_cnt),8);
    bufp->fullBit(oldp+147,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__writing_c));
    bufp->fullCData(oldp+148,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__b_burst_cnt),8);
    bufp->fullCData(oldp+149,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_burst_cnt),8);
    bufp->fullCData(oldp+150,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__c_burst_cnt),8);
    bufp->fullBit(oldp+151,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__burst_done_b));
    bufp->fullBit(oldp+152,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__burst_done_a));
    bufp->fullBit(oldp+153,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__burst_done_c));
    bufp->fullCData(oldp+154,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__state),3);
    bufp->fullCData(oldp+155,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__row_cnt_b),8);
    bufp->fullCData(oldp+156,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__row_cnt_a),8);
    bufp->fullCData(oldp+157,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__row_cnt_c),8);
    bufp->fullIData(oldp+158,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__current_addr_b),32);
    bufp->fullIData(oldp+159,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__current_addr_a),32);
    bufp->fullIData(oldp+160,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__current_addr_c),32);
    bufp->fullBit(oldp+161,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__start_b_reg));
    bufp->fullBit(oldp+162,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__start_ac_reg));
    bufp->fullCData(oldp+163,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data),4);
    bufp->fullCData(oldp+164,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data),4);
    bufp->fullCData(oldp+165,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__o_data),4);
    bufp->fullQData(oldp+166,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data),64);
    bufp->fullCData(oldp+168,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_vld_line_out),4);
    bufp->fullCData(oldp+169,(((((2U & ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_vld_line_out) 
                                        >> 2U)) | vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                 [0U]) << 2U) | ((vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                  [1U] 
                                                  << 1U) 
                                                 | vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                 [2U]))),4);
    bufp->fullQData(oldp+170,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_line_out),64);
    bufp->fullSData(oldp+172,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_line_data 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+173,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                              [0U]),16);
    bufp->fullSData(oldp+174,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullIData(oldp+175,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+176,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+177,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_line_data 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+178,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                              [1U]),16);
    bufp->fullSData(oldp+179,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+180,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullIData(oldp+181,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+182,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+183,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_line_data 
                                                      >> 0x00000030U)))),16);
    bufp->fullSData(oldp+184,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                              [2U]),16);
    bufp->fullSData(oldp+185,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+186,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullSData(oldp+187,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]),16);
    bufp->fullIData(oldp+188,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+189,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+190,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__a_valid))))),4);
    bufp->fullBit(oldp+191,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+192,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+193,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+194,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+195,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+196,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+197,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+198,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+199,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+200,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+201,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+202,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+203,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+204,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+205,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+206,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_line_out))),16);
    bufp->fullSData(oldp+207,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                              [2U]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+209,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullSData(oldp+210,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[2]),16);
    bufp->fullIData(oldp+211,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+212,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+213,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_line_out 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+214,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                              [1U]),16);
    bufp->fullSData(oldp+215,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+216,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullIData(oldp+217,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+218,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+219,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_line_out 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+220,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                              [0U]),16);
    bufp->fullSData(oldp+221,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullIData(oldp+222,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+223,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+224,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+225,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+226,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+227,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+228,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+229,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+230,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+231,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+232,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+233,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+234,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+235,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+236,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+237,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+238,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+239,((1U & (IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_vld_line_out))));
    bufp->fullBit(oldp+240,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+241,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+242,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+243,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+244,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+245,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+246,((1U & ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_vld_line_out) 
                                   >> 1U))));
    bufp->fullBit(oldp+247,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+248,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+249,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+250,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+251,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+252,((1U & ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__c_vld_line_out) 
                                   >> 2U))));
    bufp->fullBit(oldp+253,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+254,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+255,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+256,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+257,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][0U]));
    bufp->fullBit(oldp+258,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][1U]));
    bufp->fullBit(oldp+259,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][2U]));
    bufp->fullBit(oldp+260,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][3U]));
    bufp->fullBit(oldp+261,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][4U]));
    bufp->fullBit(oldp+262,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][0U]));
    bufp->fullBit(oldp+263,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][1U]));
    bufp->fullBit(oldp+264,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][2U]));
    bufp->fullBit(oldp+265,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][3U]));
    bufp->fullBit(oldp+266,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][4U]));
    bufp->fullBit(oldp+267,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][0U]));
    bufp->fullBit(oldp+268,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][1U]));
    bufp->fullBit(oldp+269,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][2U]));
    bufp->fullBit(oldp+270,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][3U]));
    bufp->fullBit(oldp+271,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][4U]));
    bufp->fullBit(oldp+272,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][0U]));
    bufp->fullBit(oldp+273,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][1U]));
    bufp->fullBit(oldp+274,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][2U]));
    bufp->fullBit(oldp+275,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][3U]));
    bufp->fullBit(oldp+276,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][4U]));
    bufp->fullBit(oldp+277,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [4U][0U]));
    bufp->fullBit(oldp+278,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [4U][1U]));
    bufp->fullBit(oldp+279,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [4U][2U]));
    bufp->fullBit(oldp+280,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [4U][3U]));
    bufp->fullBit(oldp+281,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [4U][4U]));
    bufp->fullBit(oldp+282,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+283,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+284,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+285,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+286,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][4U]));
    bufp->fullBit(oldp+287,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+288,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+289,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+290,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+291,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][4U]));
    bufp->fullBit(oldp+292,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+293,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+294,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+295,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+296,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][4U]));
    bufp->fullBit(oldp+297,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+298,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+299,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+300,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+301,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][4U]));
    bufp->fullBit(oldp+302,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][0U]));
    bufp->fullBit(oldp+303,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][1U]));
    bufp->fullBit(oldp+304,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][2U]));
    bufp->fullBit(oldp+305,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][3U]));
    bufp->fullBit(oldp+306,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][4U]));
    bufp->fullBit(oldp+307,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+308,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+309,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+310,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+311,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][4U]));
    bufp->fullBit(oldp+312,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+313,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+314,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+315,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+316,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][4U]));
    bufp->fullBit(oldp+317,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+318,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+319,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+320,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+321,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][4U]));
    bufp->fullBit(oldp+322,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+323,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+324,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+325,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+326,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][4U]));
    bufp->fullBit(oldp+327,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][0U]));
    bufp->fullBit(oldp+328,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][1U]));
    bufp->fullBit(oldp+329,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][2U]));
    bufp->fullBit(oldp+330,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][3U]));
    bufp->fullBit(oldp+331,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][4U]));
    bufp->fullSData(oldp+332,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][0U]),16);
    bufp->fullSData(oldp+333,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][1U]),16);
    bufp->fullSData(oldp+334,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][2U]),16);
    bufp->fullSData(oldp+335,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][3U]),16);
    bufp->fullSData(oldp+336,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][4U]),16);
    bufp->fullSData(oldp+337,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][0U]),16);
    bufp->fullSData(oldp+338,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][1U]),16);
    bufp->fullSData(oldp+339,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][2U]),16);
    bufp->fullSData(oldp+340,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][3U]),16);
    bufp->fullSData(oldp+341,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][4U]),16);
    bufp->fullSData(oldp+342,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][0U]),16);
    bufp->fullSData(oldp+343,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][1U]),16);
    bufp->fullSData(oldp+344,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][2U]),16);
    bufp->fullSData(oldp+345,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][3U]),16);
    bufp->fullSData(oldp+346,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][4U]),16);
    bufp->fullSData(oldp+347,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][0U]),16);
    bufp->fullSData(oldp+348,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][1U]),16);
    bufp->fullSData(oldp+349,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][2U]),16);
    bufp->fullSData(oldp+350,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][3U]),16);
    bufp->fullSData(oldp+351,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][4U]),16);
    bufp->fullSData(oldp+352,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [4U][0U]),16);
    bufp->fullSData(oldp+353,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [4U][1U]),16);
    bufp->fullSData(oldp+354,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [4U][2U]),16);
    bufp->fullSData(oldp+355,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [4U][3U]),16);
    bufp->fullSData(oldp+356,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [4U][4U]),16);
    bufp->fullBit(oldp+357,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][0U]));
    bufp->fullBit(oldp+358,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+359,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][0U]));
    bufp->fullSData(oldp+360,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][0U]),16);
    bufp->fullBit(oldp+361,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+362,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+363,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+364,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+365,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+366,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+367,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][1U]));
    bufp->fullBit(oldp+368,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+369,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][1U]));
    bufp->fullSData(oldp+370,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][1U]),16);
    bufp->fullBit(oldp+371,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+372,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+373,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+374,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+375,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+376,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+377,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][2U]));
    bufp->fullBit(oldp+378,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+379,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][2U]));
    bufp->fullSData(oldp+380,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][2U]),16);
    bufp->fullBit(oldp+381,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+382,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+383,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+384,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+385,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+386,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+387,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [0U][3U]));
    bufp->fullBit(oldp+388,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+389,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][3U]));
    bufp->fullSData(oldp+390,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [0U][3U]),16);
    bufp->fullBit(oldp+391,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+392,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+393,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+394,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+395,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+396,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+397,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][0U]));
    bufp->fullBit(oldp+398,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+399,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][0U]));
    bufp->fullSData(oldp+400,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][0U]),16);
    bufp->fullBit(oldp+401,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+402,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+403,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+404,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+405,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+406,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+407,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][1U]));
    bufp->fullBit(oldp+408,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+409,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][1U]));
    bufp->fullSData(oldp+410,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][1U]),16);
    bufp->fullBit(oldp+411,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+412,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+413,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+414,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+415,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+416,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+417,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][2U]));
    bufp->fullBit(oldp+418,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+419,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][2U]));
    bufp->fullSData(oldp+420,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][2U]),16);
    bufp->fullBit(oldp+421,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+422,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+423,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+424,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+425,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+426,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+427,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [1U][3U]));
    bufp->fullBit(oldp+428,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+429,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][3U]));
    bufp->fullSData(oldp+430,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [1U][3U]),16);
    bufp->fullBit(oldp+431,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+432,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+433,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+434,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+435,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+436,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+437,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][0U]));
    bufp->fullBit(oldp+438,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+439,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][0U]));
    bufp->fullSData(oldp+440,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][0U]),16);
    bufp->fullBit(oldp+441,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+442,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+443,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+444,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+445,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+446,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+447,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][1U]));
    bufp->fullBit(oldp+448,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+449,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][1U]));
    bufp->fullSData(oldp+450,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][1U]),16);
    bufp->fullBit(oldp+451,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+452,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+453,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+454,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+455,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+456,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+457,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][2U]));
    bufp->fullBit(oldp+458,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+459,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][2U]));
    bufp->fullSData(oldp+460,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][2U]),16);
    bufp->fullBit(oldp+461,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+462,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+463,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+464,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+465,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+466,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+467,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [2U][3U]));
    bufp->fullBit(oldp+468,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+469,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][3U]));
    bufp->fullSData(oldp+470,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [2U][3U]),16);
    bufp->fullBit(oldp+471,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+472,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+473,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+474,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+475,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+476,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+477,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][0U]));
    bufp->fullBit(oldp+478,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+479,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][0U]));
    bufp->fullSData(oldp+480,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][0U]),16);
    bufp->fullBit(oldp+481,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+482,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+483,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+484,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+485,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+486,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+487,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][1U]));
    bufp->fullBit(oldp+488,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+489,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][1U]));
    bufp->fullSData(oldp+490,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][1U]),16);
    bufp->fullBit(oldp+491,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+492,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+493,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+494,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+495,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+496,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+497,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][2U]));
    bufp->fullBit(oldp+498,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+499,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][2U]));
    bufp->fullSData(oldp+500,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][2U]),16);
    bufp->fullBit(oldp+501,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+502,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+503,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+504,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+505,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+506,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+507,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                            [3U][3U]));
    bufp->fullBit(oldp+508,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+509,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][3U]));
    bufp->fullSData(oldp+510,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                              [3U][3U]),16);
    bufp->fullBit(oldp+511,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+512,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+513,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+514,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+515,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+516,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullCData(oldp+517,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data),4);
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+519,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+520,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+521,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+522,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+523,((1U & ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+524,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+525,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+526,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+527,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+528,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+529,((1U & ((IData)(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+530,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+531,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+532,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+533,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+534,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+535,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+536,(vlSelfRef.sa_axi_top_tb__DOT__clk));
    bufp->fullCData(oldp+537,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__next_state),3);
    bufp->fullBit(oldp+538,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__start_b_pulse));
    bufp->fullBit(oldp+539,(vlSelfRef.sa_axi_top_tb__DOT__dut__DOT__addr_gen_inst__DOT__start_ac_pulse));
}
