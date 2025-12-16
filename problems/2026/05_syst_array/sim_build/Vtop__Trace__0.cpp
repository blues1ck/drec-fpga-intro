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
    bufp->chgBit(oldp+2,(vlSelfRef.i_start));
    bufp->chgIData(oldp+3,(vlSelfRef.i_ab_addr),32);
    bufp->chgIData(oldp+4,(vlSelfRef.i_c_addr),32);
    bufp->chgIData(oldp+5,(vlSelfRef.m_axi_araddr),32);
    bufp->chgBit(oldp+6,(vlSelfRef.m_axi_arid));
    bufp->chgCData(oldp+7,(vlSelfRef.m_axi_arlen),8);
    bufp->chgCData(oldp+8,(vlSelfRef.m_axi_arsize),3);
    bufp->chgCData(oldp+9,(vlSelfRef.m_axi_arburst),2);
    bufp->chgCData(oldp+10,(vlSelfRef.m_axi_arprot),3);
    bufp->chgBit(oldp+11,(vlSelfRef.m_axi_arvalid));
    bufp->chgBit(oldp+12,(vlSelfRef.m_axi_arready));
    bufp->chgQData(oldp+13,(vlSelfRef.m_axi_rdata),64);
    bufp->chgBit(oldp+15,(vlSelfRef.m_axi_rid));
    bufp->chgCData(oldp+16,(vlSelfRef.m_axi_rresp),2);
    bufp->chgBit(oldp+17,(vlSelfRef.m_axi_rlast));
    bufp->chgBit(oldp+18,(vlSelfRef.m_axi_rvalid));
    bufp->chgBit(oldp+19,(vlSelfRef.m_axi_rready));
    bufp->chgIData(oldp+20,(vlSelfRef.m_axi_awaddr),32);
    bufp->chgBit(oldp+21,(vlSelfRef.m_axi_awid));
    bufp->chgCData(oldp+22,(vlSelfRef.m_axi_awlen),8);
    bufp->chgCData(oldp+23,(vlSelfRef.m_axi_awsize),3);
    bufp->chgCData(oldp+24,(vlSelfRef.m_axi_awburst),2);
    bufp->chgCData(oldp+25,(vlSelfRef.m_axi_awprot),3);
    bufp->chgBit(oldp+26,(vlSelfRef.m_axi_awvalid));
    bufp->chgBit(oldp+27,(vlSelfRef.m_axi_awready));
    bufp->chgQData(oldp+28,(vlSelfRef.m_axi_wdata),64);
    bufp->chgBit(oldp+30,(vlSelfRef.m_axi_wvalid));
    bufp->chgBit(oldp+31,(vlSelfRef.m_axi_wready));
    bufp->chgBit(oldp+32,(vlSelfRef.m_axi_wlast));
    bufp->chgCData(oldp+33,(vlSelfRef.m_axi_bresp),2);
    bufp->chgBit(oldp+34,(vlSelfRef.m_axi_bid));
    bufp->chgBit(oldp+35,(vlSelfRef.m_axi_bvalid));
    bufp->chgBit(oldp+36,(vlSelfRef.m_axi_bready));
    bufp->chgBit(oldp+37,(vlSelfRef.sa_axi_top__DOT__clk));
    bufp->chgBit(oldp+38,(vlSelfRef.sa_axi_top__DOT__rst_n));
    bufp->chgBit(oldp+39,(vlSelfRef.sa_axi_top__DOT__i_start));
    bufp->chgIData(oldp+40,(vlSelfRef.sa_axi_top__DOT__i_ab_addr),32);
    bufp->chgIData(oldp+41,(vlSelfRef.sa_axi_top__DOT__i_c_addr),32);
    bufp->chgIData(oldp+42,(vlSelfRef.sa_axi_top__DOT__m_axi_araddr),32);
    bufp->chgBit(oldp+43,(vlSelfRef.sa_axi_top__DOT__m_axi_arid));
    bufp->chgCData(oldp+44,(vlSelfRef.sa_axi_top__DOT__m_axi_arlen),8);
    bufp->chgCData(oldp+45,(vlSelfRef.sa_axi_top__DOT__m_axi_arsize),3);
    bufp->chgCData(oldp+46,(vlSelfRef.sa_axi_top__DOT__m_axi_arburst),2);
    bufp->chgCData(oldp+47,(vlSelfRef.sa_axi_top__DOT__m_axi_arprot),3);
    bufp->chgBit(oldp+48,(vlSelfRef.sa_axi_top__DOT__m_axi_arvalid));
    bufp->chgBit(oldp+49,(vlSelfRef.sa_axi_top__DOT__m_axi_arready));
    bufp->chgQData(oldp+50,(vlSelfRef.sa_axi_top__DOT__m_axi_rdata),64);
    bufp->chgBit(oldp+52,(vlSelfRef.sa_axi_top__DOT__m_axi_rid));
    bufp->chgCData(oldp+53,(vlSelfRef.sa_axi_top__DOT__m_axi_rresp),2);
    bufp->chgBit(oldp+54,(vlSelfRef.sa_axi_top__DOT__m_axi_rlast));
    bufp->chgBit(oldp+55,(vlSelfRef.sa_axi_top__DOT__m_axi_rvalid));
    bufp->chgBit(oldp+56,(vlSelfRef.sa_axi_top__DOT__m_axi_rready));
    bufp->chgIData(oldp+57,(vlSelfRef.sa_axi_top__DOT__m_axi_awaddr),32);
    bufp->chgBit(oldp+58,(vlSelfRef.sa_axi_top__DOT__m_axi_awid));
    bufp->chgCData(oldp+59,(vlSelfRef.sa_axi_top__DOT__m_axi_awlen),8);
    bufp->chgCData(oldp+60,(vlSelfRef.sa_axi_top__DOT__m_axi_awsize),3);
    bufp->chgCData(oldp+61,(vlSelfRef.sa_axi_top__DOT__m_axi_awburst),2);
    bufp->chgCData(oldp+62,(vlSelfRef.sa_axi_top__DOT__m_axi_awprot),3);
    bufp->chgBit(oldp+63,(vlSelfRef.sa_axi_top__DOT__m_axi_awvalid));
    bufp->chgBit(oldp+64,(vlSelfRef.sa_axi_top__DOT__m_axi_awready));
    bufp->chgQData(oldp+65,(vlSelfRef.sa_axi_top__DOT__m_axi_wdata),64);
    bufp->chgBit(oldp+67,(vlSelfRef.sa_axi_top__DOT__m_axi_wvalid));
    bufp->chgBit(oldp+68,(vlSelfRef.sa_axi_top__DOT__m_axi_wready));
    bufp->chgBit(oldp+69,(vlSelfRef.sa_axi_top__DOT__m_axi_wlast));
    bufp->chgCData(oldp+70,(vlSelfRef.sa_axi_top__DOT__m_axi_bresp),2);
    bufp->chgBit(oldp+71,(vlSelfRef.sa_axi_top__DOT__m_axi_bid));
    bufp->chgBit(oldp+72,(vlSelfRef.sa_axi_top__DOT__m_axi_bvalid));
    bufp->chgBit(oldp+73,(vlSelfRef.sa_axi_top__DOT__m_axi_bready));
    bufp->chgBit(oldp+74,(vlSelfRef.sa_axi_top__DOT__vld_axi2sa));
    bufp->chgBit(oldp+75,(vlSelfRef.sa_axi_top__DOT__rdy_sa2axi));
    bufp->chgBit(oldp+76,(vlSelfRef.sa_axi_top__DOT__vld_sa2axi));
    bufp->chgBit(oldp+77,(vlSelfRef.sa_axi_top__DOT__rdy_axi2sa));
    bufp->chgSData(oldp+78,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__ab_line_axi2sa))),16);
    bufp->chgSData(oldp+79,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_axi_top__DOT__ab_line_axi2sa 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+80,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_axi_top__DOT__ab_line_axi2sa 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+81,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_axi_top__DOT__ab_line_axi2sa 
                                                    >> 0x00000030U)))),16);
    bufp->chgSData(oldp+82,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__c_line_sa2axi))),16);
    bufp->chgSData(oldp+83,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_axi_top__DOT__c_line_sa2axi 
                                                    >> 0x00000010U)))),16);
    bufp->chgSData(oldp+84,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_axi_top__DOT__c_line_sa2axi 
                                                    >> 0x00000020U)))),16);
    bufp->chgSData(oldp+85,((0x0000ffffU & (IData)(
                                                   (vlSelfRef.sa_axi_top__DOT__c_line_sa2axi 
                                                    >> 0x00000030U)))),16);
    bufp->chgBit(oldp+86,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__clk));
    bufp->chgBit(oldp+87,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__rst_n));
    bufp->chgBit(oldp+88,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__i_start));
    bufp->chgIData(oldp+89,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__i_ab_addr),32);
    bufp->chgIData(oldp+90,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__i_c_addr),32);
    bufp->chgIData(oldp+91,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__araddr),32);
    bufp->chgCData(oldp+92,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__arlen),8);
    bufp->chgCData(oldp+93,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__arsize),3);
    bufp->chgCData(oldp+94,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__arburst),2);
    bufp->chgBit(oldp+95,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__arvalid));
    bufp->chgBit(oldp+96,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__arready));
    bufp->chgIData(oldp+97,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__awaddr),32);
    bufp->chgCData(oldp+98,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__awlen),8);
    bufp->chgCData(oldp+99,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__awsize),3);
    bufp->chgCData(oldp+100,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__awburst),2);
    bufp->chgBit(oldp+101,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__awvalid));
    bufp->chgBit(oldp+102,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__awready));
    bufp->chgBit(oldp+103,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__bvalid));
    bufp->chgBit(oldp+104,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__bready));
    bufp->chgCData(oldp+105,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__state),2);
    bufp->chgCData(oldp+106,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__b_lines_count),3);
    bufp->chgIData(oldp+107,(vlSelfRef.sa_axi_top__DOT__addr_gen_axi_inst__DOT__b_addr),32);
    bufp->chgBit(oldp+108,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__clk));
    bufp->chgBit(oldp+109,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__rst_n));
    bufp->chgBit(oldp+110,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__i_vld));
    bufp->chgBit(oldp+111,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__o_rdy));
    bufp->chgBit(oldp+112,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__i_rdy));
    bufp->chgBit(oldp+113,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__o_vld));
    bufp->chgSData(oldp+114,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__i_ab_line))),16);
    bufp->chgSData(oldp+115,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__i_ab_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+116,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__i_ab_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+117,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__i_ab_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgSData(oldp+118,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__o_c_line))),16);
    bufp->chgSData(oldp+119,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+120,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+121,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+122,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__a_vld));
    bufp->chgCData(oldp+123,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__count),3);
    bufp->chgBit(oldp+124,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__is_a));
    bufp->chgBit(oldp+125,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__last_line));
    bufp->chgBit(oldp+126,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__c_vld_top2sa));
    bufp->chgBit(oldp+127,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__we));
    bufp->chgBit(oldp+128,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__c_vld_sa2top));
    bufp->chgSData(oldp+129,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__c_line_sa2fifo))),16);
    bufp->chgSData(oldp+130,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__c_line_sa2fifo 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+131,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__c_line_sa2fifo 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+132,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__c_line_sa2fifo 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+133,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_full));
    bufp->chgBit(oldp+134,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_empty));
    bufp->chgBit(oldp+135,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_wr_en));
    bufp->chgBit(oldp+136,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_rd_en));
    bufp->chgBit(oldp+137,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__inc));
    bufp->chgBit(oldp+138,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__clk));
    bufp->chgBit(oldp+139,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__rst_n));
    bufp->chgBit(oldp+140,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__i_inc));
    bufp->chgBit(oldp+141,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__i_vld));
    bufp->chgBit(oldp+142,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__o_vld));
    bufp->chgBit(oldp+143,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__o_rdy));
    bufp->chgCData(oldp+144,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__credit_inst__DOT__count),4);
    bufp->chgBit(oldp+145,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__clk));
    bufp->chgBit(oldp+146,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__rst_n));
    bufp->chgBit(oldp+147,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__i_wr_en));
    bufp->chgQData(oldp+148,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__i_wr_data),64);
    bufp->chgBit(oldp+150,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__i_rd_en));
    bufp->chgQData(oldp+151,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__o_rd_data),64);
    bufp->chgBit(oldp+153,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__o_full));
    bufp->chgBit(oldp+154,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__o_empty));
    bufp->chgQData(oldp+155,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[0]),64);
    bufp->chgQData(oldp+157,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[1]),64);
    bufp->chgQData(oldp+159,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[2]),64);
    bufp->chgQData(oldp+161,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[3]),64);
    bufp->chgQData(oldp+163,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[4]),64);
    bufp->chgQData(oldp+165,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[5]),64);
    bufp->chgQData(oldp+167,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[6]),64);
    bufp->chgQData(oldp+169,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__fifo_mem[7]),64);
    bufp->chgCData(oldp+171,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__wr_ptr),3);
    bufp->chgCData(oldp+172,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__rd_ptr),3);
    bufp->chgCData(oldp+173,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__count),4);
    bufp->chgBit(oldp+174,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__wr_en));
    bufp->chgBit(oldp+175,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__fifo_inst__DOT__rd_en));
    bufp->chgBit(oldp+176,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__clk));
    bufp->chgBit(oldp+177,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__rst_n));
    bufp->chgBit(oldp+178,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_we));
    bufp->chgBit(oldp+179,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+180,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+181,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_a_line))),16);
    bufp->chgSData(oldp+182,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_a_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+183,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_a_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+184,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__i_a_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+185,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+186,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__o_c_line))),16);
    bufp->chgSData(oldp+187,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+188,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+189,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgCData(oldp+190,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_delayed),4);
    bufp->chgCData(oldp+191,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__a_vld_line_delayed),4);
    bufp->chgCData(oldp+192,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_vld_line_in),4);
    bufp->chgSData(oldp+193,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__a_line_delayed))),16);
    bufp->chgSData(oldp+194,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__a_line_delayed 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+195,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__a_line_delayed 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+196,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__a_line_delayed 
                                                     >> 0x00000030U)))),16);
    bufp->chgCData(oldp+197,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_vld_line_out),4);
    bufp->chgCData(oldp+198,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_vld_line_out_delayed),4);
    bufp->chgSData(oldp+199,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_line_out))),16);
    bufp->chgSData(oldp+200,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_line_out 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+201,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_line_out 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+202,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__c_line_out 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+203,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__clk));
    bufp->chgBit(oldp+204,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__rst_n));
    bufp->chgSData(oldp+205,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data))),16);
    bufp->chgSData(oldp+206,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+207,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+208,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__i_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgSData(oldp+209,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data))),16);
    bufp->chgSData(oldp+210,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+211,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+212,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__o_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+213,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+214,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+215,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+216,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+217,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgIData(oldp+218,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+219,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+220,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+221,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+222,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+223,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+224,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+225,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgIData(oldp+226,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+227,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+228,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+229,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+230,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+231,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+232,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+233,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgSData(oldp+234,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->chgIData(oldp+235,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+236,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+237,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__clk));
    bufp->chgBit(oldp+238,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__rst_n));
    bufp->chgBit(oldp+239,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data))));
    bufp->chgBit(oldp+240,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+241,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+242,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+243,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data))));
    bufp->chgBit(oldp+244,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+245,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+246,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+247,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+248,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+249,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+250,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+251,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+252,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+253,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+254,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+255,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+256,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+257,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+258,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+259,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+260,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+261,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+262,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+263,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+264,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+265,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+266,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+267,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+268,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+269,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+270,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_a_vld_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+271,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__clk));
    bufp->chgBit(oldp+272,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__rst_n));
    bufp->chgSData(oldp+273,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__i_data))),16);
    bufp->chgSData(oldp+274,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__i_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+275,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__i_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+276,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__i_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgSData(oldp+277,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__o_data))),16);
    bufp->chgSData(oldp+278,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__o_data 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+279,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__o_data 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+280,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__o_data 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+281,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+282,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+283,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+284,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+285,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+286,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgSData(oldp+287,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]),16);
    bufp->chgIData(oldp+288,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+289,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+290,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+291,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+292,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+293,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+294,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgSData(oldp+295,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]),16);
    bufp->chgIData(oldp+296,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+297,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+298,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+299,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgSData(oldp+300,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data),16);
    bufp->chgSData(oldp+301,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data),16);
    bufp->chgSData(oldp+302,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]),16);
    bufp->chgIData(oldp+303,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+304,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+305,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__clk));
    bufp->chgBit(oldp+306,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__rst_n));
    bufp->chgBit(oldp+307,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__i_data))));
    bufp->chgBit(oldp+308,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+309,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+310,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+311,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__o_data))));
    bufp->chgBit(oldp+312,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+313,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+314,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+315,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+316,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+317,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+318,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+319,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+320,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+321,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+322,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+323,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+324,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+325,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+326,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+327,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+328,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+329,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+330,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+331,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+332,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+333,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+334,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+335,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+336,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+337,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+338,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_in_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+339,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__clk));
    bufp->chgBit(oldp+340,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__rst_n));
    bufp->chgBit(oldp+341,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__i_data))));
    bufp->chgBit(oldp+342,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+343,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+344,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+345,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__o_data))));
    bufp->chgBit(oldp+346,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+347,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+348,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+349,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+350,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+351,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+352,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+353,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+354,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+355,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+356,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+357,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+358,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+359,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+360,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+361,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+362,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+363,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+364,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+365,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+366,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+367,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+368,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+369,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+370,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+371,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+372,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__dl_c_vld_out_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+373,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__clk));
    bufp->chgBit(oldp+374,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__rst_n));
    bufp->chgCData(oldp+375,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_we_line),4);
    bufp->chgCData(oldp+376,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_vld_line),4);
    bufp->chgCData(oldp+377,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_c_vld_line),4);
    bufp->chgSData(oldp+378,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line))),16);
    bufp->chgSData(oldp+379,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+380,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+381,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__i_a_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgCData(oldp+382,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_vld_line),4);
    bufp->chgSData(oldp+383,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line))),16);
    bufp->chgSData(oldp+384,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+385,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+386,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__o_c_line 
                                                     >> 0x00000030U)))),16);
    bufp->chgBit(oldp+387,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [0U][0U]));
    bufp->chgBit(oldp+388,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [0U][1U]));
    bufp->chgBit(oldp+389,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [0U][2U]));
    bufp->chgBit(oldp+390,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [0U][3U]));
    bufp->chgBit(oldp+391,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [0U][4U]));
    bufp->chgBit(oldp+392,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [1U][0U]));
    bufp->chgBit(oldp+393,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [1U][1U]));
    bufp->chgBit(oldp+394,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [1U][2U]));
    bufp->chgBit(oldp+395,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [1U][3U]));
    bufp->chgBit(oldp+396,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [1U][4U]));
    bufp->chgBit(oldp+397,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [2U][0U]));
    bufp->chgBit(oldp+398,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [2U][1U]));
    bufp->chgBit(oldp+399,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [2U][2U]));
    bufp->chgBit(oldp+400,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [2U][3U]));
    bufp->chgBit(oldp+401,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [2U][4U]));
    bufp->chgBit(oldp+402,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [3U][0U]));
    bufp->chgBit(oldp+403,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [3U][1U]));
    bufp->chgBit(oldp+404,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [3U][2U]));
    bufp->chgBit(oldp+405,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [3U][3U]));
    bufp->chgBit(oldp+406,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [3U][4U]));
    bufp->chgBit(oldp+407,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [4U][0U]));
    bufp->chgBit(oldp+408,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [4U][1U]));
    bufp->chgBit(oldp+409,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [4U][2U]));
    bufp->chgBit(oldp+410,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [4U][3U]));
    bufp->chgBit(oldp+411,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__we_sig
                           [4U][4U]));
    bufp->chgBit(oldp+412,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][0U]));
    bufp->chgBit(oldp+413,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][1U]));
    bufp->chgBit(oldp+414,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][2U]));
    bufp->chgBit(oldp+415,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][3U]));
    bufp->chgBit(oldp+416,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [0U][4U]));
    bufp->chgBit(oldp+417,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][0U]));
    bufp->chgBit(oldp+418,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][1U]));
    bufp->chgBit(oldp+419,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][2U]));
    bufp->chgBit(oldp+420,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][3U]));
    bufp->chgBit(oldp+421,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [1U][4U]));
    bufp->chgBit(oldp+422,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][0U]));
    bufp->chgBit(oldp+423,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][1U]));
    bufp->chgBit(oldp+424,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][2U]));
    bufp->chgBit(oldp+425,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][3U]));
    bufp->chgBit(oldp+426,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [2U][4U]));
    bufp->chgBit(oldp+427,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][0U]));
    bufp->chgBit(oldp+428,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][1U]));
    bufp->chgBit(oldp+429,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][2U]));
    bufp->chgBit(oldp+430,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][3U]));
    bufp->chgBit(oldp+431,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [3U][4U]));
    bufp->chgBit(oldp+432,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [4U][0U]));
    bufp->chgBit(oldp+433,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [4U][1U]));
    bufp->chgBit(oldp+434,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [4U][2U]));
    bufp->chgBit(oldp+435,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [4U][3U]));
    bufp->chgBit(oldp+436,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_vld_sig
                           [4U][4U]));
    bufp->chgBit(oldp+437,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [0U][0U]));
    bufp->chgBit(oldp+438,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [0U][1U]));
    bufp->chgBit(oldp+439,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [0U][2U]));
    bufp->chgBit(oldp+440,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [0U][3U]));
    bufp->chgBit(oldp+441,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [0U][4U]));
    bufp->chgBit(oldp+442,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [1U][0U]));
    bufp->chgBit(oldp+443,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [1U][1U]));
    bufp->chgBit(oldp+444,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [1U][2U]));
    bufp->chgBit(oldp+445,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [1U][3U]));
    bufp->chgBit(oldp+446,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [1U][4U]));
    bufp->chgBit(oldp+447,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [2U][0U]));
    bufp->chgBit(oldp+448,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [2U][1U]));
    bufp->chgBit(oldp+449,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [2U][2U]));
    bufp->chgBit(oldp+450,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [2U][3U]));
    bufp->chgBit(oldp+451,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [2U][4U]));
    bufp->chgBit(oldp+452,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [3U][0U]));
    bufp->chgBit(oldp+453,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [3U][1U]));
    bufp->chgBit(oldp+454,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [3U][2U]));
    bufp->chgBit(oldp+455,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [3U][3U]));
    bufp->chgBit(oldp+456,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [3U][4U]));
    bufp->chgBit(oldp+457,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [4U][0U]));
    bufp->chgBit(oldp+458,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [4U][1U]));
    bufp->chgBit(oldp+459,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [4U][2U]));
    bufp->chgBit(oldp+460,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [4U][3U]));
    bufp->chgBit(oldp+461,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_vld_sig
                           [4U][4U]));
    bufp->chgSData(oldp+462,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [0U][0U]),16);
    bufp->chgSData(oldp+463,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [0U][1U]),16);
    bufp->chgSData(oldp+464,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [0U][2U]),16);
    bufp->chgSData(oldp+465,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [0U][3U]),16);
    bufp->chgSData(oldp+466,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [0U][4U]),16);
    bufp->chgSData(oldp+467,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [1U][0U]),16);
    bufp->chgSData(oldp+468,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [1U][1U]),16);
    bufp->chgSData(oldp+469,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [1U][2U]),16);
    bufp->chgSData(oldp+470,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [1U][3U]),16);
    bufp->chgSData(oldp+471,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [1U][4U]),16);
    bufp->chgSData(oldp+472,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [2U][0U]),16);
    bufp->chgSData(oldp+473,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [2U][1U]),16);
    bufp->chgSData(oldp+474,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [2U][2U]),16);
    bufp->chgSData(oldp+475,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [2U][3U]),16);
    bufp->chgSData(oldp+476,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [2U][4U]),16);
    bufp->chgSData(oldp+477,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [3U][0U]),16);
    bufp->chgSData(oldp+478,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [3U][1U]),16);
    bufp->chgSData(oldp+479,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [3U][2U]),16);
    bufp->chgSData(oldp+480,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [3U][3U]),16);
    bufp->chgSData(oldp+481,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [3U][4U]),16);
    bufp->chgSData(oldp+482,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [4U][0U]),16);
    bufp->chgSData(oldp+483,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [4U][1U]),16);
    bufp->chgSData(oldp+484,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [4U][2U]),16);
    bufp->chgSData(oldp+485,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [4U][3U]),16);
    bufp->chgSData(oldp+486,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__a_sig
                             [4U][4U]),16);
    bufp->chgSData(oldp+487,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][0U]),16);
    bufp->chgSData(oldp+488,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][1U]),16);
    bufp->chgSData(oldp+489,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][2U]),16);
    bufp->chgSData(oldp+490,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][3U]),16);
    bufp->chgSData(oldp+491,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [0U][4U]),16);
    bufp->chgSData(oldp+492,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][0U]),16);
    bufp->chgSData(oldp+493,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][1U]),16);
    bufp->chgSData(oldp+494,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][2U]),16);
    bufp->chgSData(oldp+495,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][3U]),16);
    bufp->chgSData(oldp+496,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [1U][4U]),16);
    bufp->chgSData(oldp+497,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][0U]),16);
    bufp->chgSData(oldp+498,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][1U]),16);
    bufp->chgSData(oldp+499,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][2U]),16);
    bufp->chgSData(oldp+500,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][3U]),16);
    bufp->chgSData(oldp+501,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [2U][4U]),16);
    bufp->chgSData(oldp+502,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][0U]),16);
    bufp->chgSData(oldp+503,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][1U]),16);
    bufp->chgSData(oldp+504,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][2U]),16);
    bufp->chgSData(oldp+505,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][3U]),16);
    bufp->chgSData(oldp+506,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [3U][4U]),16);
    bufp->chgSData(oldp+507,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][0U]),16);
    bufp->chgSData(oldp+508,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][1U]),16);
    bufp->chgSData(oldp+509,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][2U]),16);
    bufp->chgSData(oldp+510,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][3U]),16);
    bufp->chgSData(oldp+511,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__c_sig
                             [4U][4U]),16);
    bufp->chgBit(oldp+512,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+513,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+514,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+515,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+516,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+517,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+518,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+519,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+520,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+521,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+522,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+523,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+524,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+525,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+526,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+527,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+528,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+529,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+530,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+531,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+532,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+533,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+534,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+535,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+536,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+537,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+538,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+539,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+540,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+541,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+542,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+543,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+544,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+545,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+546,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+547,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+548,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+549,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+550,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+551,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+552,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+553,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+554,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+555,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+556,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+557,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+558,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+559,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+560,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+561,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+562,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+563,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+564,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+565,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+566,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+567,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+568,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+569,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+570,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+571,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+572,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+573,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+574,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+575,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+576,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+577,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+578,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+579,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+580,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+581,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+582,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+583,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+584,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+585,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+586,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+587,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+588,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+589,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+590,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+591,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+592,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+593,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+594,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+595,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+596,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+597,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+598,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+599,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+600,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+601,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+602,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+603,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+604,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+605,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+606,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+607,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+608,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+609,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+610,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+611,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+612,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+613,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+614,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+615,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+616,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+617,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+618,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+619,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+620,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+621,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+622,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+623,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+624,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+625,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+626,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+627,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+628,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+629,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+630,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+631,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+632,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+633,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+634,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+635,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+636,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+637,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+638,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+639,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+640,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+641,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+642,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+643,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+644,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+645,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+646,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+647,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+648,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+649,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+650,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+651,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+652,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+653,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+654,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+655,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+656,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+657,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+658,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+659,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+660,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+661,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+662,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+663,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+664,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+665,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+666,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+667,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+668,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+669,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+670,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+671,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+672,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+673,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+674,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+675,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+676,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+677,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+678,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+679,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+680,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+681,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+682,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+683,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+684,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+685,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+686,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+687,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+688,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+689,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+690,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+691,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+692,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+693,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+694,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+695,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+696,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+697,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+698,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+699,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+700,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+701,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+702,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+703,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+704,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+705,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+706,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+707,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__clk));
    bufp->chgBit(oldp+708,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__rst_n));
    bufp->chgBit(oldp+709,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_we));
    bufp->chgBit(oldp+710,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a_vld));
    bufp->chgBit(oldp+711,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c_vld));
    bufp->chgSData(oldp+712,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_a),16);
    bufp->chgSData(oldp+713,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__i_c),16);
    bufp->chgBit(oldp+714,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_we));
    bufp->chgBit(oldp+715,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a_vld));
    bufp->chgBit(oldp+716,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c_vld));
    bufp->chgSData(oldp+717,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_a),16);
    bufp->chgSData(oldp+718,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__o_c),16);
    bufp->chgSData(oldp+719,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
    bufp->chgBit(oldp+720,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__clk));
    bufp->chgBit(oldp+721,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__rst_n));
    bufp->chgBit(oldp+722,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__i_we));
    bufp->chgCData(oldp+723,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__o_we_line),4);
    bufp->chgCData(oldp+724,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_shift_reg),4);
    bufp->chgCData(oldp+725,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__we_gen),4);
    bufp->chgBit(oldp+726,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__clk));
    bufp->chgBit(oldp+727,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__rst_n));
    bufp->chgBit(oldp+728,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data))));
    bufp->chgBit(oldp+729,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+730,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+731,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+732,((1U & (IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data))));
    bufp->chgBit(oldp+733,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                  >> 1U))));
    bufp->chgBit(oldp+734,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                  >> 2U))));
    bufp->chgBit(oldp+735,((1U & ((IData)(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__o_data) 
                                  >> 3U))));
    bufp->chgBit(oldp+736,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+737,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+738,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+739,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+740,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgIData(oldp+741,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+742,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+743,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+744,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+745,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+746,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+747,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+748,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgIData(oldp+749,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+750,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+751,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__clk));
    bufp->chgBit(oldp+752,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__rst_n));
    bufp->chgBit(oldp+753,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__i_data));
    bufp->chgBit(oldp+754,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__o_data));
    bufp->chgBit(oldp+755,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[0]));
    bufp->chgBit(oldp+756,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[1]));
    bufp->chgBit(oldp+757,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__reg_data[2]));
    bufp->chgIData(oldp+758,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+759,(vlSelfRef.sa_axi_top__DOT__sa_credit_top_inst__DOT__sa_top_inst__DOT__we_line_inst__DOT__dl_inst__DOT__gen_sr__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->chgBit(oldp+760,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__clk));
    bufp->chgBit(oldp+761,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rst_n));
    bufp->chgQData(oldp+762,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rdata),64);
    bufp->chgBit(oldp+764,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rvalid));
    bufp->chgBit(oldp+765,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rready));
    bufp->chgBit(oldp+766,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rlast));
    bufp->chgQData(oldp+767,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__wdata),64);
    bufp->chgBit(oldp+769,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__wvalid));
    bufp->chgBit(oldp+770,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__wready));
    bufp->chgBit(oldp+771,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__wlast));
    bufp->chgBit(oldp+772,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__vld_axi2sa));
    bufp->chgBit(oldp+773,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rdy_sa2axi));
    bufp->chgBit(oldp+774,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__rdy_axi2sa));
    bufp->chgBit(oldp+775,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__vld_sa2axi));
    bufp->chgSData(oldp+776,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__ab_line_axi2sa))),16);
    bufp->chgSData(oldp+777,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__ab_line_axi2sa 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+778,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__ab_line_axi2sa 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+779,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__ab_line_axi2sa 
                                                     >> 0x00000030U)))),16);
    bufp->chgSData(oldp+780,((0x0000ffffU & (IData)(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__c_line_sa2axi))),16);
    bufp->chgSData(oldp+781,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__c_line_sa2axi 
                                                     >> 0x00000010U)))),16);
    bufp->chgSData(oldp+782,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__c_line_sa2axi 
                                                     >> 0x00000020U)))),16);
    bufp->chgSData(oldp+783,((0x0000ffffU & (IData)(
                                                    (vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__c_line_sa2axi 
                                                     >> 0x00000030U)))),16);
    bufp->chgCData(oldp+784,(vlSelfRef.sa_axi_top__DOT__sa_ctrl_axi_inst__DOT__c_lines_count),3);
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
