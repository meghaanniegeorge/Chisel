// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VPWM__Syms_H_
#define _VPWM__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VPWM.h"

// SYMS CLASS
class VPWM__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VPWM*                          TOPp;
    
    // CREATORS
    VPWM__Syms(VPWM* topp, const char* namep);
    ~VPWM__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
