module PWM( // @[:@3.2]
  input        clock, // @[:@4.4]
  input        reset, // @[:@5.4]
  input  [3:0] io_rise, // @[:@6.4]
  input  [3:0] io_fall, // @[:@6.4]
  output       io_out // @[:@6.4]
);
  reg [3:0] counter; // @[PWM.scala 15:30:@8.4]
  reg [31:0] _RAND_0;
  reg  out; // @[PWM.scala 16:26:@9.4]
  reg [31:0] _RAND_1;
  wire  _T_15; // @[PWM.scala 18:31:@10.4]
  wire  _T_16; // @[PWM.scala 18:49:@11.4]
  wire  _T_17; // @[PWM.scala 18:17:@12.4]
  wire  _T_20; // @[PWM.scala 20:24:@15.6]
  wire [4:0] _T_22; // @[PWM.scala 22:36:@19.6]
  wire [3:0] _T_23; // @[PWM.scala 22:36:@20.6]
  wire [3:0] _GEN_0; // @[PWM.scala 18:59:@13.4]
  wire  _GEN_1; // @[PWM.scala 18:59:@13.4]
  assign _T_15 = counter == io_rise; // @[PWM.scala 18:31:@10.4]
  assign _T_16 = counter == io_fall; // @[PWM.scala 18:49:@11.4]
  assign _T_17 = out ? _T_15 : _T_16; // @[PWM.scala 18:17:@12.4]
  assign _T_20 = out == 1'h0; // @[PWM.scala 20:24:@15.6]
  assign _T_22 = counter + 4'h1; // @[PWM.scala 22:36:@19.6]
  assign _T_23 = counter + 4'h1; // @[PWM.scala 22:36:@20.6]
  assign _GEN_0 = _T_17 ? 4'h1 : _T_23; // @[PWM.scala 18:59:@13.4]
  assign _GEN_1 = _T_17 ? _T_20 : out; // @[PWM.scala 18:59:@13.4]
  assign io_out = out; // @[PWM.scala 25:16:@23.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  counter = _RAND_0[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      counter <= 4'h0;
    end else begin
      if (_T_17) begin
        counter <= 4'h1;
      end else begin
        counter <= _T_23;
      end
    end
    if (reset) begin
      out <= 1'h1;
    end else begin
      if (_T_17) begin
        out <= _T_20;
      end
    end
  end
