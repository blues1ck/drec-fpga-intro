// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsa_top_tb__Syms.h"


VL_ATTR_COLD void Vsa_top_tb___024root__trace_init_sub__TOP__0(Vsa_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("sa_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"o_a_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"i_a_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"i_we_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"o_we_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_we_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_c_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"o_c_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+480,0,"i_c_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+482,0,"o_c_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_c_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+55,0,"o_c_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+9,0,"c_vld_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_a_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"o_a_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"i_a_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"i_we_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"o_we_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_we_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"i_c_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"o_c_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+480,0,"i_c_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+482,0,"o_c_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_c_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+55,0,"o_c_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+479,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+483,0,"CREDIT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+473,0,"a_fifo_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"a_fifo_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"a_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"a_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"a_fifo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+474,0,"we_fifo_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"we_fifo_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"we_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"we_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"we_fifo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"c_in_fifo_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"c_in_fifo_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"c_in_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"c_in_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+67,0,"c_in_fifo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"a_fifo_data_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"a_fifo_data_in_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+67,0,"c_in_fifo_data_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+480,0,"c_in_fifo_data_in_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+64,0,"i_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"i_a_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"i_c_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"i_a_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+69,0,"o_c_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+55,0,"o_c_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+476,0,"credit_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"credit_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"credit_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"c_vld_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"we_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"a_vld_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"c_vld_line_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+75,0,"a_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+77,0,"c_vld_line_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"c_vld_line_out_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+79,0,"c_line_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("a_fifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+484,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+58,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+485,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+81,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+89,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+58,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_in_fifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+484,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+480,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+67,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+485,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+92,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+100,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+65,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("credit_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+483,0,"MAX_CREDITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"i_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"i_dec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"o_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+479,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+103,0,"credits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("dl_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+75,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+486,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+106+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+485,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+110,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+487,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+117+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_a_vld_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+486,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+123,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+124+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
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
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+485,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+127,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+128+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+131,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+487,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+132,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+133+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_out_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+79,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("gen_shift_reg[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+487,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+485,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+147+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+486,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+153+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+155,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_in_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+486,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+156,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+157+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+485,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+160,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+161+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+163,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+487,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+165,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+166+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_out_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+487,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+172,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
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
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+485,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+179,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+180+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+486,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+185,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+186+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+188,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sa_core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"i_we_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"i_a_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"i_c_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+75,0,"i_a_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+77,0,"o_c_vld_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+79,0,"o_c_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("we_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+189,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+194,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+199,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+204,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+209,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_vld_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+214,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+219,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+224,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+229,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+234,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_vld_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+239,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+244,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+249,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+254,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+259,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+264,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+265,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+266,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+267,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+269,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+270,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+271,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+272,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+273,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+274,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+275,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+276,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+277,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+278,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+279,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+280,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+281,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+282,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+283,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+284,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+285,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+286,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+287,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+288,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+15,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+20,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+25,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+30,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+293,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+297,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+298,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+303,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+307,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+308,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+313,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+318,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+323,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+327,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+328,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+333,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+338,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+343,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+347,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+348,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+353,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+357,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+358,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+363,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+373,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+377,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+378,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+383,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+388,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+393,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+403,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+413,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+417,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+418,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+423,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+427,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+428,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+433,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+437,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+438,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+443,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+447,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+448,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("we_fifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"i_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+62,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+449,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+450,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+451,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+62,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+452,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("we_line_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"o_we_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"we_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+453,0,"we_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dl_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+479,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+453,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_shift_reg[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+486,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+455,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+456+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+457,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+458,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+485,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+459,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+460,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+461+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+463,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+464,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_shift_reg[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+487,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+472,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+466,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("shift_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+467+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+470,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+471,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsa_top_tb___024root__trace_init_top(Vsa_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_init_top\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsa_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsa_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsa_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsa_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsa_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsa_top_tb___024root__trace_register(Vsa_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_register\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsa_top_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsa_top_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsa_top_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsa_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsa_top_tb___024root__trace_const_0_sub_0(Vsa_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsa_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_const_0\n"); );
    // Body
    Vsa_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsa_top_tb___024root*>(voidSelf);
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsa_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsa_top_tb___024root__trace_const_0_sub_0(Vsa_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_const_0_sub_0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+478,(0x00000010U),32);
    bufp->fullIData(oldp+479,(4U),32);
    bufp->fullQData(oldp+480,(vlSelfRef.sa_top_tb__DOT__i_c_data),64);
    bufp->fullBit(oldp+482,(vlSelfRef.sa_top_tb__DOT__o_c_valid));
    bufp->fullIData(oldp+483,(8U),32);
    bufp->fullIData(oldp+484,(0x00000040U),32);
    bufp->fullIData(oldp+485,(2U),32);
    bufp->fullIData(oldp+486,(1U),32);
    bufp->fullIData(oldp+487,(3U),32);
}

VL_ATTR_COLD void Vsa_top_tb___024root__trace_full_0_sub_0(Vsa_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsa_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_full_0\n"); );
    // Body
    Vsa_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsa_top_tb___024root*>(voidSelf);
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsa_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsa_top_tb___024root__trace_full_0_sub_0(Vsa_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_full_0_sub_0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.sa_top_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.sa_top_tb__DOT__i_a_valid));
    bufp->fullQData(oldp+3,(vlSelfRef.sa_top_tb__DOT__i_a_data),64);
    bufp->fullBit(oldp+5,(vlSelfRef.sa_top_tb__DOT__i_we_valid));
    bufp->fullBit(oldp+6,(vlSelfRef.sa_top_tb__DOT__i_we_data));
    bufp->fullBit(oldp+7,(vlSelfRef.sa_top_tb__DOT__i_c_valid));
    bufp->fullBit(oldp+8,(vlSelfRef.sa_top_tb__DOT__i_c_ready));
    bufp->fullBit(oldp+9,(vlSelfRef.sa_top_tb__DOT__c_vld_correct));
    bufp->fullSData(oldp+10,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][4U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][4U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][4U]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->fullSData(oldp+28,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][3U]),16);
    bufp->fullSData(oldp+29,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][4U]),16);
    bufp->fullSData(oldp+30,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][0U]),16);
    bufp->fullSData(oldp+31,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][1U]),16);
    bufp->fullSData(oldp+32,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][2U]),16);
    bufp->fullSData(oldp+33,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][3U]),16);
    bufp->fullSData(oldp+34,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][4U]),16);
    bufp->fullSData(oldp+35,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+36,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][3U]),16);
    bufp->fullCData(oldp+51,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg),4);
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full)))));
    bufp->fullBit(oldp+53,((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full)))));
    bufp->fullBit(oldp+54,((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full)))));
    bufp->fullQData(oldp+55,((((QData)((IData)((((IData)(
                                                         (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                          >> 0x00000030U)) 
                                                 << 0x00000010U) 
                                                | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                                [0U]))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                                   [1U] 
                                                                   << 0x00000010U) 
                                                                  | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                                  [2U]))))),64);
    bufp->fullBit(oldp+57,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->fullBit(oldp+58,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full));
    bufp->fullBit(oldp+59,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_empty));
    bufp->fullQData(oldp+60,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data),64);
    bufp->fullBit(oldp+62,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full));
    bufp->fullBit(oldp+63,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_empty));
    bufp->fullBit(oldp+64,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__i_we));
    bufp->fullBit(oldp+65,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full));
    bufp->fullBit(oldp+66,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_empty));
    bufp->fullQData(oldp+67,((((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem[
                                               (((IData)(0x0000003fU) 
                                                 + 
                                                 (0x000000ffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x0000001fU 
                                           & VL_SHIFTL_III(8,8,32, 
                                                           (3U 
                                                            & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U)))
                                    ? 0x00000020U : 
                                   ((IData)(0x00000040U) 
                                    - (0x0000001fU 
                                       & VL_SHIFTL_III(8,8,32, 
                                                       (3U 
                                                        & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U))))) 
                              | (((0U == (0x0000001fU 
                                          & VL_SHIFTL_III(8,8,32, 
                                                          (3U 
                                                           & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem[
                                                             (((IData)(0x0000001fU) 
                                                               + 
                                                               (0x000000ffU 
                                                                & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U))))) 
                                 | ((QData)((IData)(
                                                    vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem[
                                                    (7U 
                                                     & (VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U) 
                                                        >> 5U))])) 
                                    >> (0x0000001fU 
                                        & VL_SHIFTL_III(8,8,32, 
                                                        (3U 
                                                         & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr)), 6U)))))),64);
    bufp->fullBit(oldp+69,(((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                              >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                        [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                [1U] 
                                                & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                [2U]))) 
                            & (0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits)))));
    bufp->fullBit(oldp+70,((0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits))));
    bufp->fullBit(oldp+71,((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                             >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                       [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                               [1U] 
                                               & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                               [2U])))));
    bufp->fullCData(oldp+72,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data),4);
    bufp->fullCData(oldp+73,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data),4);
    bufp->fullCData(oldp+74,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data),4);
    bufp->fullQData(oldp+75,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data),64);
    bufp->fullCData(oldp+77,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out),4);
    bufp->fullCData(oldp+78,(((((2U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                       >> 2U)) | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                [0U]) << 2U) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                [2U]))),4);
    bufp->fullQData(oldp+79,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out),64);
    bufp->fullWData(oldp+81,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem),256);
    bufp->fullCData(oldp+89,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr),3);
    bufp->fullCData(oldp+90,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr),3);
    bufp->fullIData(oldp+91,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullWData(oldp+92,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem),256);
    bufp->fullCData(oldp+100,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr),3);
    bufp->fullCData(oldp+101,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr),3);
    bufp->fullIData(oldp+102,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+103,(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits),4);
    bufp->fullSData(oldp+104,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+105,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                              [0U]),16);
    bufp->fullSData(oldp+106,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullIData(oldp+107,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+108,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+109,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+110,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                              [1U]),16);
    bufp->fullSData(oldp+111,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+112,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullIData(oldp+113,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+114,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+115,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
                                                      >> 0x00000030U)))),16);
    bufp->fullSData(oldp+116,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                              [2U]),16);
    bufp->fullSData(oldp+117,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+118,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullSData(oldp+119,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]),16);
    bufp->fullIData(oldp+120,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+121,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+122,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data))))),4);
    bufp->fullBit(oldp+123,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+124,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+125,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+126,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+127,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+128,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+129,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+130,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+131,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+132,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+133,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+134,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+135,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+136,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+137,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+138,((0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out))),16);
    bufp->fullSData(oldp+139,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                              [2U]),16);
    bufp->fullSData(oldp+140,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+141,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullSData(oldp+142,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[2]),16);
    bufp->fullIData(oldp+143,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+144,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+145,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+146,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                              [1U]),16);
    bufp->fullSData(oldp+147,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullSData(oldp+148,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
    bufp->fullIData(oldp+149,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+150,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+151,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+152,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                              [0U]),16);
    bufp->fullSData(oldp+153,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
    bufp->fullIData(oldp+154,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+155,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+156,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+157,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+158,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+159,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+160,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+161,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+162,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+163,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+164,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+165,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+166,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+167,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+168,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+169,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+170,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+171,((1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out))));
    bufp->fullBit(oldp+172,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+173,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+174,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+175,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+176,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+177,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+178,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                   >> 1U))));
    bufp->fullBit(oldp+179,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+180,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+181,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+182,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+183,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+184,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                   >> 2U))));
    bufp->fullBit(oldp+185,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+186,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+187,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+188,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+189,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][0U]));
    bufp->fullBit(oldp+190,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][1U]));
    bufp->fullBit(oldp+191,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][2U]));
    bufp->fullBit(oldp+192,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][3U]));
    bufp->fullBit(oldp+193,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][4U]));
    bufp->fullBit(oldp+194,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][0U]));
    bufp->fullBit(oldp+195,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][1U]));
    bufp->fullBit(oldp+196,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][2U]));
    bufp->fullBit(oldp+197,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][3U]));
    bufp->fullBit(oldp+198,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][4U]));
    bufp->fullBit(oldp+199,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][0U]));
    bufp->fullBit(oldp+200,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][1U]));
    bufp->fullBit(oldp+201,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][2U]));
    bufp->fullBit(oldp+202,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][3U]));
    bufp->fullBit(oldp+203,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][4U]));
    bufp->fullBit(oldp+204,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][0U]));
    bufp->fullBit(oldp+205,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][1U]));
    bufp->fullBit(oldp+206,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][2U]));
    bufp->fullBit(oldp+207,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][3U]));
    bufp->fullBit(oldp+208,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][4U]));
    bufp->fullBit(oldp+209,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [4U][0U]));
    bufp->fullBit(oldp+210,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [4U][1U]));
    bufp->fullBit(oldp+211,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [4U][2U]));
    bufp->fullBit(oldp+212,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [4U][3U]));
    bufp->fullBit(oldp+213,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [4U][4U]));
    bufp->fullBit(oldp+214,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+215,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+216,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+217,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+218,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][4U]));
    bufp->fullBit(oldp+219,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+220,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+221,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+222,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+223,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][4U]));
    bufp->fullBit(oldp+224,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+225,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+226,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+227,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+228,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][4U]));
    bufp->fullBit(oldp+229,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+230,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+231,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+232,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+233,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][4U]));
    bufp->fullBit(oldp+234,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][0U]));
    bufp->fullBit(oldp+235,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][1U]));
    bufp->fullBit(oldp+236,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][2U]));
    bufp->fullBit(oldp+237,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][3U]));
    bufp->fullBit(oldp+238,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][4U]));
    bufp->fullBit(oldp+239,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+240,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+241,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+242,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+243,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][4U]));
    bufp->fullBit(oldp+244,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+245,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+246,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+247,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+248,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][4U]));
    bufp->fullBit(oldp+249,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+250,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+251,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+252,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+253,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][4U]));
    bufp->fullBit(oldp+254,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+255,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+256,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+257,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+258,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][4U]));
    bufp->fullBit(oldp+259,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][0U]));
    bufp->fullBit(oldp+260,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][1U]));
    bufp->fullBit(oldp+261,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][2U]));
    bufp->fullBit(oldp+262,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][3U]));
    bufp->fullBit(oldp+263,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][4U]));
    bufp->fullSData(oldp+264,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][0U]),16);
    bufp->fullSData(oldp+265,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][1U]),16);
    bufp->fullSData(oldp+266,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][2U]),16);
    bufp->fullSData(oldp+267,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][3U]),16);
    bufp->fullSData(oldp+268,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][4U]),16);
    bufp->fullSData(oldp+269,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][0U]),16);
    bufp->fullSData(oldp+270,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][1U]),16);
    bufp->fullSData(oldp+271,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][2U]),16);
    bufp->fullSData(oldp+272,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][3U]),16);
    bufp->fullSData(oldp+273,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][4U]),16);
    bufp->fullSData(oldp+274,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][0U]),16);
    bufp->fullSData(oldp+275,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][1U]),16);
    bufp->fullSData(oldp+276,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][2U]),16);
    bufp->fullSData(oldp+277,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][3U]),16);
    bufp->fullSData(oldp+278,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][4U]),16);
    bufp->fullSData(oldp+279,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][0U]),16);
    bufp->fullSData(oldp+280,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][1U]),16);
    bufp->fullSData(oldp+281,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][2U]),16);
    bufp->fullSData(oldp+282,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][3U]),16);
    bufp->fullSData(oldp+283,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][4U]),16);
    bufp->fullSData(oldp+284,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][0U]),16);
    bufp->fullSData(oldp+285,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][1U]),16);
    bufp->fullSData(oldp+286,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][2U]),16);
    bufp->fullSData(oldp+287,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][3U]),16);
    bufp->fullSData(oldp+288,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][4U]),16);
    bufp->fullBit(oldp+289,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][0U]));
    bufp->fullBit(oldp+290,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+291,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][0U]));
    bufp->fullSData(oldp+292,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][0U]),16);
    bufp->fullBit(oldp+293,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+294,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+295,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+296,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+297,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+298,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+299,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][1U]));
    bufp->fullBit(oldp+300,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+301,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][1U]));
    bufp->fullSData(oldp+302,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][1U]),16);
    bufp->fullBit(oldp+303,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+304,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+305,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+306,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+307,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+308,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+309,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][2U]));
    bufp->fullBit(oldp+310,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+311,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][2U]));
    bufp->fullSData(oldp+312,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][2U]),16);
    bufp->fullBit(oldp+313,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+314,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+315,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+316,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+317,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+318,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+319,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][3U]));
    bufp->fullBit(oldp+320,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+321,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][3U]));
    bufp->fullSData(oldp+322,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][3U]),16);
    bufp->fullBit(oldp+323,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+324,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+325,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+326,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+327,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+328,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+329,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][0U]));
    bufp->fullBit(oldp+330,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+331,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][0U]));
    bufp->fullSData(oldp+332,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][0U]),16);
    bufp->fullBit(oldp+333,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+334,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+335,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+336,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+337,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+338,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+339,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][1U]));
    bufp->fullBit(oldp+340,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+341,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][1U]));
    bufp->fullSData(oldp+342,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][1U]),16);
    bufp->fullBit(oldp+343,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+344,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+345,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+346,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+347,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+348,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+349,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][2U]));
    bufp->fullBit(oldp+350,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+351,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][2U]));
    bufp->fullSData(oldp+352,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][2U]),16);
    bufp->fullBit(oldp+353,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+354,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+355,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+356,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+357,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+358,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+359,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][3U]));
    bufp->fullBit(oldp+360,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+361,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][3U]));
    bufp->fullSData(oldp+362,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][3U]),16);
    bufp->fullBit(oldp+363,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+364,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+365,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+366,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+367,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+368,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+369,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][0U]));
    bufp->fullBit(oldp+370,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+371,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][0U]));
    bufp->fullSData(oldp+372,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][0U]),16);
    bufp->fullBit(oldp+373,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+374,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+375,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+376,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+377,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+378,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+379,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][1U]));
    bufp->fullBit(oldp+380,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+381,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][1U]));
    bufp->fullSData(oldp+382,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][1U]),16);
    bufp->fullBit(oldp+383,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+384,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+385,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+386,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+387,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+388,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+389,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][2U]));
    bufp->fullBit(oldp+390,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+391,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][2U]));
    bufp->fullSData(oldp+392,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][2U]),16);
    bufp->fullBit(oldp+393,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+394,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+395,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+396,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+397,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+398,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+399,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][3U]));
    bufp->fullBit(oldp+400,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+401,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][3U]));
    bufp->fullSData(oldp+402,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][3U]),16);
    bufp->fullBit(oldp+403,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+404,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+405,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+406,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+407,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+408,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+409,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][0U]));
    bufp->fullBit(oldp+410,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+411,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][0U]));
    bufp->fullSData(oldp+412,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][0U]),16);
    bufp->fullBit(oldp+413,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+414,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+415,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+416,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+417,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+418,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+419,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][1U]));
    bufp->fullBit(oldp+420,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+421,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][1U]));
    bufp->fullSData(oldp+422,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][1U]),16);
    bufp->fullBit(oldp+423,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+424,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+425,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+426,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+427,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+428,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+429,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][2U]));
    bufp->fullBit(oldp+430,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+431,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][2U]));
    bufp->fullSData(oldp+432,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][2U]),16);
    bufp->fullBit(oldp+433,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+434,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+435,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+436,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+437,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+438,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+439,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][3U]));
    bufp->fullBit(oldp+440,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+441,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][3U]));
    bufp->fullSData(oldp+442,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][3U]),16);
    bufp->fullBit(oldp+443,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+444,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+445,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+446,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+447,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+448,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullCData(oldp+449,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__mem),4);
    bufp->fullCData(oldp+450,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr),3);
    bufp->fullCData(oldp+451,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr),3);
    bufp->fullIData(oldp+452,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+453,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data),4);
    bufp->fullBit(oldp+454,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+455,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                            [0U]));
    bufp->fullBit(oldp+456,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullIData(oldp+457,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+458,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+459,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+460,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                            [1U]));
    bufp->fullBit(oldp+461,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+462,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullIData(oldp+463,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+464,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+465,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullBit(oldp+466,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                            [2U]));
    bufp->fullBit(oldp+467,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
    bufp->fullBit(oldp+468,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
    bufp->fullBit(oldp+469,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
    bufp->fullIData(oldp+470,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+471,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+472,(vlSelfRef.sa_top_tb__DOT__clk));
    bufp->fullBit(oldp+473,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full)) 
                             & (IData)(vlSelfRef.sa_top_tb__DOT__i_a_valid))));
    bufp->fullBit(oldp+474,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full)) 
                             & (IData)(vlSelfRef.sa_top_tb__DOT__i_we_valid))));
    bufp->fullBit(oldp+475,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full)) 
                             & (IData)(vlSelfRef.sa_top_tb__DOT__i_c_valid))));
    bufp->fullBit(oldp+476,(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc));
    bufp->fullBit(oldp+477,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc)) 
                             & ((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                  >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                            [0U] & 
                                            (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                             [1U] & 
                                             vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                             [2U]))) 
                                & (0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits))))));
}
