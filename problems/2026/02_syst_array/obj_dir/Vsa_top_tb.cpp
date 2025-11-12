// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsa_top_tb__pch.h"

//============================================================
// Constructors

Vsa_top_tb::Vsa_top_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsa_top_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsa_top_tb::Vsa_top_tb(const char* _vcname__)
    : Vsa_top_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsa_top_tb::~Vsa_top_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsa_top_tb___024root___eval_debug_assertions(Vsa_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsa_top_tb___024root___eval_static(Vsa_top_tb___024root* vlSelf);
void Vsa_top_tb___024root___eval_initial(Vsa_top_tb___024root* vlSelf);
void Vsa_top_tb___024root___eval_settle(Vsa_top_tb___024root* vlSelf);
void Vsa_top_tb___024root___eval(Vsa_top_tb___024root* vlSelf);

void Vsa_top_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsa_top_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsa_top_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsa_top_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsa_top_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsa_top_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsa_top_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsa_top_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsa_top_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsa_top_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsa_top_tb___024root___eval_final(Vsa_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_top_tb::final() {
    Vsa_top_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsa_top_tb::hierName() const { return vlSymsp->name(); }
const char* Vsa_top_tb::modelName() const { return "Vsa_top_tb"; }
unsigned Vsa_top_tb::threads() const { return 1; }
void Vsa_top_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsa_top_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
