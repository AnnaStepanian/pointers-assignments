# Makefile for Pointers Assignments
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGETS = assignment1 assignment2 assignment3 assignment4 assignment5

# Default target
all: $(TARGETS)

# Individual targets
assignment1: assignment1.c
	$(CC) $(CFLAGS) -o assignment1 assignment1.c

assignment2: assignment2.c
	$(CC) $(CFLAGS) -o assignment2 assignment2.c

assignment3: assignment3.c
	$(CC) $(CFLAGS) -o assignment3 assignment3.c

assignment4: assignment4.c
	$(CC) $(CFLAGS) -o assignment4 assignment4.c

assignment5: assignment5.c
	$(CC) $(CFLAGS) -o assignment5 assignment5.c

# Run all assignments
run: all
	@echo "=== Running Assignment 1 ==="
	./assignment1
	@echo "\n=== Running Assignment 2 ==="
	./assignment2
	@echo "\n=== Running Assignment 3 ==="
	./assignment3
	@echo "\n=== Running Assignment 4 ==="
	./assignment4
	@echo "\n=== Running Assignment 5 ==="
	./assignment5

# Clean compiled files
clean:
	rm -f $(TARGETS)

# Help
help:
	@echo "Available targets:"
	@echo "  all        - Compile all assignments"
	@echo "  assignment1-5 - Compile specific assignment"
	@echo "  run        - Compile and run all assignments"
	@echo "  clean      - Remove compiled files"
	@echo "  help       - Show this help message"

.PHONY: all run clean help
