// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPWM__Syms.h"


//======================

void VPWM::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPWM* t=(VPWM*)userthis;
    VPWM__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPWM::traceChgThis(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPWM::traceChgThis__2(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->PWM__DOT__counter),2);
	vcdp->chgBit(c+2,(vlTOPp->PWM__DOT__out));
    }
}

void VPWM::traceChgThis__3(VPWM__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+3,(vlTOPp->clock));
	vcdp->chgBit(c+4,(vlTOPp->reset));
	vcdp->chgBus(c+5,(vlTOPp->io_rise),2);
	vcdp->chgBus(c+6,(vlTOPp->io_fall),2);
	vcdp->chgBit(c+7,(vlTOPp->io_out));
    }
}
