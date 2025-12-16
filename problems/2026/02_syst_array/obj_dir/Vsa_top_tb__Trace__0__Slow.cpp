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
    tracep->declBus(c+428,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_a_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_c_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"o_c_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"i_a_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+233,0,"o_c_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+7,0,"c_vld_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"i_a_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+54,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+233,0,"o_c_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+220,0,"we_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"a_vld_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+222,0,"c_vld_line_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+223,0,"a_line_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+225,0,"c_vld_line_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"c_vld_line_out_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+235,0,"c_line_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dl_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+223,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("gen_sr[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+432,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+237,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+238+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+240,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+433,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+242+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
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
    tracep->pushPrefix("gen_sr[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+434,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+246,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+247+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
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
    tracep->popPrefix();
    tracep->pushPrefix("dl_a_vld_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_sr[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+432,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+252,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+253+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+433,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+256,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+257+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+434,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+261,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+262+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+266,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_out_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+233,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("gen_sr[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+434,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+269+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+433,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+275,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+276+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
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
    tracep->pushPrefix("gen_sr[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+432,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+281,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+282+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_in_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+222,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_sr[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+432,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+285,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+286+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+433,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+289,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+290+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+434,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+294,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+295+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+299,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dl_c_vld_out_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_sr[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+434,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+300,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+301+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+304,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+305,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+433,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+306,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+307+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+432,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+311,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+312+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+313,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+314,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sa_core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"i_we_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"i_a_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+222,0,"i_c_vld_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+223,0,"i_a_line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+225,0,"o_c_vld_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+235,0,"o_c_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("we_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+56,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+61,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+66,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+71,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+76,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_vld_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+81,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+86,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+91,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+96,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+101,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_vld_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+111,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+116,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+121,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+126,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+131,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+132,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+133,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+134,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+135,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+136,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+137,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+138,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+140,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+141,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+142,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+146,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+150,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+151,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+153,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+155,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("c_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+13,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+23,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+28,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+33,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+315,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+319,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+320,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+321,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+325,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+326,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+327,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+332,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+333,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+337,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+338,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+339,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+343,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+344,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+345,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+349,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+350,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+351,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+355,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+357,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+361,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+362,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+363,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+369,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+373,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+375,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+379,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+380,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+381,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_pe_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+387,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+391,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+393,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+399,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+403,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+404,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_pe_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"i_a_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"i_c_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"i_c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+405,0,"o_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"o_a_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"o_c_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"o_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+409,0,"o_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+410,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("we_line_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"o_we_line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+411,0,"we_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"we_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dl_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+431,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_sr[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+432,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+412,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+413+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+433,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+416,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+417+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+419,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sr[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sr_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+434,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+427,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+421,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("reg_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+422+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+425,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+426,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+428,(0x00000010U),32);
    bufp->fullIData(oldp+429,(4U),32);
    bufp->fullIData(oldp+430,(0x00000010U),32);
    bufp->fullIData(oldp+431,(4U),32);
    bufp->fullIData(oldp+432,(1U),32);
    bufp->fullIData(oldp+433,(2U),32);
    bufp->fullIData(oldp+434,(3U),32);
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
    bufp->fullBit(oldp+2,(vlSelfRef.sa_top_tb__DOT__i_we));
    bufp->fullBit(oldp+3,(vlSelfRef.sa_top_tb__DOT__i_a_vld));
    bufp->fullBit(oldp+4,(vlSelfRef.sa_top_tb__DOT__i_c_vld));
    bufp->fullQData(oldp+5,(vlSelfRef.sa_top_tb__DOT__i_a_line),64);
    bufp->fullBit(oldp+7,(vlSelfRef.sa_top_tb__DOT__c_vld_correct));
    bufp->fullSData(oldp+8,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_top_tb__DOT__i_a_line 
                                                    >> 0x00000010U)))),16);
    bufp->fullSData(oldp+9,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_top_tb__DOT__i_a_line 
                                                    >> 0x00000020U)))),16);
    bufp->fullSData(oldp+10,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_top_tb__DOT__i_a_line 
                                                     >> 0x00000030U)))),16);
    bufp->fullCData(oldp+11,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_top_tb__DOT__i_a_vld))))),4);
    bufp->fullCData(oldp+12,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_top_tb__DOT__i_c_vld))))),4);
    bufp->fullSData(oldp+13,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->fullSData(oldp+17,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][4U]),16);
    bufp->fullSData(oldp+18,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+19,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+20,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->fullSData(oldp+21,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->fullSData(oldp+22,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][4U]),16);
    bufp->fullSData(oldp+23,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->fullSData(oldp+26,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->fullSData(oldp+27,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][4U]),16);
    bufp->fullSData(oldp+28,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->fullSData(oldp+29,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->fullSData(oldp+30,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->fullSData(oldp+31,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][3U]),16);
    bufp->fullSData(oldp+32,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][4U]),16);
    bufp->fullSData(oldp+33,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][0U]),16);
    bufp->fullSData(oldp+34,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][1U]),16);
    bufp->fullSData(oldp+35,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][2U]),16);
    bufp->fullSData(oldp+36,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][3U]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [4U][4U]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->fullSData(oldp+53,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                             [3U][3U]),16);
    bufp->fullBit(oldp+54,((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                             >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                       [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                               [1U] 
                                               & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                               [2U])))));
    bufp->fullCData(oldp+55,(((((2U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                       >> 2U)) | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                [0U]) << 2U) | ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                                [2U]))),4);
    bufp->fullBit(oldp+56,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [0U][0U]));
    bufp->fullBit(oldp+57,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [0U][1U]));
    bufp->fullBit(oldp+58,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [0U][2U]));
    bufp->fullBit(oldp+59,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [0U][3U]));
    bufp->fullBit(oldp+60,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [0U][4U]));
    bufp->fullBit(oldp+61,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [1U][0U]));
    bufp->fullBit(oldp+62,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [1U][1U]));
    bufp->fullBit(oldp+63,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [1U][2U]));
    bufp->fullBit(oldp+64,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [1U][3U]));
    bufp->fullBit(oldp+65,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [1U][4U]));
    bufp->fullBit(oldp+66,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [2U][0U]));
    bufp->fullBit(oldp+67,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [2U][1U]));
    bufp->fullBit(oldp+68,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [2U][2U]));
    bufp->fullBit(oldp+69,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [2U][3U]));
    bufp->fullBit(oldp+70,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [2U][4U]));
    bufp->fullBit(oldp+71,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [3U][0U]));
    bufp->fullBit(oldp+72,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [3U][1U]));
    bufp->fullBit(oldp+73,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [3U][2U]));
    bufp->fullBit(oldp+74,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [3U][3U]));
    bufp->fullBit(oldp+75,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [3U][4U]));
    bufp->fullBit(oldp+76,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [4U][0U]));
    bufp->fullBit(oldp+77,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [4U][1U]));
    bufp->fullBit(oldp+78,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [4U][2U]));
    bufp->fullBit(oldp+79,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [4U][3U]));
    bufp->fullBit(oldp+80,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                           [4U][4U]));
    bufp->fullBit(oldp+81,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][0U]));
    bufp->fullBit(oldp+82,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][1U]));
    bufp->fullBit(oldp+83,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][2U]));
    bufp->fullBit(oldp+84,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][3U]));
    bufp->fullBit(oldp+85,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][4U]));
    bufp->fullBit(oldp+86,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][0U]));
    bufp->fullBit(oldp+87,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][1U]));
    bufp->fullBit(oldp+88,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][2U]));
    bufp->fullBit(oldp+89,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][3U]));
    bufp->fullBit(oldp+90,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][4U]));
    bufp->fullBit(oldp+91,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][0U]));
    bufp->fullBit(oldp+92,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][1U]));
    bufp->fullBit(oldp+93,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][2U]));
    bufp->fullBit(oldp+94,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][3U]));
    bufp->fullBit(oldp+95,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][4U]));
    bufp->fullBit(oldp+96,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][0U]));
    bufp->fullBit(oldp+97,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][1U]));
    bufp->fullBit(oldp+98,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][2U]));
    bufp->fullBit(oldp+99,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][3U]));
    bufp->fullBit(oldp+100,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][4U]));
    bufp->fullBit(oldp+101,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][0U]));
    bufp->fullBit(oldp+102,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][1U]));
    bufp->fullBit(oldp+103,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][2U]));
    bufp->fullBit(oldp+104,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][3U]));
    bufp->fullBit(oldp+105,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [4U][4U]));
    bufp->fullBit(oldp+106,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+107,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+108,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+109,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+110,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][4U]));
    bufp->fullBit(oldp+111,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+112,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+113,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+114,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+115,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][4U]));
    bufp->fullBit(oldp+116,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+117,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+118,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+119,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+120,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][4U]));
    bufp->fullBit(oldp+121,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+122,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+123,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+124,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+125,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][4U]));
    bufp->fullBit(oldp+126,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][0U]));
    bufp->fullBit(oldp+127,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][1U]));
    bufp->fullBit(oldp+128,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][2U]));
    bufp->fullBit(oldp+129,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][3U]));
    bufp->fullBit(oldp+130,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [4U][4U]));
    bufp->fullSData(oldp+131,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][0U]),16);
    bufp->fullSData(oldp+132,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][1U]),16);
    bufp->fullSData(oldp+133,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][2U]),16);
    bufp->fullSData(oldp+134,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][3U]),16);
    bufp->fullSData(oldp+135,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][4U]),16);
    bufp->fullSData(oldp+136,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][0U]),16);
    bufp->fullSData(oldp+137,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][1U]),16);
    bufp->fullSData(oldp+138,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][2U]),16);
    bufp->fullSData(oldp+139,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][3U]),16);
    bufp->fullSData(oldp+140,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][4U]),16);
    bufp->fullSData(oldp+141,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][0U]),16);
    bufp->fullSData(oldp+142,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][1U]),16);
    bufp->fullSData(oldp+143,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][2U]),16);
    bufp->fullSData(oldp+144,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][3U]),16);
    bufp->fullSData(oldp+145,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][4U]),16);
    bufp->fullSData(oldp+146,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][0U]),16);
    bufp->fullSData(oldp+147,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][1U]),16);
    bufp->fullSData(oldp+148,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][2U]),16);
    bufp->fullSData(oldp+149,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][3U]),16);
    bufp->fullSData(oldp+150,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][4U]),16);
    bufp->fullSData(oldp+151,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][0U]),16);
    bufp->fullSData(oldp+152,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][1U]),16);
    bufp->fullSData(oldp+153,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][2U]),16);
    bufp->fullSData(oldp+154,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][3U]),16);
    bufp->fullSData(oldp+155,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [4U][4U]),16);
    bufp->fullBit(oldp+156,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][0U]));
    bufp->fullBit(oldp+157,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][0U]));
    bufp->fullBit(oldp+158,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][0U]));
    bufp->fullSData(oldp+159,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][0U]),16);
    bufp->fullBit(oldp+160,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][1U]));
    bufp->fullBit(oldp+161,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][1U]));
    bufp->fullBit(oldp+162,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][1U]));
    bufp->fullSData(oldp+163,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][1U]),16);
    bufp->fullBit(oldp+164,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][2U]));
    bufp->fullBit(oldp+165,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][2U]));
    bufp->fullBit(oldp+166,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][2U]));
    bufp->fullSData(oldp+167,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][2U]),16);
    bufp->fullBit(oldp+168,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [0U][3U]));
    bufp->fullBit(oldp+169,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [0U][3U]));
    bufp->fullBit(oldp+170,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [0U][3U]));
    bufp->fullSData(oldp+171,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [0U][3U]),16);
    bufp->fullBit(oldp+172,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][0U]));
    bufp->fullBit(oldp+173,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][0U]));
    bufp->fullBit(oldp+174,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][0U]));
    bufp->fullSData(oldp+175,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][0U]),16);
    bufp->fullBit(oldp+176,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][1U]));
    bufp->fullBit(oldp+177,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][1U]));
    bufp->fullBit(oldp+178,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][1U]));
    bufp->fullSData(oldp+179,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][1U]),16);
    bufp->fullBit(oldp+180,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][2U]));
    bufp->fullBit(oldp+181,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][2U]));
    bufp->fullBit(oldp+182,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][2U]));
    bufp->fullSData(oldp+183,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][2U]),16);
    bufp->fullBit(oldp+184,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [1U][3U]));
    bufp->fullBit(oldp+185,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [1U][3U]));
    bufp->fullBit(oldp+186,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [1U][3U]));
    bufp->fullSData(oldp+187,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [1U][3U]),16);
    bufp->fullBit(oldp+188,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][0U]));
    bufp->fullBit(oldp+189,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][0U]));
    bufp->fullBit(oldp+190,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][0U]));
    bufp->fullSData(oldp+191,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][0U]),16);
    bufp->fullBit(oldp+192,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][1U]));
    bufp->fullBit(oldp+193,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][1U]));
    bufp->fullBit(oldp+194,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][1U]));
    bufp->fullSData(oldp+195,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][1U]),16);
    bufp->fullBit(oldp+196,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][2U]));
    bufp->fullBit(oldp+197,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][2U]));
    bufp->fullBit(oldp+198,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][2U]));
    bufp->fullSData(oldp+199,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][2U]),16);
    bufp->fullBit(oldp+200,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [2U][3U]));
    bufp->fullBit(oldp+201,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [2U][3U]));
    bufp->fullBit(oldp+202,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [2U][3U]));
    bufp->fullSData(oldp+203,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [2U][3U]),16);
    bufp->fullBit(oldp+204,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][0U]));
    bufp->fullBit(oldp+205,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][0U]));
    bufp->fullBit(oldp+206,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][0U]));
    bufp->fullSData(oldp+207,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][0U]),16);
    bufp->fullBit(oldp+208,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][1U]));
    bufp->fullBit(oldp+209,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][1U]));
    bufp->fullBit(oldp+210,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][1U]));
    bufp->fullSData(oldp+211,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][1U]),16);
    bufp->fullBit(oldp+212,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][2U]));
    bufp->fullBit(oldp+213,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][2U]));
    bufp->fullBit(oldp+214,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][2U]));
    bufp->fullSData(oldp+215,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][2U]),16);
    bufp->fullBit(oldp+216,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                            [3U][3U]));
    bufp->fullBit(oldp+217,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                            [3U][3U]));
    bufp->fullBit(oldp+218,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                            [3U][3U]));
    bufp->fullSData(oldp+219,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                              [3U][3U]),16);
    bufp->fullCData(oldp+220,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data),4);
    bufp->fullCData(oldp+221,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data),4);
    bufp->fullCData(oldp+222,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data),4);
    bufp->fullQData(oldp+223,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data),64);
    bufp->fullCData(oldp+225,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out),4);
    bufp->fullBit(oldp+226,((1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out))));
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                   >> 1U))));
    bufp->fullBit(oldp+228,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                   >> 2U))));
    bufp->fullCData(oldp+229,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data),4);
    bufp->fullBit(oldp+230,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 1U))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 2U))));
    bufp->fullBit(oldp+232,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                   >> 3U))));
    bufp->fullQData(oldp+233,((((QData)((IData)((((IData)(
                                                          (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                           >> 0x00000030U)) 
                                                  << 0x00000010U) 
                                                 | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                                 [0U]))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                                                    [1U] 
                                                                    << 0x00000010U) 
                                                                   | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                                                   [2U]))))),64);
    bufp->fullQData(oldp+235,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out),64);
    bufp->fullSData(oldp+237,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                              [0U]),16);
    bufp->fullSData(oldp+238,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullIData(oldp+239,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+240,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+241,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                              [1U]),16);
    bufp->fullSData(oldp+242,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+243,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullIData(oldp+244,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+245,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+246,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                              [2U]),16);
    bufp->fullSData(oldp+247,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+248,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullSData(oldp+249,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->fullIData(oldp+250,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+251,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+252,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                            [0U]));
    bufp->fullBit(oldp+253,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+254,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+255,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+256,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U]));
    bufp->fullBit(oldp+257,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+258,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+259,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+260,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+261,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                            [2U]));
    bufp->fullBit(oldp+262,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+263,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+264,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+265,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+266,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+267,((0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out))),16);
    bufp->fullSData(oldp+268,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                              [2U]),16);
    bufp->fullSData(oldp+269,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+270,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullSData(oldp+271,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->fullIData(oldp+272,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+273,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+274,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                      >> 0x00000010U)))),16);
    bufp->fullSData(oldp+275,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                              [1U]),16);
    bufp->fullSData(oldp+276,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullSData(oldp+277,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->fullIData(oldp+278,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+279,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+280,((0x0000ffffU & (IData)(
                                                     (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                      >> 0x00000020U)))),16);
    bufp->fullSData(oldp+281,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                              [0U]),16);
    bufp->fullSData(oldp+282,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->fullIData(oldp+283,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+284,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+285,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                            [0U]));
    bufp->fullBit(oldp+286,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+287,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+288,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+289,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U]));
    bufp->fullBit(oldp+290,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+291,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+292,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+293,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+294,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                            [2U]));
    bufp->fullBit(oldp+295,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+296,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+297,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+298,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+299,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+300,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                            [2U]));
    bufp->fullBit(oldp+301,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+302,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+303,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+304,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+305,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+306,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                            [1U]));
    bufp->fullBit(oldp+307,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+308,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+309,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+310,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+311,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [0U]));
    bufp->fullBit(oldp+312,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+313,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+314,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+315,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+316,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+317,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+318,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+319,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+320,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+321,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+322,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+323,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+324,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+325,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+326,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+327,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+328,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+329,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+330,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+331,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+332,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+333,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+334,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+335,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+336,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+337,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+338,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+339,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+340,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+341,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+342,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+343,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+344,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+345,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+346,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+347,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+348,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+349,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+350,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+351,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+352,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+353,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+354,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+355,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+356,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+357,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+358,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+359,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+360,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+361,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+362,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+363,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+364,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+365,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+366,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+367,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+368,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+369,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+370,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+371,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+372,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+373,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+374,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+375,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+376,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+377,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+378,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+379,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+380,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+381,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+382,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+383,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+384,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+385,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+386,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+387,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+388,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+389,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+390,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+391,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+392,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+393,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+394,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+395,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+396,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+397,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+398,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+399,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+400,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+401,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+402,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+403,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+404,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullBit(oldp+405,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
    bufp->fullBit(oldp+406,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
    bufp->fullBit(oldp+407,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
    bufp->fullSData(oldp+408,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
    bufp->fullSData(oldp+409,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
    bufp->fullSData(oldp+410,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->fullCData(oldp+411,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg),4);
    bufp->fullBit(oldp+412,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                            [0U]));
    bufp->fullBit(oldp+413,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullIData(oldp+414,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+415,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+416,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                            [1U]));
    bufp->fullBit(oldp+417,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+418,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullIData(oldp+419,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+420,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+421,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                            [2U]));
    bufp->fullBit(oldp+422,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->fullBit(oldp+423,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->fullBit(oldp+424,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->fullIData(oldp+425,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+426,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+427,(vlSelfRef.sa_top_tb__DOT__clk));
}
