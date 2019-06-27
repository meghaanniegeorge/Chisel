;buildInfoPackage: chisel3, version: 3.1.7, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-03-20 22:15:13.399, builtAtMillis: 1553120113399
circuit PWM : 
  module PWM : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip rise : UInt<4>, flip fall : UInt<4>, out : UInt<1>}
    
    reg counter : UInt<4>, clock with : (reset => (reset, UInt<4>("h00"))) @[PWM.scala 15:30]
    reg out : UInt<1>, clock with : (reset => (reset, UInt<1>("h01"))) @[PWM.scala 16:26]
    node _T_15 = eq(counter, io.rise) @[PWM.scala 18:31]
    node _T_16 = eq(counter, io.fall) @[PWM.scala 18:49]
    node _T_17 = mux(out, _T_15, _T_16) @[PWM.scala 18:17]
    when _T_17 : @[PWM.scala 18:59]
      counter <= UInt<1>("h01") @[PWM.scala 19:25]
      node _T_20 = eq(out, UInt<1>("h00")) @[PWM.scala 20:24]
      out <= _T_20 @[PWM.scala 20:21]
      skip @[PWM.scala 18:59]
    else : @[PWM.scala 21:20]
      node _T_22 = add(counter, UInt<1>("h01")) @[PWM.scala 22:36]
      node _T_23 = tail(_T_22, 1) @[PWM.scala 22:36]
      counter <= _T_23 @[PWM.scala 22:25]
      skip @[PWM.scala 21:20]
    io.out <= out @[PWM.scala 25:16]
    
