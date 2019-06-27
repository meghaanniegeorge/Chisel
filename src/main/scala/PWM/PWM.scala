package PWM

import chisel3._
import chisel3.util._ 

class PWM(val w :Int) extends Module{
	val io = IO(new Bundle{
		val rise = Input(UInt(w.W))
		val fall = Input(UInt(w.W))
		val out = Output(Bool())
	})

	val rise = io.rise
	val fall = io.fall
	val counter = RegInit(0.U(w.W))
	val out = RegInit(true.B)

	when(Mux(out, counter === rise, counter === fall)){
		counter := 1.U
		out := !out
	}.otherwise{
		counter := counter + 1.U 
	}

	io.out := out
}
