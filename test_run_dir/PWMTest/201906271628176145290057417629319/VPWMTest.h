// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPWMTest_H_
#define _VPWMTest_H_

#include "verilated_heavy.h"

class VPWMTest__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VPWMTest) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(PWMTest__DOT__c_io_rise,3,0);
    VL_SIG8(PWMTest__DOT__c_io_fall,3,0);
    VL_SIG8(PWMTest__DOT__value,5,0);
    VL_SIG8(PWMTest__DOT___T_9,0,0);
    VL_SIG8(PWMTest__DOT___T_11,0,0);
    VL_SIG8(PWMTest__DOT___GEN_86,0,0);
    VL_SIG8(PWMTest__DOT___GEN_112,0,0);
    VL_SIG8(PWMTest__DOT___GEN_151,0,0);
    VL_SIG8(PWMTest__DOT___T_469,0,0);
    VL_SIG8(PWMTest__DOT___T_486,0,0);
    VL_SIG8(PWMTest__DOT___T_489,5,0);
    VL_SIG8(PWMTest__DOT___GEN_162,0,0);
    VL_SIG8(PWMTest__DOT__c__DOT__counter,3,0);
    VL_SIG8(PWMTest__DOT__c__DOT__out,0,0);
    VL_SIG8(PWMTest__DOT__c__DOT___T_17,0,0);
    VL_SIG8(PWMTest__DOT__c__DOT___T_20,0,0);
    VL_SIG8(PWMTest__DOT__c__DOT___T_23,3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPWMTest__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPWMTest);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPWMTest(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPWMTest();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPWMTest__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPWMTest__Syms* symsp, bool first);
  private:
    static QData _change_request(VPWMTest__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VPWMTest__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VPWMTest__Syms* __restrict vlSymsp);
    static void _eval_settle(VPWMTest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VPWMTest__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPWMTest__Syms* __restrict vlSymsp);
    static void traceChgThis(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