endmodule
module PWMTest( // @[:@25.2]
  input   clock, // @[:@26.4]
  input   reset // @[:@27.4]
);
  wire  c_clock; // @[PWMTests.scala 36:33:@30.4]
  wire  c_reset; // @[PWMTests.scala 36:33:@30.4]
  wire [3:0] c_io_rise; // @[PWMTests.scala 36:33:@30.4]
  wire [3:0] c_io_fall; // @[PWMTests.scala 36:33:@30.4]
  wire  c_io_out; // @[PWMTests.scala 36:33:@30.4]
  reg [5:0] value; // @[Counter.scala 26:33:@36.4]
  reg [31:0] _RAND_0;
  reg  _T_9; // @[SteppedHWIOTester.scala 179:33:@37.4]
  reg [31:0] _RAND_1;
  wire  _T_11; // @[SteppedHWIOTester.scala 181:10:@38.4]
  wire [3:0] _GEN_19; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_20; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_21; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_22; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_23; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_24; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_25; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_26; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_27; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_28; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_29; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_30; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_31; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_32; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_33; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_34; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_35; // @[SteppedHWIOTester.scala 130:16:@78.6]
  wire [3:0] _GEN_56; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_57; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_58; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_59; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_60; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_61; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_62; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_63; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_64; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_65; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_66; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_67; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_68; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_69; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_70; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_71; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire [3:0] _GEN_72; // @[SteppedHWIOTester.scala 130:16:@117.6]
  wire  _GEN_75; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_76; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_77; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_78; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_79; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_80; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_81; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_82; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_83; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_84; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_85; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_86; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_87; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_88; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_89; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_90; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_91; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_92; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_93; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_94; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_95; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_96; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_97; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_98; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_99; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_100; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_101; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_102; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_103; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_104; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_105; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_106; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_107; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_108; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_109; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_110; // @[SteppedHWIOTester.scala 145:51:@268.6]
  wire  _GEN_123; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_124; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_125; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_126; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_127; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_128; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_129; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_130; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_131; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_132; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_133; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_134; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_135; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_136; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_137; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_138; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_139; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_140; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_141; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_142; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_143; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_144; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_145; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_146; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _GEN_147; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _T_447; // @[SteppedHWIOTester.scala 146:31:@269.8]
  wire  _T_451; // @[SteppedHWIOTester.scala 152:15:@274.10]
  wire  _T_461; // @[Counter.scala 34:24:@292.6]
  wire [6:0] _T_463; // @[Counter.scala 35:22:@293.6]
  wire [5:0] _T_464; // @[Counter.scala 35:22:@294.6]
  wire [5:0] _GEN_148; // @[Counter.scala 37:21:@296.6]
  wire  _GEN_149; // @[SteppedHWIOTester.scala 185:22:@299.6]
  wire [5:0] _GEN_152; // @[SteppedHWIOTester.scala 181:17:@39.4]
  wire  _GEN_153; // @[SteppedHWIOTester.scala 181:17:@39.4]
  wire  _GEN_154; // @[SteppedHWIOTester.scala 152:15:@276.12]
  wire  _GEN_155; // @[SteppedHWIOTester.scala 152:15:@276.12]
  wire  _GEN_156; // @[SteppedHWIOTester.scala 152:15:@276.12]
  wire  _GEN_166; // @[SteppedHWIOTester.scala 186:15:@303.10]
  PWM c ( // @[PWMTests.scala 36:33:@30.4]
    .clock(c_clock),
    .reset(c_reset),
    .io_rise(c_io_rise),
    .io_fall(c_io_fall),
    .io_out(c_io_out)
  );
  assign _T_11 = _T_9 == 1'h0; // @[SteppedHWIOTester.scala 181:10:@38.4]
  assign _GEN_19 = 6'h13 == value ? 4'h1 : 4'h7; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_20 = 6'h14 == value ? 4'h1 : _GEN_19; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_21 = 6'h15 == value ? 4'hd : _GEN_20; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_22 = 6'h16 == value ? 4'hd : _GEN_21; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_23 = 6'h17 == value ? 4'hd : _GEN_22; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_24 = 6'h18 == value ? 4'hd : _GEN_23; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_25 = 6'h19 == value ? 4'hd : _GEN_24; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_26 = 6'h1a == value ? 4'hd : _GEN_25; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_27 = 6'h1b == value ? 4'hd : _GEN_26; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_28 = 6'h1c == value ? 4'hd : _GEN_27; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_29 = 6'h1d == value ? 4'hd : _GEN_28; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_30 = 6'h1e == value ? 4'hd : _GEN_29; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_31 = 6'h1f == value ? 4'hd : _GEN_30; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_32 = 6'h20 == value ? 4'hd : _GEN_31; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_33 = 6'h21 == value ? 4'hd : _GEN_32; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_34 = 6'h22 == value ? 4'hd : _GEN_33; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_35 = 6'h23 == value ? 4'hd : _GEN_34; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_56 = 6'h13 == value ? 4'h1 : 4'hb; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_57 = 6'h14 == value ? 4'h1 : _GEN_56; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_58 = 6'h15 == value ? 4'h2 : _GEN_57; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_59 = 6'h16 == value ? 4'h2 : _GEN_58; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_60 = 6'h17 == value ? 4'h2 : _GEN_59; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_61 = 6'h18 == value ? 4'h2 : _GEN_60; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_62 = 6'h19 == value ? 4'h2 : _GEN_61; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_63 = 6'h1a == value ? 4'h2 : _GEN_62; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_64 = 6'h1b == value ? 4'h2 : _GEN_63; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_65 = 6'h1c == value ? 4'h2 : _GEN_64; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_66 = 6'h1d == value ? 4'h2 : _GEN_65; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_67 = 6'h1e == value ? 4'h2 : _GEN_66; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_68 = 6'h1f == value ? 4'h2 : _GEN_67; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_69 = 6'h20 == value ? 4'h2 : _GEN_68; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_70 = 6'h21 == value ? 4'h2 : _GEN_69; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_71 = 6'h22 == value ? 4'h2 : _GEN_70; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_72 = 6'h23 == value ? 4'h2 : _GEN_71; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign _GEN_75 = 6'h1 == value; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_76 = 6'h2 == value ? 1'h1 : _GEN_75; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_77 = 6'h3 == value ? 1'h1 : _GEN_76; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_78 = 6'h4 == value ? 1'h1 : _GEN_77; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_79 = 6'h5 == value ? 1'h1 : _GEN_78; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_80 = 6'h6 == value ? 1'h1 : _GEN_79; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_81 = 6'h7 == value ? 1'h1 : _GEN_80; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_82 = 6'h8 == value ? 1'h1 : _GEN_81; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_83 = 6'h9 == value ? 1'h1 : _GEN_82; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_84 = 6'ha == value ? 1'h1 : _GEN_83; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_85 = 6'hb == value ? 1'h1 : _GEN_84; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_86 = 6'hc == value ? 1'h1 : _GEN_85; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_87 = 6'hd == value ? 1'h1 : _GEN_86; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_88 = 6'he == value ? 1'h1 : _GEN_87; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_89 = 6'hf == value ? 1'h1 : _GEN_88; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_90 = 6'h10 == value ? 1'h1 : _GEN_89; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_91 = 6'h11 == value ? 1'h1 : _GEN_90; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_92 = 6'h12 == value ? 1'h1 : _GEN_91; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_93 = 6'h13 == value ? 1'h1 : _GEN_92; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_94 = 6'h14 == value ? 1'h1 : _GEN_93; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_95 = 6'h15 == value ? 1'h1 : _GEN_94; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_96 = 6'h16 == value ? 1'h1 : _GEN_95; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_97 = 6'h17 == value ? 1'h1 : _GEN_96; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_98 = 6'h18 == value ? 1'h1 : _GEN_97; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_99 = 6'h19 == value ? 1'h1 : _GEN_98; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_100 = 6'h1a == value ? 1'h1 : _GEN_99; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_101 = 6'h1b == value ? 1'h1 : _GEN_100; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_102 = 6'h1c == value ? 1'h1 : _GEN_101; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_103 = 6'h1d == value ? 1'h1 : _GEN_102; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_104 = 6'h1e == value ? 1'h1 : _GEN_103; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_105 = 6'h1f == value ? 1'h1 : _GEN_104; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_106 = 6'h20 == value ? 1'h1 : _GEN_105; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_107 = 6'h21 == value ? 1'h1 : _GEN_106; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_108 = 6'h22 == value ? 1'h1 : _GEN_107; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_109 = 6'h23 == value ? 1'h1 : _GEN_108; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_110 = 6'h24 == value ? 1'h1 : _GEN_109; // @[SteppedHWIOTester.scala 145:51:@268.6]
  assign _GEN_123 = 6'hc == value ? 1'h0 : _GEN_85; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_124 = 6'hd == value ? 1'h0 : _GEN_123; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_125 = 6'he == value ? 1'h0 : _GEN_124; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_126 = 6'hf == value ? 1'h0 : _GEN_125; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_127 = 6'h10 == value ? 1'h0 : _GEN_126; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_128 = 6'h11 == value ? 1'h0 : _GEN_127; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_129 = 6'h12 == value ? 1'h0 : _GEN_128; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_130 = 6'h13 == value ? 1'h1 : _GEN_129; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_131 = 6'h14 == value ? 1'h0 : _GEN_130; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_132 = 6'h15 == value ? 1'h1 : _GEN_131; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_133 = 6'h16 == value ? 1'h1 : _GEN_132; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_134 = 6'h17 == value ? 1'h0 : _GEN_133; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_135 = 6'h18 == value ? 1'h0 : _GEN_134; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_136 = 6'h19 == value ? 1'h0 : _GEN_135; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_137 = 6'h1a == value ? 1'h0 : _GEN_136; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_138 = 6'h1b == value ? 1'h0 : _GEN_137; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_139 = 6'h1c == value ? 1'h0 : _GEN_138; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_140 = 6'h1d == value ? 1'h0 : _GEN_139; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_141 = 6'h1e == value ? 1'h0 : _GEN_140; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_142 = 6'h1f == value ? 1'h0 : _GEN_141; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_143 = 6'h20 == value ? 1'h0 : _GEN_142; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_144 = 6'h21 == value ? 1'h0 : _GEN_143; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_145 = 6'h22 == value ? 1'h0 : _GEN_144; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_146 = 6'h23 == value ? 1'h0 : _GEN_145; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _GEN_147 = 6'h24 == value ? 1'h1 : _GEN_146; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _T_447 = c_io_out == _GEN_147; // @[SteppedHWIOTester.scala 146:31:@269.8]
  assign _T_451 = reset == 1'h0; // @[SteppedHWIOTester.scala 152:15:@274.10]
  assign _T_461 = value == 6'h24; // @[Counter.scala 34:24:@292.6]
  assign _T_463 = value + 6'h1; // @[Counter.scala 35:22:@293.6]
  assign _T_464 = value + 6'h1; // @[Counter.scala 35:22:@294.6]
  assign _GEN_148 = _T_461 ? 6'h0 : _T_464; // @[Counter.scala 37:21:@296.6]
  assign _GEN_149 = _T_461 ? 1'h1 : _T_9; // @[SteppedHWIOTester.scala 185:22:@299.6]
  assign _GEN_152 = _T_11 ? _GEN_148 : value; // @[SteppedHWIOTester.scala 181:17:@39.4]
  assign _GEN_153 = _T_11 ? _GEN_149 : _T_9; // @[SteppedHWIOTester.scala 181:17:@39.4]
  assign c_clock = clock; // @[:@31.4]
  assign c_reset = reset; // @[:@32.4]
  assign c_io_rise = 6'h24 == value ? 4'h2 : _GEN_72; // @[SteppedHWIOTester.scala 130:16:@117.6]
  assign c_io_fall = 6'h24 == value ? 4'hd : _GEN_35; // @[SteppedHWIOTester.scala 130:16:@78.6]
  assign _GEN_154 = _T_11 & _GEN_110; // @[SteppedHWIOTester.scala 152:15:@276.12]
  assign _GEN_155 = _T_447 == 1'h0; // @[SteppedHWIOTester.scala 152:15:@276.12]
  assign _GEN_156 = _GEN_154 & _GEN_155; // @[SteppedHWIOTester.scala 152:15:@276.12]
  assign _GEN_166 = _T_11 & _T_461; // @[SteppedHWIOTester.scala 186:15:@303.10]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  value = _RAND_0[5:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  _T_9 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      value <= 6'h0;
    end else begin
      if (_T_11) begin
        if (_T_461) begin
          value <= 6'h0;
        end else begin
          value <= _T_464;
        end
      end
    end
    if (reset) begin
      _T_9 <= 1'h0;
    end else begin
      if (_T_11) begin
        if (_T_461) begin
          _T_9 <= 1'h1;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_156 & _T_451) begin
          $fwrite(32'h80000002,"    failed on step %d -- port out:  %d expected %d\n",value,c_io_out,_GEN_147); // @[SteppedHWIOTester.scala 152:15:@276.12]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_156 & _T_451) begin
          $fwrite(32'h80000002,"Assertion failed\n    at SteppedHWIOTester.scala:159 assert(false.B)\n"); // @[SteppedHWIOTester.scala 159:15:@282.12]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_156 & _T_451) begin
          $fatal; // @[SteppedHWIOTester.scala 159:15:@283.12]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_156 & _T_451) begin
          $finish; // @[SteppedHWIOTester.scala 160:13:@288.12]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_166 & _T_451) begin
          $fwrite(32'h80000002,"Stopping, end of tests, 37 steps\n"); // @[SteppedHWIOTester.scala 186:15:@303.10]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_166 & _T_451) begin
          $finish; // @[SteppedHWIOTester.scala 188:13:@309.10]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule