# Define the compiler and flags
CC=gcc
CFLAGS=-Wall -Wextra -std=c99

# Define the source files and object files
SRC=$(wildcard src/*.c)
OBJ=$(SRC:src/%.c=obj/%.o)

# Define the name of the output file
OUTPUT=build/fm

# Build the output file
$(OUTPUT): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Build the object files
obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean the object files and output file
clean:
	rm -f obj/*.o $(OUTPUT)

