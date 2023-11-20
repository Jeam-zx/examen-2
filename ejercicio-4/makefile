# Makefile

# Name of executable
EXECUTABLE = recursividad

# Source files
SRC = recursividad.cpp

# Compiler flags
CXXFLAGS = -std=c++11

# Linker flags
LDFLAGS =

# Build target
all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	g++ $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(EXECUTABLE)

.PHONY: clean