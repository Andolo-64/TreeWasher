# Compiler
CC = clang

# Source files
SRC = $(wildcard *.c)
OUT_DIR = build
OUT = $(OUT_DIR)/TreeWasher
    
# Build target
all: $(OUT)

# Rule to build the output
$(OUT): $(SRC) | $(OUT_DIR)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

# Clean target
clean:
	rm -rf $(OUT_DIR)

.PHONY: all clean

