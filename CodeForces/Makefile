# Define the compiler
CXX = g++

# Define the compiler flags
CXXFLAGS = -Wall -std=c++17

# Default target
all: help

# Pattern rule to compile any .cpp file
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Help target to show usage
help:
    @echo "Usage:"
	@echo "  make filename  # To compile filename.cpp into filename"
	@echo "  make clean     # To clean up the directory"

# Clean up the directory
clean:
	rm -f *.o *.exe