CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Find all .c files in the src/ directory
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = main

# Default target
all: $(TARGET)

# Link the object files to create the final executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f src/*.o $(TARGET)

# Run the compiled program
run: all
	./main

