// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPWMTest__Syms.h"


//======================

void VPWMTest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPWMTest::traceInit, &VPWMTest::traceFull, &VPWMTest::traceChg, this);
}
void VPWMTest::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPWMTest* t=(VPWMTest*)userthis;
    VPWMTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPWMTest::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPWMTest* t=(VPWMTest*)userthis;
    VPWMTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPWMTest::traceInitThis(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPWMTest::traceFullThis(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPWMTest::traceInitThis__1(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+6,"clock",-1);
	vcdp->declBit(c+7,"reset",-1);
	vcdp->declBit(c+6,"PWMTest clock",-1);
	vcdp->declBit(c+7,"PWMTest reset",-1);
	vcdp->declBit(c+6,"PWMTest c_clock",-1);
	vcdp->declBit(c+7,"PWMTest c_reset",-1);
	vcdp->declBus(c+1,"PWMTest c_io_rise",-1,3,0);
	vcdp->declBus(c+2,"PWMTest c_io_fall",-1,3,0);
	vcdp->declBit(c+3,"PWMTest c_io_out",-1);
	vcdp->declBus(c+4,"PWMTest value",-1,5,0);
	// Tracing: PWMTest _RAND_0 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:92
	// Tracing: PWMTest _T_9 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:93
	// Tracing: PWMTest _RAND_1 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:94
	// Tracing: PWMTest _T_11 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:95
	// Tracing: PWMTest _GEN_19 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:96
	// Tracing: PWMTest _GEN_20 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:97
	// Tracing: PWMTest _GEN_21 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:98
	// Tracing: PWMTest _GEN_22 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:99
	// Tracing: PWMTest _GEN_23 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:100
	// Tracing: PWMTest _GEN_24 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:101
	// Tracing: PWMTest _GEN_25 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:102
	// Tracing: PWMTest _GEN_26 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:103
	// Tracing: PWMTest _GEN_27 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:104
	// Tracing: PWMTest _GEN_28 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:105
	// Tracing: PWMTest _GEN_29 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:106
	// Tracing: PWMTest _GEN_30 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:107
	// Tracing: PWMTest _GEN_31 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:108
	// Tracing: PWMTest _GEN_32 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:109
	// Tracing: PWMTest _GEN_33 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:110
	// Tracing: PWMTest _GEN_34 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:111
	// Tracing: PWMTest _GEN_35 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:112
	// Tracing: PWMTest _GEN_36 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:113
	// Tracing: PWMTest _GEN_37 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:114
	// Tracing: PWMTest _GEN_58 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:115
	// Tracing: PWMTest _GEN_59 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:116
	// Tracing: PWMTest _GEN_60 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:117
	// Tracing: PWMTest _GEN_61 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:118
	// Tracing: PWMTest _GEN_62 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:119
	// Tracing: PWMTest _GEN_63 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:120
	// Tracing: PWMTest _GEN_64 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:121
	// Tracing: PWMTest _GEN_65 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:122
	// Tracing: PWMTest _GEN_66 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:123
	// Tracing: PWMTest _GEN_67 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:124
	// Tracing: PWMTest _GEN_68 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:125
	// Tracing: PWMTest _GEN_69 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:126
	// Tracing: PWMTest _GEN_70 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:127
	// Tracing: PWMTest _GEN_71 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:128
	// Tracing: PWMTest _GEN_72 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:129
	// Tracing: PWMTest _GEN_73 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:130
	// Tracing: PWMTest _GEN_74 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:131
	// Tracing: PWMTest _GEN_75 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:132
	// Tracing: PWMTest _GEN_76 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:133
	// Tracing: PWMTest _GEN_79 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:134
	// Tracing: PWMTest _GEN_80 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:135
	// Tracing: PWMTest _GEN_81 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:136
	// Tracing: PWMTest _GEN_82 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:137
	// Tracing: PWMTest _GEN_83 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:138
	// Tracing: PWMTest _GEN_84 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:139
	// Tracing: PWMTest _GEN_85 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:140
	// Tracing: PWMTest _GEN_86 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:141
	// Tracing: PWMTest _GEN_87 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:142
	// Tracing: PWMTest _GEN_88 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:143
	// Tracing: PWMTest _GEN_89 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:144
	// Tracing: PWMTest _GEN_90 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:145
	// Tracing: PWMTest _GEN_91 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:146
	// Tracing: PWMTest _GEN_92 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:147
	// Tracing: PWMTest _GEN_93 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:148
	// Tracing: PWMTest _GEN_94 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:149
	// Tracing: PWMTest _GEN_95 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:150
	// Tracing: PWMTest _GEN_96 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:151
	// Tracing: PWMTest _GEN_97 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:152
	// Tracing: PWMTest _GEN_98 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:153
	// Tracing: PWMTest _GEN_99 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:154
	// Tracing: PWMTest _GEN_100 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:155
	// Tracing: PWMTest _GEN_101 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:156
	// Tracing: PWMTest _GEN_102 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:157
	// Tracing: PWMTest _GEN_103 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:158
	// Tracing: PWMTest _GEN_104 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:159
	// Tracing: PWMTest _GEN_105 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:160
	// Tracing: PWMTest _GEN_106 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:161
	// Tracing: PWMTest _GEN_107 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:162
	// Tracing: PWMTest _GEN_108 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:163
	// Tracing: PWMTest _GEN_109 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:164
	// Tracing: PWMTest _GEN_110 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:165
	// Tracing: PWMTest _GEN_111 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:166
	// Tracing: PWMTest _GEN_112 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:167
	// Tracing: PWMTest _GEN_113 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:168
	// Tracing: PWMTest _GEN_114 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:169
	// Tracing: PWMTest _GEN_115 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:170
	// Tracing: PWMTest _GEN_116 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:171
	// Tracing: PWMTest _GEN_126 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:172
	// Tracing: PWMTest _GEN_127 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:173
	// Tracing: PWMTest _GEN_128 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:174
	// Tracing: PWMTest _GEN_129 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:175
	// Tracing: PWMTest _GEN_130 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:176
	// Tracing: PWMTest _GEN_131 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:177
	// Tracing: PWMTest _GEN_132 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:178
	// Tracing: PWMTest _GEN_133 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:179
	// Tracing: PWMTest _GEN_134 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:180
	// Tracing: PWMTest _GEN_135 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:181
	// Tracing: PWMTest _GEN_136 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:182
	// Tracing: PWMTest _GEN_137 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:183
	// Tracing: PWMTest _GEN_138 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:184
	// Tracing: PWMTest _GEN_139 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:185
	// Tracing: PWMTest _GEN_140 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:186
	// Tracing: PWMTest _GEN_141 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:187
	// Tracing: PWMTest _GEN_142 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:188
	// Tracing: PWMTest _GEN_143 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:189
	// Tracing: PWMTest _GEN_144 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:190
	// Tracing: PWMTest _GEN_145 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:191
	// Tracing: PWMTest _GEN_146 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:192
	// Tracing: PWMTest _GEN_147 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:193
	// Tracing: PWMTest _GEN_148 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:194
	// Tracing: PWMTest _GEN_149 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:195
	// Tracing: PWMTest _GEN_150 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:196
	// Tracing: PWMTest _GEN_151 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:197
	// Tracing: PWMTest _GEN_152 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:198
	// Tracing: PWMTest _GEN_153 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:199
	// Tracing: PWMTest _GEN_154 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:200
	// Tracing: PWMTest _GEN_155 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:201
	// Tracing: PWMTest _T_469 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:202
	// Tracing: PWMTest _T_472 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:203
	// Tracing: PWMTest _T_486 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:204
	// Tracing: PWMTest _T_488 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:205
	// Tracing: PWMTest _T_489 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:206
	// Tracing: PWMTest _GEN_156 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:207
	// Tracing: PWMTest _GEN_157 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:208
	// Tracing: PWMTest _GEN_160 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:209
	// Tracing: PWMTest _GEN_161 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:210
	// Tracing: PWMTest _GEN_162 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:211
	// Tracing: PWMTest _GEN_163 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:212
	// Tracing: PWMTest _GEN_165 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:213
	// Tracing: PWMTest _GEN_166 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:214
	// Tracing: PWMTest _GEN_176 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:215
	vcdp->declBit(c+6,"PWMTest c clock",-1);
	vcdp->declBit(c+7,"PWMTest c reset",-1);
	vcdp->declBus(c+1,"PWMTest c io_rise",-1,3,0);
	vcdp->declBus(c+2,"PWMTest c io_fall",-1,3,0);
	vcdp->declBit(c+3,"PWMTest c io_out",-1);
	vcdp->declBus(c+5,"PWMTest c counter",-1,3,0);
	// Tracing: PWMTest c _RAND_0 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:9
	vcdp->declBit(c+3,"PWMTest c out",-1);
	// Tracing: PWMTest c _RAND_1 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:11
	// Tracing: PWMTest c _T_15 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:12
	// Tracing: PWMTest c _T_16 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:13
	// Tracing: PWMTest c _T_17 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:14
	// Tracing: PWMTest c _T_20 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:15
	// Tracing: PWMTest c _T_22 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:16
	// Tracing: PWMTest c _T_23 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:17
	// Tracing: PWMTest c _GEN_0 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:18
	// Tracing: PWMTest c _GEN_1 // Ignored: Inlined leading underscore at /home/meghag/Chisel/test_run_dir/PWMTest/201906271628176145290057417629319/PWMTest.v:19
    }
}

void VPWMTest::traceFullThis__1(VPWMTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPWMTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->PWMTest__DOT__c_io_rise),4);
	vcdp->fullBus(c+2,(vlTOPp->PWMTest__DOT__c_io_fall),4);
	vcdp->fullBit(c+3,(vlTOPp->PWMTest__DOT__c__DOT__out));
	vcdp->fullBus(c+4,(vlTOPp->PWMTest__DOT__value),6);
	vcdp->fullBus(c+5,(vlTOPp->PWMTest__DOT__c__DOT__counter),4);
	vcdp->fullBit(c+6,(vlTOPp->clock));
	vcdp->fullBit(c+7,(vlTOPp->reset));
    }
}
