// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPWMTest.h for the primary calling header

#include "VPWMTest.h"
#include "VPWMTest__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPWMTest) {
    VPWMTest__Syms* __restrict vlSymsp = __VlSymsp = new VPWMTest__Syms(this, name());
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPWMTest::__Vconfigure(VPWMTest__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPWMTest::~VPWMTest() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VPWMTest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPWMTest::eval\n"); );
    VPWMTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VPWMTest::_eval_initial_loop(VPWMTest__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VPWMTest::_sequent__TOP__1(VPWMTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_sequent__TOP__1\n"); );
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__PWMTest__DOT__value,5,0);
    // Body
    __Vdly__PWMTest__DOT__value = vlTOPp->PWMTest__DOT__value;
    // ALWAYS at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:382
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((IData)(vlTOPp->PWMTest__DOT___GEN_162) 
			  & (IData)(vlTOPp->PWMTest__DOT___T_469)) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"    passed step %2# -- out:  %1#\n",
		       6,vlTOPp->PWMTest__DOT__value,
		       1,(IData)(vlTOPp->PWMTest__DOT__c__DOT__out));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((IData)(vlTOPp->PWMTest__DOT___GEN_162) 
			  & (~ (IData)(vlTOPp->PWMTest__DOT___T_469))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"    failed on step %2# -- port out:  %1# expected %1#\n",
		       6,vlTOPp->PWMTest__DOT__value,
		       1,(IData)(vlTOPp->PWMTest__DOT__c__DOT__out),
		       1,((0x26U == (IData)(vlTOPp->PWMTest__DOT__value)) 
			  | ((0x25U != (IData)(vlTOPp->PWMTest__DOT__value)) 
			     & ((0x24U != (IData)(vlTOPp->PWMTest__DOT__value)) 
				& ((0x23U == (IData)(vlTOPp->PWMTest__DOT__value)) 
				   | (IData)(vlTOPp->PWMTest__DOT___GEN_151))))));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((IData)(vlTOPp->PWMTest__DOT___GEN_162) 
			  & (~ (IData)(vlTOPp->PWMTest__DOT___T_469))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at SteppedHWIOTester.scala:159 assert(false.B)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((IData)(vlTOPp->PWMTest__DOT___GEN_162) 
			  & (~ (IData)(vlTOPp->PWMTest__DOT___T_469))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: PWMTest.v:441: Assertion failed in %NPWMTest\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v",441,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((IData)(vlTOPp->PWMTest__DOT___GEN_162) 
			  & (~ (IData)(vlTOPp->PWMTest__DOT___T_469))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v",452,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->PWMTest__DOT___T_9)) 
			  & (0x26U == (IData)(vlTOPp->PWMTest__DOT__value))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Stopping, end of tests, 39 steps\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->PWMTest__DOT___T_9)) 
			  & (0x26U == (IData)(vlTOPp->PWMTest__DOT__value))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v",474,"");
	}
    }
    // ALWAYS at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:63
    vlTOPp->PWMTest__DOT__c__DOT__counter = ((IData)(vlTOPp->reset)
					      ? 0U : 
					     ((IData)(vlTOPp->PWMTest__DOT__c__DOT___T_17)
					       ? 1U
					       : (IData)(vlTOPp->PWMTest__DOT__c__DOT___T_23)));
    // ALWAYS at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:382
    if (vlTOPp->reset) {
	__Vdly__PWMTest__DOT__value = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->PWMTest__DOT___T_9)))) {
	    __Vdly__PWMTest__DOT__value = ((IData)(vlTOPp->PWMTest__DOT___T_486)
					    ? 0U : (IData)(vlTOPp->PWMTest__DOT___T_489));
	}
    }
    // ALWAYS at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:63
    if (vlTOPp->reset) {
	vlTOPp->PWMTest__DOT__c__DOT__out = 1U;
    } else {
	if (vlTOPp->PWMTest__DOT__c__DOT___T_17) {
	    vlTOPp->PWMTest__DOT__c__DOT__out = vlTOPp->PWMTest__DOT__c__DOT___T_20;
	}
    }
    vlTOPp->PWMTest__DOT__c__DOT___T_23 = (0xfU & ((IData)(1U) 
						   + (IData)(vlTOPp->PWMTest__DOT__c__DOT__counter)));
    // ALWAYS at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:382
    if (vlTOPp->reset) {
	vlTOPp->PWMTest__DOT___T_9 = 0U;
    } else {
	if (vlTOPp->PWMTest__DOT___T_11) {
	    if ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value))) {
		vlTOPp->PWMTest__DOT___T_9 = 1U;
	    }
	}
    }
    vlTOPp->PWMTest__DOT__value = __Vdly__PWMTest__DOT__value;
    vlTOPp->PWMTest__DOT__c__DOT___T_20 = (1U & (~ (IData)(vlTOPp->PWMTest__DOT__c__DOT__out)));
    vlTOPp->PWMTest__DOT___T_11 = (1U & (~ (IData)(vlTOPp->PWMTest__DOT___T_9)));
    vlTOPp->PWMTest__DOT___T_486 = (0x26U == (IData)(vlTOPp->PWMTest__DOT__value));
    vlTOPp->PWMTest__DOT___T_489 = (0x3fU & ((IData)(1U) 
					     + (IData)(vlTOPp->PWMTest__DOT__value)));
    vlTOPp->PWMTest__DOT__c_io_rise = ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value))
				        ? 1U : ((0x25U 
						 == (IData)(vlTOPp->PWMTest__DOT__value))
						 ? 1U
						 : 
						((0x24U 
						  == (IData)(vlTOPp->PWMTest__DOT__value))
						  ? 1U
						  : 
						 ((0x23U 
						   == (IData)(vlTOPp->PWMTest__DOT__value))
						   ? 1U
						   : 
						  ((0x22U 
						    == (IData)(vlTOPp->PWMTest__DOT__value))
						    ? 7U
						    : 
						   ((0x21U 
						     == (IData)(vlTOPp->PWMTest__DOT__value))
						     ? 7U
						     : 
						    ((0x20U 
						      == (IData)(vlTOPp->PWMTest__DOT__value))
						      ? 7U
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->PWMTest__DOT__value))
						       ? 7U
						       : 
						      ((0x1eU 
							== (IData)(vlTOPp->PWMTest__DOT__value))
						        ? 7U
						        : 
						       ((0x1dU 
							 == (IData)(vlTOPp->PWMTest__DOT__value))
							 ? 7U
							 : 
							((0x1cU 
							  == (IData)(vlTOPp->PWMTest__DOT__value))
							  ? 7U
							  : 
							 ((0x1bU 
							   == (IData)(vlTOPp->PWMTest__DOT__value))
							   ? 7U
							   : 
							  ((0x1aU 
							    == (IData)(vlTOPp->PWMTest__DOT__value))
							    ? 7U
							    : 
							   ((0x19U 
							     == (IData)(vlTOPp->PWMTest__DOT__value))
							     ? 7U
							     : 
							    ((0x18U 
							      == (IData)(vlTOPp->PWMTest__DOT__value))
							      ? 7U
							      : 
							     ((0x17U 
							       == (IData)(vlTOPp->PWMTest__DOT__value))
							       ? 7U
							       : 
							      ((0x16U 
								== (IData)(vlTOPp->PWMTest__DOT__value))
							        ? 7U
							        : 
							       ((0x15U 
								 == (IData)(vlTOPp->PWMTest__DOT__value))
								 ? 7U
								 : 
								((0x14U 
								  == (IData)(vlTOPp->PWMTest__DOT__value))
								  ? 7U
								  : 
								 ((0x13U 
								   == (IData)(vlTOPp->PWMTest__DOT__value))
								   ? 7U
								   : 8U))))))))))))))))))));
    vlTOPp->PWMTest__DOT__c_io_fall = ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value))
				        ? 2U : ((0x25U 
						 == (IData)(vlTOPp->PWMTest__DOT__value))
						 ? 2U
						 : 
						((0x24U 
						  == (IData)(vlTOPp->PWMTest__DOT__value))
						  ? 2U
						  : 
						 ((0x23U 
						   == (IData)(vlTOPp->PWMTest__DOT__value))
						   ? 2U
						   : 
						  ((0x22U 
						    == (IData)(vlTOPp->PWMTest__DOT__value))
						    ? 9U
						    : 
						   ((0x21U 
						     == (IData)(vlTOPp->PWMTest__DOT__value))
						     ? 9U
						     : 
						    ((0x20U 
						      == (IData)(vlTOPp->PWMTest__DOT__value))
						      ? 9U
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->PWMTest__DOT__value))
						       ? 9U
						       : 
						      ((0x1eU 
							== (IData)(vlTOPp->PWMTest__DOT__value))
						        ? 9U
						        : 
						       ((0x1dU 
							 == (IData)(vlTOPp->PWMTest__DOT__value))
							 ? 9U
							 : 
							((0x1cU 
							  == (IData)(vlTOPp->PWMTest__DOT__value))
							  ? 9U
							  : 
							 ((0x1bU 
							   == (IData)(vlTOPp->PWMTest__DOT__value))
							   ? 9U
							   : 
							  ((0x1aU 
							    == (IData)(vlTOPp->PWMTest__DOT__value))
							    ? 9U
							    : 
							   ((0x19U 
							     == (IData)(vlTOPp->PWMTest__DOT__value))
							     ? 9U
							     : 
							    ((0x18U 
							      == (IData)(vlTOPp->PWMTest__DOT__value))
							      ? 9U
							      : 
							     ((0x17U 
							       == (IData)(vlTOPp->PWMTest__DOT__value))
							       ? 9U
							       : 
							      ((0x16U 
								== (IData)(vlTOPp->PWMTest__DOT__value))
							        ? 9U
							        : 
							       ((0x15U 
								 == (IData)(vlTOPp->PWMTest__DOT__value))
								 ? 9U
								 : 
								((0x14U 
								  == (IData)(vlTOPp->PWMTest__DOT__value))
								  ? 9U
								  : 
								 ((0x13U 
								   == (IData)(vlTOPp->PWMTest__DOT__value))
								   ? 9U
								   : 0xaU))))))))))))))))))));
    vlTOPp->PWMTest__DOT___GEN_86 = ((8U == (IData)(vlTOPp->PWMTest__DOT__value)) 
				     | ((7U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					| ((6U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					   | ((5U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					      | ((4U 
						  == (IData)(vlTOPp->PWMTest__DOT__value)) 
						 | ((3U 
						     == (IData)(vlTOPp->PWMTest__DOT__value)) 
						    | ((2U 
							== (IData)(vlTOPp->PWMTest__DOT__value)) 
						       | (1U 
							  == (IData)(vlTOPp->PWMTest__DOT__value)))))))));
    vlTOPp->PWMTest__DOT__c__DOT___T_17 = ((IData)(vlTOPp->PWMTest__DOT__c__DOT__out)
					    ? ((IData)(vlTOPp->PWMTest__DOT__c__DOT__counter) 
					       == (IData)(vlTOPp->PWMTest__DOT__c_io_rise))
					    : ((IData)(vlTOPp->PWMTest__DOT__c__DOT__counter) 
					       == (IData)(vlTOPp->PWMTest__DOT__c_io_fall)));
    vlTOPp->PWMTest__DOT___GEN_112 = ((0x22U == (IData)(vlTOPp->PWMTest__DOT__value)) 
				      | ((0x21U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					 | ((0x20U 
					     == (IData)(vlTOPp->PWMTest__DOT__value)) 
					    | ((0x1fU 
						== (IData)(vlTOPp->PWMTest__DOT__value)) 
					       | ((0x1eU 
						   == (IData)(vlTOPp->PWMTest__DOT__value)) 
						  | ((0x1dU 
						      == (IData)(vlTOPp->PWMTest__DOT__value)) 
						     | ((0x1cU 
							 == (IData)(vlTOPp->PWMTest__DOT__value)) 
							| ((0x1bU 
							    == (IData)(vlTOPp->PWMTest__DOT__value)) 
							   | ((0x1aU 
							       == (IData)(vlTOPp->PWMTest__DOT__value)) 
							      | ((0x19U 
								  == (IData)(vlTOPp->PWMTest__DOT__value)) 
								 | ((0x18U 
								     == (IData)(vlTOPp->PWMTest__DOT__value)) 
								    | ((0x17U 
									== (IData)(vlTOPp->PWMTest__DOT__value)) 
								       | ((0x16U 
									   == (IData)(vlTOPp->PWMTest__DOT__value)) 
									  | ((0x15U 
									      == (IData)(vlTOPp->PWMTest__DOT__value)) 
									     | ((0x14U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x13U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x12U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x11U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x10U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xfU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xeU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xdU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xcU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xbU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xaU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((9U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| (IData)(vlTOPp->PWMTest__DOT___GEN_86)))))))))))))))))))))))))));
    vlTOPp->PWMTest__DOT___GEN_151 = ((0x22U != (IData)(vlTOPp->PWMTest__DOT__value)) 
				      & ((0x21U != (IData)(vlTOPp->PWMTest__DOT__value)) 
					 & ((0x20U 
					     != (IData)(vlTOPp->PWMTest__DOT__value)) 
					    & ((0x1fU 
						!= (IData)(vlTOPp->PWMTest__DOT__value)) 
					       & ((0x1eU 
						   != (IData)(vlTOPp->PWMTest__DOT__value)) 
						  & ((0x1dU 
						      != (IData)(vlTOPp->PWMTest__DOT__value)) 
						     & ((0x1cU 
							 != (IData)(vlTOPp->PWMTest__DOT__value)) 
							& ((0x1bU 
							    != (IData)(vlTOPp->PWMTest__DOT__value)) 
							   & ((0x1aU 
							       != (IData)(vlTOPp->PWMTest__DOT__value)) 
							      & ((0x19U 
								  == (IData)(vlTOPp->PWMTest__DOT__value)) 
								 | ((0x18U 
								     == (IData)(vlTOPp->PWMTest__DOT__value)) 
								    | ((0x17U 
									== (IData)(vlTOPp->PWMTest__DOT__value)) 
								       | ((0x16U 
									   == (IData)(vlTOPp->PWMTest__DOT__value)) 
									  | ((0x15U 
									      == (IData)(vlTOPp->PWMTest__DOT__value)) 
									     | ((0x14U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x13U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x12U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0x11U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0x10U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xfU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xeU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xdU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xcU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xbU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xaU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((9U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& (IData)(vlTOPp->PWMTest__DOT___GEN_86)))))))))))))))))))))))))));
    vlTOPp->PWMTest__DOT___GEN_162 = ((~ (IData)(vlTOPp->PWMTest__DOT___T_9)) 
				      & ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					 | ((0x25U 
					     == (IData)(vlTOPp->PWMTest__DOT__value)) 
					    | ((0x24U 
						== (IData)(vlTOPp->PWMTest__DOT__value)) 
					       | ((0x23U 
						   == (IData)(vlTOPp->PWMTest__DOT__value)) 
						  | (IData)(vlTOPp->PWMTest__DOT___GEN_112))))));
    vlTOPp->PWMTest__DOT___T_469 = ((IData)(vlTOPp->PWMTest__DOT__c__DOT__out) 
				    == ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					| ((0x25U != (IData)(vlTOPp->PWMTest__DOT__value)) 
					   & ((0x24U 
					       != (IData)(vlTOPp->PWMTest__DOT__value)) 
					      & ((0x23U 
						  == (IData)(vlTOPp->PWMTest__DOT__value)) 
						 | (IData)(vlTOPp->PWMTest__DOT___GEN_151))))));
}

