#===============================================================================
#  Makefile for SHA-256 UART processor – Verilator simulation
#===============================================================================
#  Usage:
#    make              – build the simulation executable (default target)
#    make run          – build (if needed) and run the simulation
#    make clean        – delete generated files
#-------------------------------------------------------------------------------

# Top-level Verilog module to simulate (Verilog testbench)
TOP             := tb_top_wrapper_tang9k

# Directory holding the Verilog RTL
SRC_DIR         := src
VERILOG_SRCS    := $(wildcard $(SRC_DIR)/*.v)

# C++ harness
CPP_SRCS        := sim_main.cpp

# Verilator executable (override on command line if needed)
VERILATOR       ?= verilator

# General Verilator flags
#VERILATOR_FLAGS = --cc --exe --build -Wno-fatal --trace --timing --assert --debug --top-module $(TOP)
#VERILATOR_FLAGS := -Wall --trace --cc --exe --build --top-module $(TOP) -O3 -CFLAGS "-std=c++17 -O3"
# Makefile
# VERILATOR_FLAGS = --cc --exe --build -Wno-fatal --trace --timing --assert --debug \
#                   --top-module $(TOP) \
#                   --trace-depth 2       \
#                   --trace-module tb_top_wrapper_tang9k \
#                   --trace-module top_uart_sha256
VERILATOR_FLAGS =  --cc --exe --build -Wno-fatal --timing --assert --debug --top-module $(TOP) \
                   --trace-fst            \
                   --trace-depth 10        \
                   --trace-max-width 64   \
                   --trace-max-array 32
#-------------------------------------------------------------------------------
# Default target: build the simulation binary
#-------------------------------------------------------------------------------
.PHONY: all
all: sim

# Build rule – Verilator handles everything when given --build
sim: $(VERILOG_SRCS) $(CPP_SRCS)
	$(VERILATOR) $(VERILATOR_FLAGS) $^
	@echo "\nBuild complete – binary is at obj_dir/V$(TOP)"

#-------------------------------------------------------------------------------
# Run the simulation (depends on sim binary)
#-------------------------------------------------------------------------------
.PHONY: run
run: sim
	@echo "\nRunning simulation...\n"
	@./obj_dir/V$(TOP)
	@echo "\nSimulation finished – waveform: wave.vcd, UART log: uart_tx_log.txt"

#-------------------------------------------------------------------------------
# Clean generated files
#-------------------------------------------------------------------------------
.PHONY: clean
clean:
	rm -rf obj_dir *.vcd *.log *.o uart_tx_log.txt
	@echo "Clean complete" 