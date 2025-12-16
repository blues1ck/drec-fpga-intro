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
        bufp->chgBit(oldp+1,(vlSelfRef.sa_top_tb__DOT__i_a_valid));
        bufp->chgQData(oldp+2,(vlSelfRef.sa_top_tb__DOT__i_a_data),64);
        bufp->chgBit(oldp+4,(vlSelfRef.sa_top_tb__DOT__i_we_valid));
        bufp->chgBit(oldp+5,(vlSelfRef.sa_top_tb__DOT__i_we_data));
        bufp->chgBit(oldp+6,(vlSelfRef.sa_top_tb__DOT__i_c_valid));
        bufp->chgBit(oldp+7,(vlSelfRef.sa_top_tb__DOT__i_c_ready));
        bufp->chgBit(oldp+8,(vlSelfRef.sa_top_tb__DOT__c_vld_correct));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgSData(oldp+9,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                               [0U][0U]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][1U]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][2U]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][3U]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][4U]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][1U]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][2U]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][3U]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][4U]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][0U]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][1U]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][2U]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][3U]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][4U]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][0U]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][1U]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][2U]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][3U]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][4U]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][0U]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][1U]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][2U]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][3U]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [4U][4U]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][0U]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][1U]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][2U]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [0U][3U]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][1U]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][2U]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [1U][3U]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][0U]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][1U]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][2U]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [2U][3U]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][0U]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][1U]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][2U]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_sig
                                [3U][3U]),16);
        bufp->chgCData(oldp+50,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__we_shift_reg),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+51,((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full)))));
        bufp->chgBit(oldp+52,((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full)))));
        bufp->chgBit(oldp+53,((1U & (~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full)))));
        bufp->chgQData(oldp+54,((((QData)((IData)((
                                                   ((IData)(
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
        bufp->chgBit(oldp+56,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data));
        bufp->chgBit(oldp+57,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full));
        bufp->chgBit(oldp+58,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_empty));
        bufp->chgQData(oldp+59,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data),64);
        bufp->chgBit(oldp+61,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full));
        bufp->chgBit(oldp+62,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_empty));
        bufp->chgBit(oldp+63,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__i_we));
        bufp->chgBit(oldp+64,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full));
        bufp->chgBit(oldp+65,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_empty));
        bufp->chgQData(oldp+66,((((QData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem[
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
                                       ? 0x00000020U
                                       : ((IData)(0x00000040U) 
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
                                                << 
                                                ((IData)(0x00000020U) 
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
        bufp->chgBit(oldp+68,(((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                 >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                           [0U] & (
                                                   vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                   [1U] 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                   [2U]))) 
                               & (0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits)))));
        bufp->chgBit(oldp+69,((0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits))));
        bufp->chgBit(oldp+70,((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                          [0U] & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                  [1U] 
                                                  & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                  [2U])))));
        bufp->chgCData(oldp+71,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__o_data),4);
        bufp->chgCData(oldp+72,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__o_data),4);
        bufp->chgCData(oldp+73,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__o_data),4);
        bufp->chgQData(oldp+74,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__o_data),64);
        bufp->chgCData(oldp+76,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out),4);
        bufp->chgCData(oldp+77,(((((2U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                          >> 2U)) | 
                                   vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                   [0U]) << 2U) | (
                                                   (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                    [1U] 
                                                    << 1U) 
                                                   | vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                   [2U]))),4);
        bufp->chgQData(oldp+78,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out),64);
        bufp->chgWData(oldp+80,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__mem),256);
        bufp->chgCData(oldp+88,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__wr_ptr),3);
        bufp->chgCData(oldp+89,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__rd_ptr),3);
        bufp->chgIData(oldp+90,(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgWData(oldp+91,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__mem),256);
        bufp->chgCData(oldp+99,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__wr_ptr),3);
        bufp->chgCData(oldp+100,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__rd_ptr),3);
        bufp->chgIData(oldp+101,(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+102,(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits),4);
        bufp->chgSData(oldp+103,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
                                                         >> 0x00000010U)))),16);
        bufp->chgSData(oldp+104,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                 [0U]),16);
        bufp->chgSData(oldp+105,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
        bufp->chgIData(oldp+106,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+107,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+108,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
                                                         >> 0x00000020U)))),16);
        bufp->chgSData(oldp+109,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                 [1U]),16);
        bufp->chgSData(oldp+110,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
        bufp->chgSData(oldp+111,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
        bufp->chgIData(oldp+112,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+113,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+114,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__i_data 
                                                         >> 0x00000030U)))),16);
        bufp->chgSData(oldp+115,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                                 [2U]),16);
        bufp->chgSData(oldp+116,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
        bufp->chgSData(oldp+117,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
        bufp->chgSData(oldp+118,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]),16);
        bufp->chgIData(oldp+119,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+120,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+121,((0x0000000fU & (- (IData)((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__i_data))))),4);
        bufp->chgBit(oldp+122,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                               [0U]));
        bufp->chgBit(oldp+123,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgIData(oldp+124,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+125,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+126,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                               [1U]));
        bufp->chgBit(oldp+127,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+128,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgIData(oldp+129,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+130,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+131,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                               [2U]));
        bufp->chgBit(oldp+132,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+133,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgBit(oldp+134,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
        bufp->chgIData(oldp+135,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+136,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_a_vld_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+137,((0x0000ffffU & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out))),16);
        bufp->chgSData(oldp+138,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                 [2U]),16);
        bufp->chgSData(oldp+139,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
        bufp->chgSData(oldp+140,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
        bufp->chgSData(oldp+141,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[2]),16);
        bufp->chgIData(oldp+142,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+143,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+144,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                         >> 0x00000010U)))),16);
        bufp->chgSData(oldp+145,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                 [1U]),16);
        bufp->chgSData(oldp+146,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
        bufp->chgSData(oldp+147,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[1]),16);
        bufp->chgIData(oldp+148,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+149,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+150,((0x0000ffffU & (IData)(
                                                        (vlSelfRef.sa_top_tb__DOT__dut__DOT__c_line_out 
                                                         >> 0x00000020U)))),16);
        bufp->chgSData(oldp+151,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                 [0U]),16);
        bufp->chgSData(oldp+152,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]),16);
        bufp->chgIData(oldp+153,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+154,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+155,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                               [0U]));
        bufp->chgBit(oldp+156,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgIData(oldp+157,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+158,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+159,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                               [1U]));
        bufp->chgBit(oldp+160,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+161,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgIData(oldp+162,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+163,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+164,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                               [2U]));
        bufp->chgBit(oldp+165,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+166,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgBit(oldp+167,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
        bufp->chgIData(oldp+168,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+169,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_in_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+170,((1U & (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out))));
        bufp->chgBit(oldp+171,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                               [2U]));
        bufp->chgBit(oldp+172,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+173,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgBit(oldp+174,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg[2]));
        bufp->chgIData(oldp+175,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+176,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                      >> 1U))));
        bufp->chgBit(oldp+178,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                               [1U]));
        bufp->chgBit(oldp+179,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+180,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgIData(oldp+181,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+182,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+183,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                      >> 2U))));
        bufp->chgBit(oldp+184,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                               [0U]));
        bufp->chgBit(oldp+185,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgIData(oldp+186,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+187,(vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+188,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][0U]));
        bufp->chgBit(oldp+189,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][1U]));
        bufp->chgBit(oldp+190,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][2U]));
        bufp->chgBit(oldp+191,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][3U]));
        bufp->chgBit(oldp+192,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][4U]));
        bufp->chgBit(oldp+193,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][0U]));
        bufp->chgBit(oldp+194,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][1U]));
        bufp->chgBit(oldp+195,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][2U]));
        bufp->chgBit(oldp+196,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][3U]));
        bufp->chgBit(oldp+197,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][4U]));
        bufp->chgBit(oldp+198,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][0U]));
        bufp->chgBit(oldp+199,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][1U]));
        bufp->chgBit(oldp+200,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][2U]));
        bufp->chgBit(oldp+201,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][3U]));
        bufp->chgBit(oldp+202,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][4U]));
        bufp->chgBit(oldp+203,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][0U]));
        bufp->chgBit(oldp+204,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][1U]));
        bufp->chgBit(oldp+205,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][2U]));
        bufp->chgBit(oldp+206,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][3U]));
        bufp->chgBit(oldp+207,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][4U]));
        bufp->chgBit(oldp+208,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [4U][0U]));
        bufp->chgBit(oldp+209,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [4U][1U]));
        bufp->chgBit(oldp+210,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [4U][2U]));
        bufp->chgBit(oldp+211,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [4U][3U]));
        bufp->chgBit(oldp+212,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [4U][4U]));
        bufp->chgBit(oldp+213,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][0U]));
        bufp->chgBit(oldp+214,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][1U]));
        bufp->chgBit(oldp+215,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][2U]));
        bufp->chgBit(oldp+216,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][3U]));
        bufp->chgBit(oldp+217,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][4U]));
        bufp->chgBit(oldp+218,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][0U]));
        bufp->chgBit(oldp+219,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][1U]));
        bufp->chgBit(oldp+220,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][2U]));
        bufp->chgBit(oldp+221,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][3U]));
        bufp->chgBit(oldp+222,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][4U]));
        bufp->chgBit(oldp+223,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][0U]));
        bufp->chgBit(oldp+224,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][1U]));
        bufp->chgBit(oldp+225,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][2U]));
        bufp->chgBit(oldp+226,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][3U]));
        bufp->chgBit(oldp+227,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][4U]));
        bufp->chgBit(oldp+228,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][0U]));
        bufp->chgBit(oldp+229,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][1U]));
        bufp->chgBit(oldp+230,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][2U]));
        bufp->chgBit(oldp+231,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][3U]));
        bufp->chgBit(oldp+232,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][4U]));
        bufp->chgBit(oldp+233,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][0U]));
        bufp->chgBit(oldp+234,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][1U]));
        bufp->chgBit(oldp+235,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][2U]));
        bufp->chgBit(oldp+236,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][3U]));
        bufp->chgBit(oldp+237,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [4U][4U]));
        bufp->chgBit(oldp+238,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][0U]));
        bufp->chgBit(oldp+239,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][1U]));
        bufp->chgBit(oldp+240,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][2U]));
        bufp->chgBit(oldp+241,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][3U]));
        bufp->chgBit(oldp+242,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][4U]));
        bufp->chgBit(oldp+243,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][0U]));
        bufp->chgBit(oldp+244,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][1U]));
        bufp->chgBit(oldp+245,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][2U]));
        bufp->chgBit(oldp+246,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][3U]));
        bufp->chgBit(oldp+247,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][4U]));
        bufp->chgBit(oldp+248,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][0U]));
        bufp->chgBit(oldp+249,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][1U]));
        bufp->chgBit(oldp+250,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][2U]));
        bufp->chgBit(oldp+251,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][3U]));
        bufp->chgBit(oldp+252,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][4U]));
        bufp->chgBit(oldp+253,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][0U]));
        bufp->chgBit(oldp+254,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][1U]));
        bufp->chgBit(oldp+255,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][2U]));
        bufp->chgBit(oldp+256,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][3U]));
        bufp->chgBit(oldp+257,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][4U]));
        bufp->chgBit(oldp+258,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][0U]));
        bufp->chgBit(oldp+259,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][1U]));
        bufp->chgBit(oldp+260,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][2U]));
        bufp->chgBit(oldp+261,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][3U]));
        bufp->chgBit(oldp+262,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [4U][4U]));
        bufp->chgSData(oldp+263,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][0U]),16);
        bufp->chgSData(oldp+264,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][1U]),16);
        bufp->chgSData(oldp+265,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][2U]),16);
        bufp->chgSData(oldp+266,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][3U]),16);
        bufp->chgSData(oldp+267,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][4U]),16);
        bufp->chgSData(oldp+268,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][0U]),16);
        bufp->chgSData(oldp+269,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][1U]),16);
        bufp->chgSData(oldp+270,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][2U]),16);
        bufp->chgSData(oldp+271,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][3U]),16);
        bufp->chgSData(oldp+272,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][4U]),16);
        bufp->chgSData(oldp+273,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][0U]),16);
        bufp->chgSData(oldp+274,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][1U]),16);
        bufp->chgSData(oldp+275,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][2U]),16);
        bufp->chgSData(oldp+276,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][3U]),16);
        bufp->chgSData(oldp+277,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][4U]),16);
        bufp->chgSData(oldp+278,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][0U]),16);
        bufp->chgSData(oldp+279,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][1U]),16);
        bufp->chgSData(oldp+280,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][2U]),16);
        bufp->chgSData(oldp+281,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][3U]),16);
        bufp->chgSData(oldp+282,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][4U]),16);
        bufp->chgSData(oldp+283,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][0U]),16);
        bufp->chgSData(oldp+284,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][1U]),16);
        bufp->chgSData(oldp+285,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][2U]),16);
        bufp->chgSData(oldp+286,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][3U]),16);
        bufp->chgSData(oldp+287,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [4U][4U]),16);
        bufp->chgBit(oldp+288,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][0U]));
        bufp->chgBit(oldp+289,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][0U]));
        bufp->chgBit(oldp+290,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][0U]));
        bufp->chgSData(oldp+291,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][0U]),16);
        bufp->chgBit(oldp+292,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+293,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+294,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+295,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+296,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+297,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+298,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][1U]));
        bufp->chgBit(oldp+299,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][1U]));
        bufp->chgBit(oldp+300,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][1U]));
        bufp->chgSData(oldp+301,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][1U]),16);
        bufp->chgBit(oldp+302,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+303,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+304,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+305,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+306,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+307,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+308,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][2U]));
        bufp->chgBit(oldp+309,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][2U]));
        bufp->chgBit(oldp+310,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][2U]));
        bufp->chgSData(oldp+311,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][2U]),16);
        bufp->chgBit(oldp+312,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+313,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+314,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+315,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+316,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+317,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+318,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [0U][3U]));
        bufp->chgBit(oldp+319,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [0U][3U]));
        bufp->chgBit(oldp+320,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [0U][3U]));
        bufp->chgSData(oldp+321,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [0U][3U]),16);
        bufp->chgBit(oldp+322,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+323,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+324,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+325,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+326,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+327,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__0__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+328,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][0U]));
        bufp->chgBit(oldp+329,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][0U]));
        bufp->chgBit(oldp+330,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][0U]));
        bufp->chgSData(oldp+331,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][0U]),16);
        bufp->chgBit(oldp+332,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+333,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+334,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+335,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+336,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+337,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+338,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][1U]));
        bufp->chgBit(oldp+339,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][1U]));
        bufp->chgBit(oldp+340,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][1U]));
        bufp->chgSData(oldp+341,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][1U]),16);
        bufp->chgBit(oldp+342,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+343,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+344,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+345,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+346,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+347,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+348,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][2U]));
        bufp->chgBit(oldp+349,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][2U]));
        bufp->chgBit(oldp+350,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][2U]));
        bufp->chgSData(oldp+351,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][2U]),16);
        bufp->chgBit(oldp+352,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+353,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+354,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+355,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+356,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+357,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+358,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [1U][3U]));
        bufp->chgBit(oldp+359,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [1U][3U]));
        bufp->chgBit(oldp+360,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [1U][3U]));
        bufp->chgSData(oldp+361,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [1U][3U]),16);
        bufp->chgBit(oldp+362,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+363,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+364,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+365,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+366,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+367,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__1__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+368,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][0U]));
        bufp->chgBit(oldp+369,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][0U]));
        bufp->chgBit(oldp+370,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][0U]));
        bufp->chgSData(oldp+371,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][0U]),16);
        bufp->chgBit(oldp+372,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+373,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+374,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+375,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+376,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+377,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+378,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][1U]));
        bufp->chgBit(oldp+379,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][1U]));
        bufp->chgBit(oldp+380,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][1U]));
        bufp->chgSData(oldp+381,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][1U]),16);
        bufp->chgBit(oldp+382,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+383,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+384,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+385,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+386,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+387,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+388,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][2U]));
        bufp->chgBit(oldp+389,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][2U]));
        bufp->chgBit(oldp+390,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][2U]));
        bufp->chgSData(oldp+391,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][2U]),16);
        bufp->chgBit(oldp+392,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+393,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+394,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+395,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+396,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+397,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+398,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [2U][3U]));
        bufp->chgBit(oldp+399,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [2U][3U]));
        bufp->chgBit(oldp+400,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [2U][3U]));
        bufp->chgSData(oldp+401,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [2U][3U]),16);
        bufp->chgBit(oldp+402,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+403,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+404,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+405,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+406,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+407,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__2__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+408,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][0U]));
        bufp->chgBit(oldp+409,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][0U]));
        bufp->chgBit(oldp+410,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][0U]));
        bufp->chgSData(oldp+411,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][0U]),16);
        bufp->chgBit(oldp+412,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+413,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+414,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+415,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+416,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+417,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__0__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+418,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][1U]));
        bufp->chgBit(oldp+419,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][1U]));
        bufp->chgBit(oldp+420,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][1U]));
        bufp->chgSData(oldp+421,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][1U]),16);
        bufp->chgBit(oldp+422,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+423,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+424,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+425,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+426,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+427,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__1__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+428,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][2U]));
        bufp->chgBit(oldp+429,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][2U]));
        bufp->chgBit(oldp+430,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][2U]));
        bufp->chgSData(oldp+431,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][2U]),16);
        bufp->chgBit(oldp+432,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+433,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+434,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+435,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+436,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+437,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__2__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgBit(oldp+438,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__we_sig
                               [3U][3U]));
        bufp->chgBit(oldp+439,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_vld_sig
                               [3U][3U]));
        bufp->chgBit(oldp+440,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__c_vld_sig
                               [3U][3U]));
        bufp->chgSData(oldp+441,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__a_sig
                                 [3U][3U]),16);
        bufp->chgBit(oldp+442,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_we));
        bufp->chgBit(oldp+443,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a_vld));
        bufp->chgBit(oldp+444,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c_vld));
        bufp->chgSData(oldp+445,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_a),16);
        bufp->chgSData(oldp+446,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT____Vcellout__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__o_c),16);
        bufp->chgSData(oldp+447,(vlSelfRef.sa_top_tb__DOT__dut__DOT__sa_core_inst__DOT__gen_pe_row__BRA__3__KET____DOT__gen_pe_col__BRA__3__KET____DOT__pe_inst__DOT__b_reg),16);
        bufp->chgCData(oldp+448,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__mem),4);
        bufp->chgCData(oldp+449,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__wr_ptr),3);
        bufp->chgCData(oldp+450,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__rd_ptr),3);
        bufp->chgIData(oldp+451,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+452,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data),4);
        bufp->chgBit(oldp+453,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                      >> 1U))));
        bufp->chgBit(oldp+454,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                               [0U]));
        bufp->chgBit(oldp+455,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgIData(oldp+456,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+457,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+458,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                      >> 2U))));
        bufp->chgBit(oldp+459,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                               [1U]));
        bufp->chgBit(oldp+460,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+461,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgIData(oldp+462,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+463,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+464,((1U & ((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__i_data) 
                                      >> 3U))));
        bufp->chgBit(oldp+465,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg
                               [2U]));
        bufp->chgBit(oldp+466,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[0]));
        bufp->chgBit(oldp+467,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[1]));
        bufp->chgBit(oldp+468,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__shift_reg[2]));
        bufp->chgIData(oldp+469,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+470,(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_line_inst__DOT__dl_inst__DOT__gen_shift_reg__BRA__3__KET____DOT__sr_inst__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+471,(vlSelfRef.sa_top_tb__DOT__clk));
    bufp->chgBit(oldp+472,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__a_fifo_inst__DOT__o_full)) 
                            & (IData)(vlSelfRef.sa_top_tb__DOT__i_a_valid))));
    bufp->chgBit(oldp+473,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__we_fifo_inst__DOT__o_full)) 
                            & (IData)(vlSelfRef.sa_top_tb__DOT__i_we_valid))));
    bufp->chgBit(oldp+474,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_in_fifo_inst__DOT__o_full)) 
                            & (IData)(vlSelfRef.sa_top_tb__DOT__i_c_valid))));
    bufp->chgBit(oldp+475,(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc));
    bufp->chgBit(oldp+476,(((~ (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__i_inc)) 
                            & ((((IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__c_vld_line_out) 
                                 >> 3U) & (vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__2__KET____DOT__sr_inst__DOT__shift_reg
                                           [0U] & (
                                                   vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__1__KET____DOT__sr_inst__DOT__shift_reg
                                                   [1U] 
                                                   & vlSelfRef.sa_top_tb__DOT__dut__DOT__dl_c_vld_out_inst__DOT__gen_shift_reg__BRA__0__KET____DOT__sr_inst__DOT__shift_reg
                                                   [2U]))) 
                               & (0U < (IData)(vlSelfRef.sa_top_tb__DOT__dut__DOT__credit_inst__DOT__credits))))));
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
}
