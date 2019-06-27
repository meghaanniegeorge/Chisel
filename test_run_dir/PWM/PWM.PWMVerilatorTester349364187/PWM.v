module PWM(
  input        clock,
  input        reset,
  input  [3:0] io_rise,
  input  [3:0] io_fall,
  output       io_out
);
  reg [3:0] counter; // @[PWM.scala 15:30]
  reg [31:0] _RAND_0;
  reg  out; // @[PWM.scala 16:26]
  reg [31:0] _RAND_1;
  wire  _T_15; // @[PWM.scala 18:31]
  wire  _T_16; // @[PWM.scala 18:49]
  wire  _T_17; // @[PWM.scala 18:17]
  wire  _T_20; // @[PWM.scala 20:24]
  wire [4:0] _T_22; // @[PWM.scala 22:36]
  wire [3:0] _T_23; // @[PWM.scala 22:36]
  wire [3:0] _GEN_0; // @[PWM.scala 18:59]
  wire  _GEN_1; // @[PWM.scala 18:59]
  assign _T_15 = counter == io_rise; // @[PWM.scala 18:31]
  assign _T_16 = counter == io_fall; // @[PWM.scala 18:49]
  assign _T_17 = out ? _T_15 : _T_16; // @[PWM.scala 18:17]
  assign _T_20 = out == 1'h0; // @[PWM.scala 20:24]
  assign _T_22 = counter + 4'h1; // @[PWM.scala 22:36]
  assign _T_23 = counter + 4'h1; // @[PWM.scala 22:36]
  assign _GEN_0 = _T_17 ? 4'h1 : _T_23; // @[PWM.scala 18:59]
  assign _GEN_1 = _T_17 ? _T_20 : out; // @[PWM.scala 18:59]
  assign io_out = out; // @[PWM.scala 25:16]
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