void VPWMTest::_settle__TOP__2(VPWMTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_settle__TOP__2\n"); );
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PWMTest__DOT__c__DOT___T_23 = (0xfU & ((IData)(1U) 
						   + (IData)(vlTOPp->PWMTest__DOT__c__DOT__counter)));
    vlTOPp->PWMTest__DOT__c__DOT___T_20 = (1U & (~ (IData)(vlTOPp->PWMTest__DOT__c__DOT__out)));
    vlTOPp->PWMTest__DOT___T_11 = (1U & (~ (IData)(vlTOPp->PWMTest__DOT___T_9)));
    vlTOPp->PWMTest__DOT___T_486 = (0x26U == (IData)(vlTOPp->PWMTest__DOT__value));
    vlTOPp->PWMTest__DOT___T_489 = (0x3fU & ((IData)(1U) 
					     + (IData)(vlTOPp->PWMTest__DOT__value)));
    vlTOPp->PWMTest__DOT__c_io_rise = ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value))
				        ? 1U : ((0x25U 
						 == (IData)(vlTOPp->PWMTest__DOT__value))
						 ? 1U
						 : 
						((0x24U 
						  == (IData)(vlTOPp->PWMTest__DOT__value))
						  ? 1U
						  : 
						 ((0x23U 
						   == (IData)(vlTOPp->PWMTest__DOT__value))
						   ? 1U
						   : 
						  ((0x22U 
						    == (IData)(vlTOPp->PWMTest__DOT__value))
						    ? 7U
						    : 
						   ((0x21U 
						     == (IData)(vlTOPp->PWMTest__DOT__value))
						     ? 7U
						     : 
						    ((0x20U 
						      == (IData)(vlTOPp->PWMTest__DOT__value))
						      ? 7U
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->PWMTest__DOT__value))
						       ? 7U
						       : 
						      ((0x1eU 
							== (IData)(vlTOPp->PWMTest__DOT__value))
						        ? 7U
						        : 
						       ((0x1dU 
							 == (IData)(vlTOPp->PWMTest__DOT__value))
							 ? 7U
							 : 
							((0x1cU 
							  == (IData)(vlTOPp->PWMTest__DOT__value))
							  ? 7U
							  : 
							 ((0x1bU 
							   == (IData)(vlTOPp->PWMTest__DOT__value))
							   ? 7U
							   : 
							  ((0x1aU 
							    == (IData)(vlTOPp->PWMTest__DOT__value))
							    ? 7U
							    : 
							   ((0x19U 
							     == (IData)(vlTOPp->PWMTest__DOT__value))
							     ? 7U
							     : 
							    ((0x18U 
							      == (IData)(vlTOPp->PWMTest__DOT__value))
							      ? 7U
							      : 
							     ((0x17U 
							       == (IData)(vlTOPp->PWMTest__DOT__value))
							       ? 7U
							       : 
							      ((0x16U 
								== (IData)(vlTOPp->PWMTest__DOT__value))
							        ? 7U
							        : 
							       ((0x15U 
								 == (IData)(vlTOPp->PWMTest__DOT__value))
								 ? 7U
								 : 
								((0x14U 
								  == (IData)(vlTOPp->PWMTest__DOT__value))
								  ? 7U
								  : 
								 ((0x13U 
								   == (IData)(vlTOPp->PWMTest__DOT__value))
								   ? 7U
								   : 8U))))))))))))))))))));
    vlTOPp->PWMTest__DOT__c_io_fall = ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value))
				        ? 2U : ((0x25U 
						 == (IData)(vlTOPp->PWMTest__DOT__value))
						 ? 2U
						 : 
						((0x24U 
						  == (IData)(vlTOPp->PWMTest__DOT__value))
						  ? 2U
						  : 
						 ((0x23U 
						   == (IData)(vlTOPp->PWMTest__DOT__value))
						   ? 2U
						   : 
						  ((0x22U 
						    == (IData)(vlTOPp->PWMTest__DOT__value))
						    ? 9U
						    : 
						   ((0x21U 
						     == (IData)(vlTOPp->PWMTest__DOT__value))
						     ? 9U
						     : 
						    ((0x20U 
						      == (IData)(vlTOPp->PWMTest__DOT__value))
						      ? 9U
						      : 
						     ((0x1fU 
						       == (IData)(vlTOPp->PWMTest__DOT__value))
						       ? 9U
						       : 
						      ((0x1eU 
							== (IData)(vlTOPp->PWMTest__DOT__value))
						        ? 9U
						        : 
						       ((0x1dU 
							 == (IData)(vlTOPp->PWMTest__DOT__value))
							 ? 9U
							 : 
							((0x1cU 
							  == (IData)(vlTOPp->PWMTest__DOT__value))
							  ? 9U
							  : 
							 ((0x1bU 
							   == (IData)(vlTOPp->PWMTest__DOT__value))
							   ? 9U
							   : 
							  ((0x1aU 
							    == (IData)(vlTOPp->PWMTest__DOT__value))
							    ? 9U
							    : 
							   ((0x19U 
							     == (IData)(vlTOPp->PWMTest__DOT__value))
							     ? 9U
							     : 
							    ((0x18U 
							      == (IData)(vlTOPp->PWMTest__DOT__value))
							      ? 9U
							      : 
							     ((0x17U 
							       == (IData)(vlTOPp->PWMTest__DOT__value))
							       ? 9U
							       : 
							      ((0x16U 
								== (IData)(vlTOPp->PWMTest__DOT__value))
							        ? 9U
							        : 
							       ((0x15U 
								 == (IData)(vlTOPp->PWMTest__DOT__value))
								 ? 9U
								 : 
								((0x14U 
								  == (IData)(vlTOPp->PWMTest__DOT__value))
								  ? 9U
								  : 
								 ((0x13U 
								   == (IData)(vlTOPp->PWMTest__DOT__value))
								   ? 9U
								   : 0xaU))))))))))))))))))));
    vlTOPp->PWMTest__DOT___GEN_86 = ((8U == (IData)(vlTOPp->PWMTest__DOT__value)) 
				     | ((7U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					| ((6U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					   | ((5U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					      | ((4U 
						  == (IData)(vlTOPp->PWMTest__DOT__value)) 
						 | ((3U 
						     == (IData)(vlTOPp->PWMTest__DOT__value)) 
						    | ((2U 
							== (IData)(vlTOPp->PWMTest__DOT__value)) 
						       | (1U 
							  == (IData)(vlTOPp->PWMTest__DOT__value)))))))));
    vlTOPp->PWMTest__DOT__c__DOT___T_17 = ((IData)(vlTOPp->PWMTest__DOT__c__DOT__out)
					    ? ((IData)(vlTOPp->PWMTest__DOT__c__DOT__counter) 
					       == (IData)(vlTOPp->PWMTest__DOT__c_io_rise))
					    : ((IData)(vlTOPp->PWMTest__DOT__c__DOT__counter) 
					       == (IData)(vlTOPp->PWMTest__DOT__c_io_fall)));
    vlTOPp->PWMTest__DOT___GEN_112 = ((0x22U == (IData)(vlTOPp->PWMTest__DOT__value)) 
				      | ((0x21U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					 | ((0x20U 
					     == (IData)(vlTOPp->PWMTest__DOT__value)) 
					    | ((0x1fU 
						== (IData)(vlTOPp->PWMTest__DOT__value)) 
					       | ((0x1eU 
						   == (IData)(vlTOPp->PWMTest__DOT__value)) 
						  | ((0x1dU 
						      == (IData)(vlTOPp->PWMTest__DOT__value)) 
						     | ((0x1cU 
							 == (IData)(vlTOPp->PWMTest__DOT__value)) 
							| ((0x1bU 
							    == (IData)(vlTOPp->PWMTest__DOT__value)) 
							   | ((0x1aU 
							       == (IData)(vlTOPp->PWMTest__DOT__value)) 
							      | ((0x19U 
								  == (IData)(vlTOPp->PWMTest__DOT__value)) 
								 | ((0x18U 
								     == (IData)(vlTOPp->PWMTest__DOT__value)) 
								    | ((0x17U 
									== (IData)(vlTOPp->PWMTest__DOT__value)) 
								       | ((0x16U 
									   == (IData)(vlTOPp->PWMTest__DOT__value)) 
									  | ((0x15U 
									      == (IData)(vlTOPp->PWMTest__DOT__value)) 
									     | ((0x14U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x13U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x12U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x11U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x10U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xfU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xeU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xdU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xcU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xbU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0xaU 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((9U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| (IData)(vlTOPp->PWMTest__DOT___GEN_86)))))))))))))))))))))))))));
    vlTOPp->PWMTest__DOT___GEN_151 = ((0x22U != (IData)(vlTOPp->PWMTest__DOT__value)) 
				      & ((0x21U != (IData)(vlTOPp->PWMTest__DOT__value)) 
					 & ((0x20U 
					     != (IData)(vlTOPp->PWMTest__DOT__value)) 
					    & ((0x1fU 
						!= (IData)(vlTOPp->PWMTest__DOT__value)) 
					       & ((0x1eU 
						   != (IData)(vlTOPp->PWMTest__DOT__value)) 
						  & ((0x1dU 
						      != (IData)(vlTOPp->PWMTest__DOT__value)) 
						     & ((0x1cU 
							 != (IData)(vlTOPp->PWMTest__DOT__value)) 
							& ((0x1bU 
							    != (IData)(vlTOPp->PWMTest__DOT__value)) 
							   & ((0x1aU 
							       != (IData)(vlTOPp->PWMTest__DOT__value)) 
							      & ((0x19U 
								  == (IData)(vlTOPp->PWMTest__DOT__value)) 
								 | ((0x18U 
								     == (IData)(vlTOPp->PWMTest__DOT__value)) 
								    | ((0x17U 
									== (IData)(vlTOPp->PWMTest__DOT__value)) 
								       | ((0x16U 
									   == (IData)(vlTOPp->PWMTest__DOT__value)) 
									  | ((0x15U 
									      == (IData)(vlTOPp->PWMTest__DOT__value)) 
									     | ((0x14U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x13U 
										== (IData)(vlTOPp->PWMTest__DOT__value)) 
										| ((0x12U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0x11U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0x10U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xfU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xeU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xdU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xcU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xbU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((0xaU 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& ((9U 
										!= (IData)(vlTOPp->PWMTest__DOT__value)) 
										& (IData)(vlTOPp->PWMTest__DOT___GEN_86)))))))))))))))))))))))))));
    vlTOPp->PWMTest__DOT___GEN_162 = ((~ (IData)(vlTOPp->PWMTest__DOT___T_9)) 
				      & ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					 | ((0x25U 
					     == (IData)(vlTOPp->PWMTest__DOT__value)) 
					    | ((0x24U 
						== (IData)(vlTOPp->PWMTest__DOT__value)) 
					       | ((0x23U 
						   == (IData)(vlTOPp->PWMTest__DOT__value)) 
						  | (IData)(vlTOPp->PWMTest__DOT___GEN_112))))));
    vlTOPp->PWMTest__DOT___T_469 = ((IData)(vlTOPp->PWMTest__DOT__c__DOT__out) 
				    == ((0x26U == (IData)(vlTOPp->PWMTest__DOT__value)) 
					| ((0x25U != (IData)(vlTOPp->PWMTest__DOT__value)) 
					   & ((0x24U 
					       != (IData)(vlTOPp->PWMTest__DOT__value)) 
					      & ((0x23U 
						  == (IData)(vlTOPp->PWMTest__DOT__value)) 
						 | (IData)(vlTOPp->PWMTest__DOT___GEN_151))))));
}

