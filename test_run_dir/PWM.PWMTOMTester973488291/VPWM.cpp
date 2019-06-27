// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPWM.h for the primary calling header

#include "VPWM.h"
#include "VPWM__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPWM) {
    VPWM__Syms* __restrict vlSymsp = __VlSymsp = new VPWM__Syms(this, name());
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPWM::__Vconfigure(VPWM__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPWM::~VPWM() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VPWM::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPWM::eval\n"); );
    VPWM__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VPWM::_eval_initial_loop(VPWM__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VPWM::_sequent__TOP__1(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_sequent__TOP__1\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at PWM.v:63
    vlTOPp->PWM__DOT__counter = ((IData)(vlTOPp->reset)
				  ? 0U : ((IData)(vlTOPp->PWM__DOT___T_17)
					   ? 1U : (IData)(vlTOPp->PWM__DOT___T_23)));
    // ALWAYS at PWM.v:63
    if (vlTOPp->reset) {
	vlTOPp->PWM__DOT__out = 1U;
    } else {
	if (vlTOPp->PWM__DOT___T_17) {
	    vlTOPp->PWM__DOT__out = vlTOPp->PWM__DOT___T_20;
	}
    }
    vlTOPp->PWM__DOT___T_23 = (3U & ((IData)(1U) + (IData)(vlTOPp->PWM__DOT__counter)));
    vlTOPp->PWM__DOT___T_20 = (1U & (~ (IData)(vlTOPp->PWM__DOT__out)));
    vlTOPp->io_out = vlTOPp->PWM__DOT__out;
}

void VPWM::_settle__TOP__2(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_settle__TOP__2\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PWM__DOT___T_20 = (1U & (~ (IData)(vlTOPp->PWM__DOT__out)));
    vlTOPp->PWM__DOT___T_23 = (3U & ((IData)(1U) + (IData)(vlTOPp->PWM__DOT__counter)));
    vlTOPp->io_out = vlTOPp->PWM__DOT__out;
    vlTOPp->PWM__DOT___T_17 = ((IData)(vlTOPp->PWM__DOT__out)
			        ? ((IData)(vlTOPp->PWM__DOT__counter) 
				   == (IData)(vlTOPp->io_rise))
			        : ((IData)(vlTOPp->PWM__DOT__counter) 
				   == (IData)(vlTOPp->io_fall)));
}

VL_INLINE_OPT void VPWM::_combo__TOP__3(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_combo__TOP__3\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PWM__DOT___T_17 = ((IData)(vlTOPp->PWM__DOT__out)
			        ? ((IData)(vlTOPp->PWM__DOT__counter) 
				   == (IData)(vlTOPp->io_rise))
			        : ((IData)(vlTOPp->PWM__DOT__counter) 
				   == (IData)(vlTOPp->io_fall)));
}

void VPWM::_eval(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_eval\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPWM::_eval_initial(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_eval_initial\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPWM::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::final\n"); );
    // Variables
    VPWM__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPWM::_eval_settle(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_eval_settle\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VPWM::_change_request(VPWM__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_change_request\n"); );
    VPWM* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPWM::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_rise & 0xfcU))) {
	Verilated::overWidthError("io_rise");}
    if (VL_UNLIKELY((io_fall & 0xfcU))) {
	Verilated::overWidthError("io_fall");}
}
#endif // VL_DEBUG

void VPWM::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWM::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_rise = VL_RAND_RESET_I(2);
    io_fall = VL_RAND_RESET_I(2);
    io_out = VL_RAND_RESET_I(1);
    PWM__DOT__counter = VL_RAND_RESET_I(2);
    PWM__DOT__out = VL_RAND_RESET_I(1);
    PWM__DOT___T_17 = VL_RAND_RESET_I(1);
    PWM__DOT___T_20 = VL_RAND_RESET_I(1);
    PWM__DOT___T_23 = VL_RAND_RESET_I(2);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
