// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.i_vld));
    bufp->chgBit(oldp+3,(vlSelfRef.o_rdy));
    bufp->chgBit(oldp+4,(vlSelfRef.i_rdy));
    bufp->chgBit(oldp+5,(vlSelfRef.o_vld));
    bufp->chgSData(oldp+6,((0x0000ffffU & (IData)(vlSelfRef.i_ab_line))),16);
    bufp->chgSData(oldp+7,((0x0000ffffU & (IData)((vlSelfRef.i_ab_line 
                                                   >> 0x00000010U)))),16);
    bufp->chgSData(oldp+8,((0x0000ffffU & (IData)((vlSelfRef.i_ab_line 
                                                   >> 0x00000020U)))),16);
    bufp->chgSData(oldp+9,((0x0000ffffU & (IData)((vlSelfRef.i_ab_line 
                                                   >> 0x00000030U)))),16);
    bufp->chgSData(oldp+10,((0x0000ffffU & (IData)(vlSelfRef.o_c_line))),16);
    bufp->chgSData(oldp+11,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.o_c_line 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+12,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.o_c_line 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+13,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.o_c_line 
                                                    >> 0x00000030U)))),16);
    bufp->chgBit(oldp+14,(vlSelfRef.sa_credit_top__DOT__clk));
    bufp->chgBit(oldp+15,(vlSelfRef.sa_credit_top__DOT__rst_n));
    bufp->chgBit(oldp+16,(vlSelfRef.sa_credit_top__DOT__i_vld));
    bufp->chgBit(oldp+17,(vlSelfRef.sa_credit_top__DOT__o_rdy));
    bufp->chgBit(oldp+18,(vlSelfRef.sa_credit_top__DOT__i_rdy));
    bufp->chgBit(oldp+19,(vlSelfRef.sa_credit_top__DOT__o_vld));
    bufp->chgSData(oldp+20,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__i_ab_line))),16);
    bufp->chgSData(oldp+21,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__i_ab_line 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+22,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__i_ab_line 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+23,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__i_ab_line 
                                                    >> 0x00000030U)))),16);
    bufp->chgSData(oldp+24,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__o_c_line))),16);
    bufp->chgSData(oldp+25,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__o_c_line 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+26,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__o_c_line 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+27,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__o_c_line 
                                                    >> 0x00000030U)))),16);
    bufp->chgBit(oldp+28,(vlSelfRef.sa_credit_top__DOT__a_vld));
    bufp->chgCData(oldp+29,(vlSelfRef.sa_credit_top__DOT__count),3);
    bufp->chgBit(oldp+30,(vlSelfRef.sa_credit_top__DOT__is_a));
    bufp->chgBit(oldp+31,(vlSelfRef.sa_credit_top__DOT__last_line));
    bufp->chgBit(oldp+32,(vlSelfRef.sa_credit_top__DOT__c_vld_top2sa));
    bufp->chgBit(oldp+33,(vlSelfRef.sa_credit_top__DOT__we));
    bufp->chgBit(oldp+34,(vlSelfRef.sa_credit_top__DOT__c_vld_sa2top));
    bufp->chgSData(oldp+35,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo))),16);
    bufp->chgSData(oldp+36,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+37,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+38,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__c_line_sa2fifo 
                                                    >> 0x00000030U)))),16);
    bufp->chgBit(oldp+39,(vlSelfRef.sa_credit_top__DOT__fifo_full));
    bufp->chgBit(oldp+40,(vlSelfRef.sa_credit_top__DOT__fifo_empty));
    bufp->chgBit(oldp+41,(vlSelfRef.sa_credit_top__DOT__fifo_wr_en));
    bufp->chgBit(oldp+42,(vlSelfRef.sa_credit_top__DOT__fifo_rd_en));
    bufp->chgBit(oldp+43,(vlSelfRef.sa_credit_top__DOT__inc));
    bufp->chgBit(oldp+44,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__clk));
    bufp->chgBit(oldp+45,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__rst_n));
    bufp->chgBit(oldp+46,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_inc));
    bufp->chgBit(oldp+47,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__i_vld));
    bufp->chgBit(oldp+48,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_vld));
    bufp->chgBit(oldp+49,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__o_rdy));
    bufp->chgCData(oldp+50,(vlSelfRef.sa_credit_top__DOT__credit_inst__DOT__count),4);
    bufp->chgBit(oldp+51,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__clk));
    bufp->chgBit(oldp+52,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rst_n));
    bufp->chgBit(oldp+53,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_en));
    bufp->chgQData(oldp+54,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_wr_data),64);
    bufp->chgBit(oldp+56,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__i_rd_en));
    bufp->chgQData(oldp+57,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_rd_data),64);
    bufp->chgBit(oldp+59,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_full));
    bufp->chgBit(oldp+60,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__o_empty));
    bufp->chgQData(oldp+61,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[0]),64);
    bufp->chgQData(oldp+63,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[1]),64);
    bufp->chgQData(oldp+65,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[2]),64);
    bufp->chgQData(oldp+67,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[3]),64);
    bufp->chgQData(oldp+69,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[4]),64);
    bufp->chgQData(oldp+71,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[5]),64);
    bufp->chgQData(oldp+73,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[6]),64);
    bufp->chgQData(oldp+75,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__fifo_mem[7]),64);
    bufp->chgCData(oldp+77,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_ptr),3);
    bufp->chgCData(oldp+78,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_ptr),3);
    bufp->chgCData(oldp+79,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__count),4);
    bufp->chgBit(oldp+80,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__wr_en));
    bufp->chgBit(oldp+81,(vlSelfRef.sa_credit_top__DOT__fifo_inst__DOT__rd_en));
    bufp->chgBit(oldp+82,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__clk));
    bufp->chgBit(oldp+83,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__rst_n));
    bufp->chgBit(oldp+84,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_we));
    bufp->chgBit(oldp+85,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+86,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+87,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line))),16);
    bufp->chgSData(oldp+88,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+89,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+90,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__i_a_line 
                                                    >> 0x00000030U)))),16);
    bufp->chgBit(oldp+91,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+92,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line))),16);
    bufp->chgSData(oldp+93,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+94,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+95,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__o_c_line 
                                                    >> 0x00000030U)))),16);
    bufp->chgCData(oldp+96,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line),4);
    bufp->chgCData(oldp+97,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_vld_line),4);
    bufp->chgCData(oldp+98,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_top2core),4);
    bufp->chgSData(oldp+99,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line))),16);
    bufp->chgSData(oldp+100,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+101,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+102,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__a_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgCData(oldp+103,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_core2top),4);
    bufp->chgCData(oldp+104,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_vld_line_delayed_core2top),4);
    bufp->chgSData(oldp+105,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top))),16);
    bufp->chgSData(oldp+106,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+107,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+108,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__c_line_core2top 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+109,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk));
    bufp->chgBit(oldp+110,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n));
    bufp->chgSData(oldp+111,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data))),16);
    bufp->chgSData(oldp+112,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+113,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+114,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgSData(oldp+115,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data))),16);
    bufp->chgSData(oldp+116,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+117,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+118,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+119,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+120,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+121,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+122,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+123,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgIData(oldp+124,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+125,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+126,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+127,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+128,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+129,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+130,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+131,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgIData(oldp+132,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+133,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+134,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+135,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+136,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+137,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+138,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+139,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgSData(oldp+140,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->chgIData(oldp+141,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+142,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+143,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk));
    bufp->chgBit(oldp+144,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n));
    bufp->chgBit(oldp+145,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data))));
    bufp->chgBit(oldp+146,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+147,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+148,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+149,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data))));
    bufp->chgBit(oldp+150,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+151,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+152,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+153,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+154,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+155,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+156,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+157,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+158,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+159,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+160,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+161,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+162,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+163,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+164,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+165,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+166,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+167,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+168,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+169,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+170,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+171,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+172,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+173,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+174,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+175,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+176,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+177,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__clk));
    bufp->chgBit(oldp+178,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__rst_n));
    bufp->chgSData(oldp+179,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data))),16);
    bufp->chgSData(oldp+180,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+181,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+182,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__i_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgSData(oldp+183,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data))),16);
    bufp->chgSData(oldp+184,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+185,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+186,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__o_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+187,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+188,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+189,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+190,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+191,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+192,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgSData(oldp+193,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->chgIData(oldp+194,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+195,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+196,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+197,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+198,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+199,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+200,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+201,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgIData(oldp+202,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+203,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+204,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+205,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+206,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+207,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+208,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgIData(oldp+209,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+210,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+211,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__clk));
    bufp->chgBit(oldp+212,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__rst_n));
    bufp->chgBit(oldp+213,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data))));
    bufp->chgBit(oldp+214,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+215,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+216,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+217,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data))));
    bufp->chgBit(oldp+218,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+219,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+220,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+221,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+222,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+223,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+224,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+225,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+226,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+227,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+228,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+229,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+230,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+231,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+232,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+233,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+234,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+235,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+236,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+237,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+238,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+239,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+240,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+241,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+242,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+243,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+244,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_core2top_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+245,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__clk));
    bufp->chgBit(oldp+246,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__rst_n));
    bufp->chgBit(oldp+247,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data))));
    bufp->chgBit(oldp+248,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+249,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+250,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+251,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data))));
    bufp->chgBit(oldp+252,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+253,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+254,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+255,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+256,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+257,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+258,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+259,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+260,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+261,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+262,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+263,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+264,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+265,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+266,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+267,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+268,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+269,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+270,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+271,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+272,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+273,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+274,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+275,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+276,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+277,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+278,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__dl_c_vld_top2core_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+279,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk));
    bufp->chgBit(oldp+280,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n));
    bufp->chgCData(oldp+281,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line),4);
    bufp->chgCData(oldp+282,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line),4);
    bufp->chgCData(oldp+283,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line),4);
    bufp->chgSData(oldp+284,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line))),16);
    bufp->chgSData(oldp+285,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+286,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+287,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgCData(oldp+288,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line),4);
    bufp->chgSData(oldp+289,((0x0000ffffU & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line))),16);
    bufp->chgSData(oldp+290,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+291,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+292,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+293,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [0U][0U]));
    bufp->chgBit(oldp+294,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [0U][1U]));
    bufp->chgBit(oldp+295,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [0U][2U]));
    bufp->chgBit(oldp+296,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [0U][3U]));
    bufp->chgBit(oldp+297,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [0U][4U]));
    bufp->chgBit(oldp+298,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [1U][0U]));
    bufp->chgBit(oldp+299,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [1U][1U]));
    bufp->chgBit(oldp+300,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [1U][2U]));
    bufp->chgBit(oldp+301,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [1U][3U]));
    bufp->chgBit(oldp+302,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [1U][4U]));
    bufp->chgBit(oldp+303,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [2U][0U]));
    bufp->chgBit(oldp+304,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [2U][1U]));
    bufp->chgBit(oldp+305,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [2U][2U]));
    bufp->chgBit(oldp+306,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [2U][3U]));
    bufp->chgBit(oldp+307,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [2U][4U]));
    bufp->chgBit(oldp+308,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [3U][0U]));
    bufp->chgBit(oldp+309,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [3U][1U]));
    bufp->chgBit(oldp+310,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [3U][2U]));
    bufp->chgBit(oldp+311,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [3U][3U]));
    bufp->chgBit(oldp+312,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [3U][4U]));
    bufp->chgBit(oldp+313,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [4U][0U]));
    bufp->chgBit(oldp+314,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [4U][1U]));
    bufp->chgBit(oldp+315,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [4U][2U]));
    bufp->chgBit(oldp+316,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [4U][3U]));
    bufp->chgBit(oldp+317,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we
                           [4U][4U]));
    bufp->chgBit(oldp+318,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [0U][0U]));
    bufp->chgBit(oldp+319,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [0U][1U]));
    bufp->chgBit(oldp+320,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [0U][2U]));
    bufp->chgBit(oldp+321,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [0U][3U]));
    bufp->chgBit(oldp+322,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [0U][4U]));
    bufp->chgBit(oldp+323,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [1U][0U]));
    bufp->chgBit(oldp+324,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [1U][1U]));
    bufp->chgBit(oldp+325,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [1U][2U]));
    bufp->chgBit(oldp+326,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [1U][3U]));
    bufp->chgBit(oldp+327,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [1U][4U]));
    bufp->chgBit(oldp+328,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [2U][0U]));
    bufp->chgBit(oldp+329,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [2U][1U]));
    bufp->chgBit(oldp+330,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [2U][2U]));
    bufp->chgBit(oldp+331,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [2U][3U]));
    bufp->chgBit(oldp+332,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [2U][4U]));
    bufp->chgBit(oldp+333,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [3U][0U]));
    bufp->chgBit(oldp+334,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [3U][1U]));
    bufp->chgBit(oldp+335,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [3U][2U]));
    bufp->chgBit(oldp+336,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [3U][3U]));
    bufp->chgBit(oldp+337,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [3U][4U]));
    bufp->chgBit(oldp+338,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [4U][0U]));
    bufp->chgBit(oldp+339,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [4U][1U]));
    bufp->chgBit(oldp+340,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [4U][2U]));
    bufp->chgBit(oldp+341,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [4U][3U]));
    bufp->chgBit(oldp+342,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld
                           [4U][4U]));
    bufp->chgBit(oldp+343,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [0U][0U]));
    bufp->chgBit(oldp+344,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [0U][1U]));
    bufp->chgBit(oldp+345,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [0U][2U]));
    bufp->chgBit(oldp+346,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [0U][3U]));
    bufp->chgBit(oldp+347,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [0U][4U]));
    bufp->chgBit(oldp+348,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [1U][0U]));
    bufp->chgBit(oldp+349,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [1U][1U]));
    bufp->chgBit(oldp+350,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [1U][2U]));
    bufp->chgBit(oldp+351,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [1U][3U]));
    bufp->chgBit(oldp+352,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [1U][4U]));
    bufp->chgBit(oldp+353,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [2U][0U]));
    bufp->chgBit(oldp+354,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [2U][1U]));
    bufp->chgBit(oldp+355,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [2U][2U]));
    bufp->chgBit(oldp+356,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [2U][3U]));
    bufp->chgBit(oldp+357,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [2U][4U]));
    bufp->chgBit(oldp+358,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [3U][0U]));
    bufp->chgBit(oldp+359,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [3U][1U]));
    bufp->chgBit(oldp+360,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [3U][2U]));
    bufp->chgBit(oldp+361,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [3U][3U]));
    bufp->chgBit(oldp+362,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [3U][4U]));
    bufp->chgBit(oldp+363,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [4U][0U]));
    bufp->chgBit(oldp+364,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [4U][1U]));
    bufp->chgBit(oldp+365,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [4U][2U]));
    bufp->chgBit(oldp+366,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [4U][3U]));
    bufp->chgBit(oldp+367,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld
                           [4U][4U]));
    bufp->chgSData(oldp+368,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [0U][0U]),16);
    bufp->chgSData(oldp+369,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [0U][1U]),16);
    bufp->chgSData(oldp+370,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [0U][2U]),16);
    bufp->chgSData(oldp+371,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [0U][3U]),16);
    bufp->chgSData(oldp+372,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [0U][4U]),16);
    bufp->chgSData(oldp+373,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [1U][0U]),16);
    bufp->chgSData(oldp+374,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [1U][1U]),16);
    bufp->chgSData(oldp+375,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [1U][2U]),16);
    bufp->chgSData(oldp+376,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [1U][3U]),16);
    bufp->chgSData(oldp+377,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [1U][4U]),16);
    bufp->chgSData(oldp+378,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [2U][0U]),16);
    bufp->chgSData(oldp+379,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [2U][1U]),16);
    bufp->chgSData(oldp+380,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [2U][2U]),16);
    bufp->chgSData(oldp+381,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [2U][3U]),16);
    bufp->chgSData(oldp+382,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [2U][4U]),16);
    bufp->chgSData(oldp+383,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [3U][0U]),16);
    bufp->chgSData(oldp+384,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [3U][1U]),16);
    bufp->chgSData(oldp+385,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [3U][2U]),16);
    bufp->chgSData(oldp+386,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [3U][3U]),16);
    bufp->chgSData(oldp+387,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [3U][4U]),16);
    bufp->chgSData(oldp+388,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [4U][0U]),16);
    bufp->chgSData(oldp+389,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [4U][1U]),16);
    bufp->chgSData(oldp+390,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [4U][2U]),16);
    bufp->chgSData(oldp+391,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [4U][3U]),16);
    bufp->chgSData(oldp+392,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a
                             [4U][4U]),16);
    bufp->chgSData(oldp+393,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [0U][0U]),16);
    bufp->chgSData(oldp+394,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [0U][1U]),16);
    bufp->chgSData(oldp+395,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [0U][2U]),16);
    bufp->chgSData(oldp+396,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [0U][3U]),16);
    bufp->chgSData(oldp+397,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [0U][4U]),16);
    bufp->chgSData(oldp+398,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [1U][0U]),16);
    bufp->chgSData(oldp+399,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [1U][1U]),16);
    bufp->chgSData(oldp+400,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [1U][2U]),16);
    bufp->chgSData(oldp+401,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [1U][3U]),16);
    bufp->chgSData(oldp+402,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [1U][4U]),16);
    bufp->chgSData(oldp+403,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [2U][0U]),16);
    bufp->chgSData(oldp+404,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [2U][1U]),16);
    bufp->chgSData(oldp+405,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [2U][2U]),16);
    bufp->chgSData(oldp+406,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [2U][3U]),16);
    bufp->chgSData(oldp+407,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [2U][4U]),16);
    bufp->chgSData(oldp+408,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [3U][0U]),16);
    bufp->chgSData(oldp+409,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [3U][1U]),16);
    bufp->chgSData(oldp+410,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [3U][2U]),16);
    bufp->chgSData(oldp+411,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [3U][3U]),16);
    bufp->chgSData(oldp+412,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [3U][4U]),16);
    bufp->chgSData(oldp+413,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [4U][0U]),16);
    bufp->chgSData(oldp+414,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [4U][1U]),16);
    bufp->chgSData(oldp+415,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [4U][2U]),16);
    bufp->chgSData(oldp+416,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [4U][3U]),16);
    bufp->chgSData(oldp+417,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c
                             [4U][4U]),16);
    bufp->chgBit(oldp+418,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+419,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+420,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+421,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+422,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+423,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+424,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+425,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+426,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+427,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+428,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+429,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+430,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+431,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+432,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+433,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+434,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+435,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+436,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+437,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+438,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+439,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+440,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+441,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+442,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+443,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+444,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+445,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+446,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+447,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+448,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+449,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+450,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+451,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+452,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+453,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+454,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+455,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+456,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+457,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+458,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+459,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+460,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+461,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+462,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+463,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+464,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+465,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+466,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+467,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+468,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+469,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__0__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+470,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+471,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+472,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+473,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+474,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+475,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+476,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+477,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+478,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+479,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+480,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+481,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+482,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+483,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+484,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+485,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+486,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+487,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+488,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+489,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+490,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+491,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+492,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+493,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+494,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+495,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+496,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+497,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+498,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+499,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+500,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+501,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+502,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+503,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+504,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+505,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+506,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+507,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+508,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+509,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+510,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+511,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+512,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+513,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+514,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+515,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+516,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+517,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+518,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+519,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+520,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+521,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__1__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+522,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+523,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+524,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+525,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+526,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+527,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+528,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+529,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+530,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+531,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+532,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+533,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+534,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+535,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+536,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+537,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+538,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+539,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+540,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+541,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+542,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+543,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+544,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+545,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+546,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+547,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+548,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+549,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+550,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+551,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+552,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+553,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+554,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+555,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+556,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+557,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+558,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+559,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+560,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+561,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+562,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+563,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+564,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+565,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+566,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+567,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+568,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+569,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+570,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+571,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+572,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+573,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__2__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+574,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+575,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+576,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+577,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+578,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+579,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+580,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+581,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+582,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+583,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+584,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+585,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+586,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__0__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+587,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+588,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+589,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+590,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+591,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+592,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+593,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+594,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+595,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+596,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+597,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+598,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+599,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__1__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+600,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+601,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+602,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+603,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+604,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+605,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+606,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+607,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+608,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+609,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+610,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+611,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+612,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__2__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+613,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+614,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+615,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+616,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+617,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+618,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+619,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+620,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+621,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+622,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+623,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+624,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+625,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__sa_core_inst__DOT__pe_outer__BRA__3__KET____DOT__pe_inner__BRA__3__KET____DOT__pe_inst__DOT__b),16);
    bufp->chgBit(oldp+626,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk));
    bufp->chgBit(oldp+627,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n));
    bufp->chgBit(oldp+628,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we));
    bufp->chgCData(oldp+629,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line),4);
    bufp->chgCData(oldp+630,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift),4);
    bufp->chgCData(oldp+631,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen),4);
    bufp->chgBit(oldp+632,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk));
    bufp->chgBit(oldp+633,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n));
    bufp->chgBit(oldp+634,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
    bufp->chgBit(oldp+635,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+636,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+637,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+638,((1U & (IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data))));
    bufp->chgBit(oldp+639,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+640,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+641,((1U & ((IData)(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+642,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+643,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+644,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+645,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+646,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+647,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+648,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+649,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+650,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+651,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+652,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+653,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+654,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+655,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+656,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+657,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+658,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+659,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+660,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+661,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+662,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+663,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+664,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+665,(vlSelfRef.sa_credit_top__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__sr_gen__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
