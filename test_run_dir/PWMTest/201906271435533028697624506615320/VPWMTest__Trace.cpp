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
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
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
	vcdp->chgBus(c+1,(((0x24U == (IData)(vlTOPp->PWMTest__DOT__value))
			    ? 2U : ((0x23U == (IData)(vlTOPp->PWMTest__DOT__value))
				     ? 2U : ((0x22U 
					      == (IData)(vlTOPp->PWMTest__DOT__value))
					      ? 2U : 
					     ((0x21U 
					       == (IData)(vlTOPp->PWMTest__DOT__value))
					       ? 2U
					       : ((0x20U 
						   == (IData)(vlTOPp->PWMTest__DOT__value))
						   ? 2U
						   : 
						  ((0x1fU 
						    == (IData)(vlTOPp->PWMTest__DOT__value))
						    ? 2U
						    : 
						   ((0x1eU 
						     == (IData)(vlTOPp->PWMTest__DOT__value))
						     ? 2U
						     : 
						    ((0x1dU 
						      == (IData)(vlTOPp->PWMTest__DOT__value))
						      ? 2U
						      : 
						     ((0x1cU 
						       == (IData)(vlTOPp->PWMTest__DOT__value))
						       ? 2U
						       : 
						      ((0x1bU 
							== (IData)(vlTOPp->PWMTest__DOT__value))
						        ? 2U
						        : 
						       ((0x1aU 
							 == (IData)(vlTOPp->PWMTest__DOT__value))
							 ? 2U
							 : 
							((0x19U 
							  == (IData)(vlTOPp->PWMTest__DOT__value))
							  ? 2U
							  : 
							 ((0x18U 
							   == (IData)(vlTOPp->PWMTest__DOT__value))
							   ? 2U
							   : 
							  ((0x17U 
							    == (IData)(vlTOPp->PWMTest__DOT__value))
							    ? 2U
							    : 
							   ((0x16U 
							     == (IData)(vlTOPp->PWMTest__DOT__value))
							     ? 2U
							     : 
							    ((0x15U 
							      == (IData)(vlTOPp->PWMTest__DOT__value))
							      ? 2U
							      : 
							     ((0x14U 
							       == (IData)(vlTOPp->PWMTest__DOT__value))
							       ? 1U
							       : 
							      ((0x13U 
								== (IData)(vlTOPp->PWMTest__DOT__value))
							        ? 1U
							        : 0xbU))))))))))))))))))),4);
	vcdp->chgBus(c+2,(((0x24U == (IData)(vlTOPp->PWMTest__DOT__value))
			    ? 0xdU : ((0x23U == (IData)(vlTOPp->PWMTest__DOT__value))
				       ? 0xdU : ((0x22U 
						  == (IData)(vlTOPp->PWMTest__DOT__value))
						  ? 0xdU
						  : 
						 ((0x21U 
						   == (IData)(vlTOPp->PWMTest__DOT__value))
						   ? 0xdU
						   : 
						  ((0x20U 
						    == (IData)(vlTOPp->PWMTest__DOT__value))
						    ? 0xdU
						    : 
						   ((0x1fU 
						     == (IData)(vlTOPp->PWMTest__DOT__value))
						     ? 0xdU
						     : 
						    ((0x1eU 
						      == (IData)(vlTOPp->PWMTest__DOT__value))
						      ? 0xdU
						      : 
						     ((0x1dU 
						       == (IData)(vlTOPp->PWMTest__DOT__value))
						       ? 0xdU
						       : 
						      ((0x1cU 
							== (IData)(vlTOPp->PWMTest__DOT__value))
						        ? 0xdU
						        : 
						       ((0x1bU 
							 == (IData)(vlTOPp->PWMTest__DOT__value))
							 ? 0xdU
							 : 
							((0x1aU 
							  == (IData)(vlTOPp->PWMTest__DOT__value))
							  ? 0xdU
							  : 
							 ((0x19U 
							   == (IData)(vlTOPp->PWMTest__DOT__value))
							   ? 0xdU
							   : 
							  ((0x18U 
							    == (IData)(vlTOPp->PWMTest__DOT__value))
							    ? 0xdU
							    : 
							   ((0x17U 
							     == (IData)(vlTOPp->PWMTest__DOT__value))
							     ? 0xdU
							     : 
							    ((0x16U 
							      == (IData)(vlTOPp->PWMTest__DOT__value))
							      ? 0xdU
							      : 
							     ((0x15U 
							       == (IData)(vlTOPp->PWMTest__DOT__value))
							       ? 0xdU
							       : 
							      ((0x14U 
								== (IData)(vlTOPp->PWMTest__DOT__value))
							        ? 1U
							        : 
							       ((0x13U 
								 == (IData)(vlTOPp->PWMTest__DOT__value))
								 ? 1U
								 : 7U))))))))))))))))))),4);
	vcdp->chgBit(c+3,(vlTOPp->PWMTest__DOT__c__DOT__out));
	vcdp->chgBus(c+4,(vlTOPp->PWMTest__DOT__value),6);
	vcdp->chgBus(c+5,(vlTOPp->PWMTest__DOT__c__DOT__counter),4);
    }
}

void VPWMTest::traceChgThis__3(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+6,(vlTOPp->clock));
	vcdp->chgBit(c+7,(vlTOPp->reset));
    }
}
