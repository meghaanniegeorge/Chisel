package PWM

import chisel3._
import chisel3.util._
import org.scalatest.{Matchers, FlatSpec}
import chisel3.iotesters.{ChiselFlatSpec, Driver, PeekPokeTester}

class PWMTests(c: PWM) extends PeekPokeTester(c) {   
  for(i <- 0 until 3){
    
    var rise = rnd.nextInt((1 << c.w) - 1) + 1
    var fall = rnd.nextInt((1 << c.w) - 1) + 1  

    println(rise + "," + fall)
    
    poke(c.io.rise, rise)
    poke(c.io.fall, fall) 
    
    for(j <- 0 until (if(i == 0) rise else (rise-1))){
      step(1)
      expect(c.io.out, 1)
    }

    for(k <- 0 until fall){  
      step(1)
      expect(c.io.out, 0)
    } 

    step(1)
    expect(c.io.out, 1)
  }
}

class PWMVWPTester extends FlatSpec with Matchers {
  behavior of "PWM"
  it should "create a vcd" in {
    iotesters.Driver.execute(
      Array("--backend-name", "verilator",
        "--target-dir", "test_run_dir/PWM", "--top-name", "PWM"),
      () => new PWM(2)
    ) {

      c => new PWMTests(c)
    } should be(true)

    //new File("test_run_dir/problems/PWM.vcd").exists() should be (true)
  }
}

class PWMVerilatorTester extends FlatSpec with Matchers {
  behavior of "PWM"
  it should "run verilator via command line arguments" in {
    // val args = Array.empty[String]
    val args = Array("--backend-name", "verilator")
    iotesters.Driver.execute(args, () => new PWM(4)) { c =>
      new PWMTests(c)
    } should be(true)
  }
}

class PWMFirrtlTester extends FlatSpec with Matchers {
  behavior of "PWM"
  it should "run firrtl via command line arguments" in {
    // val args = Array.empty[String]
    val args = Array("--backend-name", "firrtl", "--fint-write-vcd")
    iotesters.Driver.execute(args, () => new PWM(4)) { c =>
      new PWMTests(c)  
    } should be(true)
  }
}

class PWMTreadleTester extends FlatSpec with Matchers {
  behavior of "PWM"
  it should "run treadle via command line arguments" in {
    // val args = Array.empty[String]
    val args = Array("--backend-name", "treadle", "-tiwv")
    iotesters.Driver.execute(args, () => new PWM(4)) { c =>
      new PWMTests(c)
    } should be(true)
  }
}

class PWMFlatSpecTester extends FlatSpec with Matchers {
  behavior of "PWM"
  it should "compute excellently" in {
    chisel3.iotesters.Driver(() => new PWM(2)) { c =>
      new PWMTests(c)
    } should be(true)
  }
}

class PWMChiselFlatSpecTester extends ChiselFlatSpec {
  behavior of "PWM"
  backends foreach {backend =>
    it should s"correctly increment counter in $backend" in {
      Driver(() => new PWM(2), backend)(c => new PWMTests(c)) should be (true)
    }
  }
}
