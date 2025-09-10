# Pointers Assignments

This repository contains five C programming assignments focused on understanding pointers and their applications.

## Project Structure

```
pointers-assignments/
│
├── assignment1.c   // Basics of pointers
├── assignment2.c   // Pointer arithmetic
├── assignment3.c   // Pointers and functions
├── assignment4.c   // Pointers to pointers
├── assignment5.c   // Strings and character pointers
├── Makefile        // Build configuration
├── README.md       // This file
└── report.md       // Detailed analysis report
```

## Compilation and Execution

### Prerequisites
- GCC compiler
- Make utility

### Quick Start
```bash
# Compile all assignments
make all

# Run all assignments
make run

# Compile specific assignment
make assignment1
make assignment2
# ... etc

# Clean compiled files
make clean
```

### Manual Compilation
```bash
gcc -Wall -Wextra -std=c99 -g -o assignment1 assignment1.c
gcc -Wall -Wextra -std=c99 -g -o assignment2 assignment2.c
gcc -Wall -Wextra -std=c99 -g -o assignment3 assignment3.c
gcc -Wall -Wextra -std=c99 -g -o assignment4 assignment4.c
gcc -Wall -Wextra -std=c99 -g -o assignment5 assignment5.c
```

### Running Individual Assignments
```bash
./assignment1
./assignment2
./assignment3
./assignment4
./assignment5
```

## Assignment Overview

1. **Assignment 1**: Basics of Pointers - Understanding address-of operator and dereferencing
2. **Assignment 2**: Pointer Arithmetic - Working with arrays and pointer arithmetic
3. **Assignment 3**: Pointers and Functions - Passing pointers to functions for value modification
4. **Assignment 4**: Pointers to Pointers - Working with double pointers
5. **Assignment 5**: Strings and Character Pointers - String manipulation using pointers

Each assignment includes detailed output with explanations and observations about pointer behavior.

## Learning Objectives

- Understand the fundamental concepts of pointers in C
- Learn how to use the address-of (&) and dereference (*) operators
- Master pointer arithmetic and array traversal
- Practice passing pointers to functions
- Work with double pointers and understand indirection
- Manipulate strings using character pointers

## Report

See `report.md` for a detailed analysis of each program, including explanations of how the code works and observations about pointer behavior.
