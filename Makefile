# Makefile for compiling main.cpp

# Compiler and compiler flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Directories
SRCDIR := src
BUILDDIR := build
TARGET := main

# Files
SRCEXT := cpp
# Find all source files in the source directory and its subdirectories
SOURCES := $(wildcard $(SRCDIR)/*.$(SRCEXT)) $(wildcard $(SRCDIR)/core_logic/*.$(SRCEXT))
# Generate a list of object files to build, converting source file paths to build file paths
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

# Build target
$(TARGET): $(OBJECTS)
	@echo " Linking..."
#	Combine object files into the executable target
	$(CXX) $^ -o $@

# Compile source files
$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
#	Create the build directory if it doesn't exist
	@if not exist "$(dir $@)" mkdir "$(dir $@)"
	@echo " Compiling $<..."
#	Compile source file to object file
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean up
clean:
	@echo " Cleaning..."
# 	Use del to remove files and rmdir /s /q to remove directories
	@if exist "$(BUILDDIR)" rmdir /s /q "$(BUILDDIR)"
	@if exist "$(TARGET).exe" del /q "$(TARGET).exe"


# Run the program
run: $(TARGET)
#	Run the executable target
	./$(TARGET)

.PHONY: clean run
