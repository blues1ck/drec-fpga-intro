// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaxis_fifo_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaxis_fifo_tb::Vaxis_fifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaxis_fifo_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vaxis_fifo_tb::Vaxis_fifo_tb(const char* _vcname__)
    : Vaxis_fifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaxis_fifo_tb::~Vaxis_fifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaxis_fifo_tb___024root___eval_debug_assertions(Vaxis_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vaxis_fifo_tb___024root___eval_static(Vaxis_fifo_tb___024root* vlSelf);
void Vaxis_fifo_tb___024root___eval_initial(Vaxis_fifo_tb___024root* vlSelf);
void Vaxis_fifo_tb___024root___eval_settle(Vaxis_fifo_tb___024root* vlSelf);
void Vaxis_fifo_tb___024root___eval(Vaxis_fifo_tb___024root* vlSelf);

void Vaxis_fifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaxis_fifo_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaxis_fifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaxis_fifo_tb___024root___eval_static(&(vlSymsp->TOP));
        Vaxis_fifo_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vaxis_fifo_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaxis_fifo_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vaxis_fifo_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vaxis_fifo_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vaxis_fifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vaxis_fifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vaxis_fifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaxis_fifo_tb___024root___eval_final(Vaxis_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vaxis_fifo_tb::final() {
    Vaxis_fifo_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaxis_fifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vaxis_fifo_tb::modelName() const { return "Vaxis_fifo_tb"; }
unsigned Vaxis_fifo_tb::threads() const { return 1; }
void Vaxis_fifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vaxis_fifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaxis_fifo_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaxis_fifo_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vaxis_fifo_tb___024root__trace_init_top(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaxis_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxis_fifo_tb___024root*>(voidSelf);
    Vaxis_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vaxis_fifo_tb___024root__trace_decl_types(tracep);
    Vaxis_fifo_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaxis_fifo_tb___024root__trace_register(Vaxis_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaxis_fifo_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaxis_fifo_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaxis_fifo_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
