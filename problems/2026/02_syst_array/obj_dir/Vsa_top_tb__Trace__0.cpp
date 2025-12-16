// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsa_top_tb__Syms.h"


void Vsa_top_tb___024root__trace_chg_0_sub_0(Vsa_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsa_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_chg_0\n"); );
    // Body
    Vsa_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsa_top_tb___024root*>(voidSelf);
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsa_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsa_top_tb___024root__trace_chg_0_sub_0(Vsa_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_chg_0_sub_0\n"); );
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.sa_top_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.sa_top_tb__DOT__i_we));
        bufp->chgBit(oldp+2,(vlSelfRef.sa_top_tb__DOT__i_a_vld));
        bufp->chgBit(oldp+3,(vlSelfRef.sa_top_tb__DOT__i_c_vld));
        bufp->chgQData(oldp+4,(vlSelfRef.sa_top_tb__DOT__i_a_line),64);
        bufp->chgBit(oldp+6,(vlSelfRef.sa_top_tb__DOT__c_vld_correct));
        bufp->chgSData(oldp+7,((0x0000ffffU & (IData)(
                                                      (vlSelfRef.sa_top_tb__DOT__i_a_line 
                                                       >> 0x00000010U)))),16);
        bufp->chgSData(oldp+8,((0x0000ffffU & (IData)(
                                                      (vlSelfRef.sa_top_tb__DOT__i_a_line 
                                                       >> 0x00000020U)))),16);
        bufp->chgSData(oldp+9,((0x0000ffffU & (IData)(
                                                      (vlSelfRef.sa_top_tb__DOT__i_a_line 
                                                       >> 0x00000030U)))),16);
        bufp->chgCData(oldp+10,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_top_tb__DOT__i_a_vld))))),4);
        bufp->chgCData(oldp+11,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_top_tb__DOT__i_c_vld))))),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgSData(oldp+12,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][0U]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][1U]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][2U]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][3U]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][4U]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][1U]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][2U]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][3U]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][4U]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][0U]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][1U]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][2U]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][3U]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][4U]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][0U]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][1U]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][2U]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][3U]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][4U]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][0U]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][1U]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][2U]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][3U]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][4U]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][0U]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][1U]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][2U]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][3U]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][1U]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][2U]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][3U]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][0U]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][1U]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][2U]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][3U]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][0U]),16);
        bufp->chgSData(oldp+50,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][1U]),16);
        bufp->chgSData(oldp+51,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][2U]),16);
        bufp->chgSData(oldp+52,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][3U]),16);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+53,((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                          [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                                  [1U] 
                                                  & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                                  [2U])))));
        bufp->chgCData(oldp+54,(((((2U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                          >> 2U)) | 
                                   vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                   [0U]) << 2U) | (
                                                   (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                                    [1U] 
                                                    << 1U) 
                                                   | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                                   [2U]))),4);
        bufp->chgBit(oldp+55,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [0U][0U]));
        bufp->chgBit(oldp+56,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [0U][1U]));
        bufp->chgBit(oldp+57,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [0U][2U]));
        bufp->chgBit(oldp+58,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [0U][3U]));
        bufp->chgBit(oldp+59,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [0U][4U]));
        bufp->chgBit(oldp+60,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [1U][0U]));
        bufp->chgBit(oldp+61,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [1U][1U]));
        bufp->chgBit(oldp+62,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [1U][2U]));
        bufp->chgBit(oldp+63,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [1U][3U]));
        bufp->chgBit(oldp+64,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [1U][4U]));
        bufp->chgBit(oldp+65,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [2U][0U]));
        bufp->chgBit(oldp+66,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [2U][1U]));
        bufp->chgBit(oldp+67,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [2U][2U]));
        bufp->chgBit(oldp+68,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [2U][3U]));
        bufp->chgBit(oldp+69,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [2U][4U]));
        bufp->chgBit(oldp+70,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [3U][0U]));
        bufp->chgBit(oldp+71,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [3U][1U]));
        bufp->chgBit(oldp+72,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [3U][2U]));
        bufp->chgBit(oldp+73,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [3U][3U]));
        bufp->chgBit(oldp+74,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [3U][4U]));
        bufp->chgBit(oldp+75,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [4U][0U]));
        bufp->chgBit(oldp+76,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [4U][1U]));
        bufp->chgBit(oldp+77,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [4U][2U]));
        bufp->chgBit(oldp+78,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [4U][3U]));
        bufp->chgBit(oldp+79,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                              [4U][4U]));
        bufp->chgBit(oldp+80,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [0U][0U]));
        bufp->chgBit(oldp+81,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [0U][1U]));
        bufp->chgBit(oldp+82,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [0U][2U]));
        bufp->chgBit(oldp+83,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [0U][3U]));
        bufp->chgBit(oldp+84,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [0U][4U]));
        bufp->chgBit(oldp+85,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [1U][0U]));
        bufp->chgBit(oldp+86,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [1U][1U]));
        bufp->chgBit(oldp+87,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [1U][2U]));
        bufp->chgBit(oldp+88,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [1U][3U]));
        bufp->chgBit(oldp+89,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [1U][4U]));
        bufp->chgBit(oldp+90,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [2U][0U]));
        bufp->chgBit(oldp+91,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [2U][1U]));
        bufp->chgBit(oldp+92,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [2U][2U]));
        bufp->chgBit(oldp+93,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [2U][3U]));
        bufp->chgBit(oldp+94,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [2U][4U]));
        bufp->chgBit(oldp+95,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [3U][0U]));
        bufp->chgBit(oldp+96,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [3U][1U]));
        bufp->chgBit(oldp+97,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [3U][2U]));
        bufp->chgBit(oldp+98,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [3U][3U]));
        bufp->chgBit(oldp+99,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                              [3U][4U]));
        bufp->chgBit(oldp+100,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][0U]));
        bufp->chgBit(oldp+101,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][1U]));
        bufp->chgBit(oldp+102,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][2U]));
        bufp->chgBit(oldp+103,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][3U]));
        bufp->chgBit(oldp+104,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][4U]));
        bufp->chgBit(oldp+105,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][0U]));
        bufp->chgBit(oldp+106,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][1U]));
        bufp->chgBit(oldp+107,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][2U]));
        bufp->chgBit(oldp+108,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][3U]));
        bufp->chgBit(oldp+109,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][4U]));
        bufp->chgBit(oldp+110,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][0U]));
        bufp->chgBit(oldp+111,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][1U]));
        bufp->chgBit(oldp+112,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][2U]));
        bufp->chgBit(oldp+113,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][3U]));
        bufp->chgBit(oldp+114,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][4U]));
        bufp->chgBit(oldp+115,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][0U]));
        bufp->chgBit(oldp+116,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][1U]));
        bufp->chgBit(oldp+117,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][2U]));
        bufp->chgBit(oldp+118,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][3U]));
        bufp->chgBit(oldp+119,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][4U]));
        bufp->chgBit(oldp+120,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][0U]));
        bufp->chgBit(oldp+121,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][1U]));
        bufp->chgBit(oldp+122,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][2U]));
        bufp->chgBit(oldp+123,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][3U]));
        bufp->chgBit(oldp+124,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][4U]));
        bufp->chgBit(oldp+125,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][0U]));
        bufp->chgBit(oldp+126,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][1U]));
        bufp->chgBit(oldp+127,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][2U]));
        bufp->chgBit(oldp+128,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][3U]));
        bufp->chgBit(oldp+129,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][4U]));
        bufp->chgSData(oldp+130,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][0U]),16);
        bufp->chgSData(oldp+131,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][1U]),16);
        bufp->chgSData(oldp+132,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][2U]),16);
        bufp->chgSData(oldp+133,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][3U]),16);
        bufp->chgSData(oldp+134,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][4U]),16);
        bufp->chgSData(oldp+135,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][0U]),16);
        bufp->chgSData(oldp+136,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][1U]),16);
        bufp->chgSData(oldp+137,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][2U]),16);
        bufp->chgSData(oldp+138,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][3U]),16);
        bufp->chgSData(oldp+139,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][4U]),16);
        bufp->chgSData(oldp+140,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][0U]),16);
        bufp->chgSData(oldp+141,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][1U]),16);
        bufp->chgSData(oldp+142,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][2U]),16);
        bufp->chgSData(oldp+143,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][3U]),16);
        bufp->chgSData(oldp+144,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][4U]),16);
        bufp->chgSData(oldp+145,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][0U]),16);
        bufp->chgSData(oldp+146,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][1U]),16);
        bufp->chgSData(oldp+147,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][2U]),16);
        bufp->chgSData(oldp+148,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][3U]),16);
        bufp->chgSData(oldp+149,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][4U]),16);
        bufp->chgSData(oldp+150,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][0U]),16);
        bufp->chgSData(oldp+151,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][1U]),16);
        bufp->chgSData(oldp+152,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][2U]),16);
        bufp->chgSData(oldp+153,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][3U]),16);
        bufp->chgSData(oldp+154,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][4U]),16);
        bufp->chgBit(oldp+155,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][0U]));
        bufp->chgBit(oldp+156,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][0U]));
        bufp->chgBit(oldp+157,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][0U]));
        bufp->chgSData(oldp+158,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][0U]),16);
        bufp->chgBit(oldp+159,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][1U]));
        bufp->chgBit(oldp+160,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][1U]));
        bufp->chgBit(oldp+161,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][1U]));
        bufp->chgSData(oldp+162,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][1U]),16);
        bufp->chgBit(oldp+163,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][2U]));
        bufp->chgBit(oldp+164,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][2U]));
        bufp->chgBit(oldp+165,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][2U]));
        bufp->chgSData(oldp+166,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][2U]),16);
        bufp->chgBit(oldp+167,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][3U]));
        bufp->chgBit(oldp+168,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][3U]));
        bufp->chgBit(oldp+169,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][3U]));
        bufp->chgSData(oldp+170,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][3U]),16);
        bufp->chgBit(oldp+171,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][0U]));
        bufp->chgBit(oldp+172,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][0U]));
        bufp->chgBit(oldp+173,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][0U]));
        bufp->chgSData(oldp+174,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][0U]),16);
        bufp->chgBit(oldp+175,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][1U]));
        bufp->chgBit(oldp+176,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][1U]));
        bufp->chgBit(oldp+177,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][1U]));
        bufp->chgSData(oldp+178,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][1U]),16);
        bufp->chgBit(oldp+179,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][2U]));
        bufp->chgBit(oldp+180,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][2U]));
        bufp->chgBit(oldp+181,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][2U]));
        bufp->chgSData(oldp+182,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][2U]),16);
        bufp->chgBit(oldp+183,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][3U]));
        bufp->chgBit(oldp+184,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][3U]));
        bufp->chgBit(oldp+185,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][3U]));
        bufp->chgSData(oldp+186,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][3U]),16);
        bufp->chgBit(oldp+187,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][0U]));
        bufp->chgBit(oldp+188,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][0U]));
        bufp->chgBit(oldp+189,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][0U]));
        bufp->chgSData(oldp+190,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][0U]),16);
        bufp->chgBit(oldp+191,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][1U]));
        bufp->chgBit(oldp+192,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][1U]));
        bufp->chgBit(oldp+193,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][1U]));
        bufp->chgSData(oldp+194,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][1U]),16);
        bufp->chgBit(oldp+195,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][2U]));
        bufp->chgBit(oldp+196,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][2U]));
        bufp->chgBit(oldp+197,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][2U]));
        bufp->chgSData(oldp+198,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][2U]),16);
        bufp->chgBit(oldp+199,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][3U]));
        bufp->chgBit(oldp+200,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][3U]));
        bufp->chgBit(oldp+201,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][3U]));
        bufp->chgSData(oldp+202,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][3U]),16);
        bufp->chgBit(oldp+203,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][0U]));
        bufp->chgBit(oldp+204,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][0U]));
        bufp->chgBit(oldp+205,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][0U]));
        bufp->chgSData(oldp+206,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][0U]),16);
        bufp->chgBit(oldp+207,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][1U]));
        bufp->chgBit(oldp+208,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][1U]));
        bufp->chgBit(oldp+209,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][1U]));
        bufp->chgSData(oldp+210,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][1U]),16);
        bufp->chgBit(oldp+211,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][2U]));
        bufp->chgBit(oldp+212,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][2U]));
        bufp->chgBit(oldp+213,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][2U]));
        bufp->chgSData(oldp+214,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][2U]),16);
        bufp->chgBit(oldp+215,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][3U]));
        bufp->chgBit(oldp+216,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][3U]));
        bufp->chgBit(oldp+217,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][3U]));
        bufp->chgSData(oldp+218,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][3U]),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgCData(oldp+219,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data),4);
        bufp->chgCData(oldp+220,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data),4);
        bufp->chgCData(oldp+221,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data),4);
        bufp->chgQData(oldp+222,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data),64);
        bufp->chgCData(oldp+224,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out),4);
        bufp->chgBit(oldp+225,((1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                      >> 1U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                      >> 2U))));
        bufp->chgCData(oldp+228,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data),4);
        bufp->chgBit(oldp+229,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                      >> 1U))));
        bufp->chgBit(oldp+230,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                      >> 2U))));
        bufp->chgBit(oldp+231,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                      >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+232,((((QData)((IData)(
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
                                                     [2U]))))),64);
        bufp->chgQData(oldp+234,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out),64);
        bufp->chgSData(oldp+236,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                 [0U]),16);
        bufp->chgSData(oldp+237,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
        bufp->chgIData(oldp+238,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+239,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+240,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                 [1U]),16);
        bufp->chgSData(oldp+241,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
        bufp->chgSData(oldp+242,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]),16);
        bufp->chgIData(oldp+243,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+244,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+245,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                                 [2U]),16);
        bufp->chgSData(oldp+246,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]),16);
        bufp->chgSData(oldp+247,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]),16);
        bufp->chgSData(oldp+248,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]),16);
        bufp->chgIData(oldp+249,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+250,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+251,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                               [0U]));
        bufp->chgBit(oldp+252,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgIData(oldp+253,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+254,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+255,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                               [1U]));
        bufp->chgBit(oldp+256,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+257,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgIData(oldp+258,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+259,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+260,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                               [2U]));
        bufp->chgBit(oldp+261,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+262,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgBit(oldp+263,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
        bufp->chgIData(oldp+264,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+265,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+266,((0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out))),16);
        bufp->chgSData(oldp+267,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                                 [2U]),16);
        bufp->chgSData(oldp+268,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]),16);
        bufp->chgSData(oldp+269,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]),16);
        bufp->chgSData(oldp+270,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]),16);
        bufp->chgIData(oldp+271,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+272,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+273,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                         >> 0x00000010U)))),16);
        bufp->chgSData(oldp+274,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                                 [1U]),16);
        bufp->chgSData(oldp+275,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
        bufp->chgSData(oldp+276,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]),16);
        bufp->chgIData(oldp+277,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+278,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+279,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                         >> 0x00000020U)))),16);
        bufp->chgSData(oldp+280,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                                 [0U]),16);
        bufp->chgSData(oldp+281,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
        bufp->chgIData(oldp+282,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+283,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+284,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                               [0U]));
        bufp->chgBit(oldp+285,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgIData(oldp+286,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+287,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+288,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                               [1U]));
        bufp->chgBit(oldp+289,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+290,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgIData(oldp+291,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+292,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+293,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                               [2U]));
        bufp->chgBit(oldp+294,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+295,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgBit(oldp+296,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
        bufp->chgIData(oldp+297,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+298,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+299,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data
                               [2U]));
        bufp->chgBit(oldp+300,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+301,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgBit(oldp+302,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]));
        bufp->chgIData(oldp+303,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+304,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+305,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                               [1U]));
        bufp->chgBit(oldp+306,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+307,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgIData(oldp+308,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+309,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+310,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                               [0U]));
        bufp->chgBit(oldp+311,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgIData(oldp+312,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+313,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+314,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+315,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+316,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+317,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+318,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+319,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+320,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+321,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+322,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+323,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+324,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+325,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+326,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+327,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+328,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+329,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+330,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+331,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+332,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+333,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+334,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+335,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+336,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+337,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+338,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+339,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+340,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+341,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+342,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+343,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+344,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+345,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+346,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+347,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+348,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+349,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+350,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+351,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+352,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+353,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+354,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+355,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+356,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+357,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+358,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+359,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+360,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+361,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+362,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+363,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+364,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+365,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+366,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+367,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+368,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+369,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+370,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+371,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+372,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+373,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+374,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+375,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+376,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+377,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+378,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+379,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+380,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+381,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+382,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+383,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+384,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+385,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+386,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+387,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+388,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+389,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+390,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+391,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+392,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+393,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+394,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+395,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+396,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+397,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+398,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+399,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+400,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+401,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+402,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+403,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+404,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+405,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+406,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+407,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+408,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+409,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgCData(oldp+410,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg),4);
        bufp->chgBit(oldp+411,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data
                               [0U]));
        bufp->chgBit(oldp+412,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgIData(oldp+413,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+414,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+415,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data
                               [1U]));
        bufp->chgBit(oldp+416,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+417,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgIData(oldp+418,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+419,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+420,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data
                               [2U]));
        bufp->chgBit(oldp+421,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
        bufp->chgBit(oldp+422,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
        bufp->chgBit(oldp+423,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
        bufp->chgIData(oldp+424,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+425,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+426,(vlSelfRef.sa_top_tb__DOT__clk));
}

void Vsa_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_top_tb___024root__trace_cleanup\n"); );
    // Body
    Vsa_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsa_top_tb___024root*>(voidSelf);
    Vsa_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
