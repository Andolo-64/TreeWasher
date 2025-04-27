# Compiler
CC = clang

# Source files
SRC = $(wildcard *.c)
OUT = TreeWasher

# Build target
all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

# Clean target
clean:
	rm -f $(OUT)

