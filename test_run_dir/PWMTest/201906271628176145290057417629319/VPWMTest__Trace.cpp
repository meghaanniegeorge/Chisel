// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPWMTest__Syms.h"


//======================

void VPWMTest::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPWMTest* t=(VPWMTest*)userthis;
    VPWMTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPWMTest::traceChgThis(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPWMTest::traceChgThis__2(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->PWMTest__DOT__c_io_rise),4);
	vcdp->chgBus(c+2,(vlTOPp->PWMTest__DOT__c_io_fall),4);
    }
}

void VPWMTest::traceChgThis__3(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+3,(vlTOPp->PWMTest__DOT__c__DOT__out));
	vcdp->chgBus(c+4,(vlTOPp->PWMTest__DOT__value),6);
	vcdp->chgBus(c+5,(vlTOPp->PWMTest__DOT__c__DOT__counter),4);
    }
}

void VPWMTest::traceChgThis__4(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+6,(vlTOPp->clock));
	vcdp->chgBit(c+7,(vlTOPp->reset));
    }
}
