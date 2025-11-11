// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsa_dpi_tb__pch.h"

//============================================================
// Constructors

Vsa_dpi_tb::Vsa_dpi_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsa_dpi_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsa_dpi_tb::Vsa_dpi_tb(const char* _vcname__)
    : Vsa_dpi_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsa_dpi_tb::~Vsa_dpi_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsa_dpi_tb___024root___eval_debug_assertions(Vsa_dpi_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsa_dpi_tb___024root___eval_static(Vsa_dpi_tb___024root* vlSelf);
void Vsa_dpi_tb___024root___eval_initial(Vsa_dpi_tb___024root* vlSelf);
void Vsa_dpi_tb___024root___eval_settle(Vsa_dpi_tb___024root* vlSelf);
void Vsa_dpi_tb___024root___eval(Vsa_dpi_tb___024root* vlSelf);

void Vsa_dpi_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsa_dpi_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsa_dpi_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsa_dpi_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsa_dpi_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsa_dpi_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsa_dpi_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsa_dpi_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsa_dpi_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsa_dpi_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsa_dpi_tb___024root___eval_final(Vsa_dpi_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_dpi_tb::final() {
    Vsa_dpi_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsa_dpi_tb::hierName() const { return vlSymsp->name(); }
const char* Vsa_dpi_tb::modelName() const { return "Vsa_dpi_tb"; }
unsigned Vsa_dpi_tb::threads() const { return 1; }
void Vsa_dpi_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsa_dpi_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