void VPWMTest::_eval(VPWMTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_eval\n"); );
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPWMTest::_eval_initial(VPWMTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_eval_initial\n"); );
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPWMTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::final\n"); );
    // Variables
    VPWMTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPWMTest::_eval_settle(VPWMTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_eval_settle\n"); );
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VPWMTest::_change_request(VPWMTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_change_request\n"); );
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPWMTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VPWMTest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPWMTest::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PWMTest__DOT__c_io_rise = VL_RAND_RESET_I(4);
    PWMTest__DOT__c_io_fall = VL_RAND_RESET_I(4);
    PWMTest__DOT__value = VL_RAND_RESET_I(6);
    PWMTest__DOT___T_9 = VL_RAND_RESET_I(1);
    PWMTest__DOT___T_11 = VL_RAND_RESET_I(1);
    PWMTest__DOT___GEN_86 = VL_RAND_RESET_I(1);
    PWMTest__DOT___GEN_112 = VL_RAND_RESET_I(1);
    PWMTest__DOT___GEN_151 = VL_RAND_RESET_I(1);
    PWMTest__DOT___T_469 = VL_RAND_RESET_I(1);
    PWMTest__DOT___T_486 = VL_RAND_RESET_I(1);
    PWMTest__DOT___T_489 = VL_RAND_RESET_I(6);
    PWMTest__DOT___GEN_162 = VL_RAND_RESET_I(1);
    PWMTest__DOT__c__DOT__counter = VL_RAND_RESET_I(4);
    PWMTest__DOT__c__DOT__out = VL_RAND_RESET_I(1);
    PWMTest__DOT__c__DOT___T_17 = VL_RAND_RESET_I(1);
    PWMTest__DOT__c__DOT___T_20 = VL_RAND_RESET_I(1);
    PWMTest__DOT__c__DOT___T_23 = VL_RAND_RESET_I(4);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
