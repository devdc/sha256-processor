#include "Vtb_top_wrapper_tang9k.h"
#include "verilated.h"

#ifdef VM_TRACE_FST          // defined when --trace-fst is used
  #include "verilated_fst_c.h"
  using TraceT = VerilatedFstC;
  const char *filename = "wave.fst";
#else                        // falls back to VCD
  #include "verilated_vcd_c.h"
  using TraceT = VerilatedVcdC;
  const char *filename = "wave.vcd";
#endif
// Current simulation time (ns)
static vluint64_t main_time = 0;

// Verilator callback for time queries
double sc_time_stamp() {
    return static_cast<double>(main_time);
}

int main(int argc, char **argv) {
    // Pass command line arguments to Verilated, enable tracing
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Instantiate the DUT (converted Verilog testbench)
    auto *tb = new Vtb_top_wrapper_tang9k;

    // Set up VCD waveform dumping
    auto *tfp = new TraceT;
    tb->trace(tfp, 10);
    tfp->open(filename);

    const vluint64_t MAX_TIME = 2000 * 1000 * 1000 * 1000ULL; // safety limit: 2 ms of sim time

    while (!Verilated::gotFinish() && main_time < MAX_TIME) {
        tb->eval();
        tfp->dump(main_time);
        ++main_time; // advance time by 1 ns per iteration
    }

    tb->final();
    tfp->close();
    delete tb;
    return 0;
} 