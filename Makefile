# Define the compiler and flags
CC=gcc
CFLAGS=-Wall -Wextra -std=c99

# Define the source files and object files for the program
SRC=$(wildcard src/*.c)
OBJ=$(SRC:src/%.c=obj/%.o)

# Define the source files and object files for the tests
TEST_SRC=$(wildcard tests/*.c)
TEST_OBJ=$(TEST_SRC:tests/%.c=obj/%.o)

# Define the name of the output file
OUTPUT=build/fm

# Build the output file
$(OUTPUT): $(OBJ) $(TEST_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Build the object files for the program
obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Build the object files for the tests
obj/%.o: tests/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean the object files and output file
clean:
	rm -f obj/*.o $(OUTPUT)

