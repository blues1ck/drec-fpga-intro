// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_axis_fifo);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(286);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_axis_fifo.configure(this, name(), "axis_fifo", "axis_fifo", "axis_fifo", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_axis_fifo);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tdata", &(TOP.m_axis_tdata), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tdest", &(TOP.m_axis_tdest), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tid", &(TOP.m_axis_tid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tkeep", &(TOP.m_axis_tkeep), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tlast", &(TOP.m_axis_tlast), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tready", &(TOP.m_axis_tready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tstrb", &(TOP.m_axis_tstrb), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tuser", &(TOP.m_axis_tuser), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tvalid", &(TOP.m_axis_tvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tdata", &(TOP.s_axis_tdata), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tdest", &(TOP.s_axis_tdest), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tid", &(TOP.s_axis_tid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tkeep", &(TOP.s_axis_tkeep), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tlast", &(TOP.s_axis_tlast), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tready", &(TOP.s_axis_tready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tstrb", &(TOP.s_axis_tstrb), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tuser", &(TOP.s_axis_tuser), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.s_axis_tvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"TDEST_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__TDEST_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"TID_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__TID_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"TSTRB_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__TSTRB_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"TUSER_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.axis_fifo__DOT__TUSER_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"clk", &(TOP.axis_fifo__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"count", &(TOP.axis_fifo__DOT__count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"empty", &(TOP.axis_fifo__DOT__empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"full", &(TOP.axis_fifo__DOT__full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tdata", &(TOP.axis_fifo__DOT__m_axis_tdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tdest", &(TOP.axis_fifo__DOT__m_axis_tdest), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tid", &(TOP.axis_fifo__DOT__m_axis_tid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tkeep", &(TOP.axis_fifo__DOT__m_axis_tkeep), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tlast", &(TOP.axis_fifo__DOT__m_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tready", &(TOP.axis_fifo__DOT__m_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tstrb", &(TOP.axis_fifo__DOT__m_axis_tstrb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tuser", &(TOP.axis_fifo__DOT__m_axis_tuser), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"m_axis_tvalid", &(TOP.axis_fifo__DOT__m_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"mem", &(TOP.axis_fifo__DOT__mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,7 ,56,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"rd_en", &(TOP.axis_fifo__DOT__rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"rd_ptr", &(TOP.axis_fifo__DOT__rd_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"rst_n", &(TOP.axis_fifo__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tdata", &(TOP.axis_fifo__DOT__s_axis_tdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tdest", &(TOP.axis_fifo__DOT__s_axis_tdest), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tid", &(TOP.axis_fifo__DOT__s_axis_tid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tkeep", &(TOP.axis_fifo__DOT__s_axis_tkeep), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tlast", &(TOP.axis_fifo__DOT__s_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tready", &(TOP.axis_fifo__DOT__s_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tstrb", &(TOP.axis_fifo__DOT__s_axis_tstrb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tuser", &(TOP.axis_fifo__DOT__s_axis_tuser), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.axis_fifo__DOT__s_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"wait_clk_after_rst_n", &(TOP.axis_fifo__DOT__wait_clk_after_rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"wr_en", &(TOP.axis_fifo__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_axis_fifo.varInsert(__Vfinal,"wr_ptr", &(TOP.axis_fifo__DOT__wr_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
    }
}
