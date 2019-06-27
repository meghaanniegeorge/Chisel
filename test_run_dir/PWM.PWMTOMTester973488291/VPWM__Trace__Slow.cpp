// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPWM__Syms.h"


//======================

void VPWM::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPWM::traceInit, &VPWM::traceFull, &VPWM::traceChg, this);
}
void VPWM::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPWM* t=(VPWM*)userthis;
    VPWM__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPWM::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPWM* t=(VPWM*)userthis;
    VPWM__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPWM::traceInitThis(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPWM::traceFullThis(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPWM::traceInitThis__1(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+3,"clock",-1);
	vcdp->declBit(c+4,"reset",-1);
	vcdp->declBus(c+5,"io_rise",-1,1,0);
	vcdp->declBus(c+6,"io_fall",-1,1,0);
	vcdp->declBit(c+7,"io_out",-1);
	vcdp->declBit(c+3,"PWM clock",-1);
	vcdp->declBit(c+4,"PWM reset",-1);
	vcdp->declBus(c+5,"PWM io_rise",-1,1,0);
	vcdp->declBus(c+6,"PWM io_fall",-1,1,0);
	vcdp->declBit(c+7,"PWM io_out",-1);
	vcdp->declBus(c+1,"PWM counter",-1,1,0);
	// Tracing: PWM _RAND_0 // Ignored: Inlined leading underscore at PWM.v:9
	vcdp->declBit(c+2,"PWM out",-1);
	// Tracing: PWM _RAND_1 // Ignored: Inlined leading underscore at PWM.v:11
	// Tracing: PWM _T_15 // Ignored: Inlined leading underscore at PWM.v:12
	// Tracing: PWM _T_16 // Ignored: Inlined leading underscore at PWM.v:13
	// Tracing: PWM _T_17 // Ignored: Inlined leading underscore at PWM.v:14
	// Tracing: PWM _T_20 // Ignored: Inlined leading underscore at PWM.v:15
	// Tracing: PWM _T_22 // Ignored: Inlined leading underscore at PWM.v:16
	// Tracing: PWM _T_23 // Ignored: Inlined leading underscore at PWM.v:17
	// Tracing: PWM _GEN_0 // Ignored: Inlined leading underscore at PWM.v:18
	// Tracing: PWM _GEN_1 // Ignored: Inlined leading underscore at PWM.v:19
    }
}

void VPWM::traceFullThis__1(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->PWM__DOT__counter),2);
	vcdp->fullBit(c+2,(vlTOPp->PWM__DOT__out));
	vcdp->fullBit(c+3,(vlTOPp->clock));
	vcdp->fullBit(c+4,(vlTOPp->reset));
	vcdp->fullBus(c+5,(vlTOPp->io_rise),2);
	vcdp->fullBus(c+6,(vlTOPp->io_fall),2);
	vcdp->fullBit(c+7,(vlTOPp->io_out));
    }
}
