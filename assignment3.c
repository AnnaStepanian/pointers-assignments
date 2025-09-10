#include <stdio.h>

// Function to swap two integer values using pointers
void swap(int *a, int *b) {
    printf("   Inside swap function:\n");
    printf("   - Address of a: %p, value: %d\n", a, *a);
    printf("   - Address of b: %p, value: %d\n", b, *b);
    
    int temp = *a;  // Store value pointed by a
    *a = *b;        // Assign value pointed by b to location pointed by a
    *b = temp;      // Assign stored value to location pointed by b
    
    printf("   - After swap: a=%d, b=%d\n", *a, *b);
}

int main() {
    // Assignment 3: Pointers and Functions
    printf("=== Assignment 3: Pointers and Functions ===\n\n");
    
    // Declare two integer variables
    int x = 10, y = 20;
    printf("1. Initial values:\n");
    printf("   x = %d (address: %p)\n", x, &x);
    printf("   y = %d (address: %p)\n", y, &y);
    printf("\n");
    
    // Print values before swap
    printf("2. Before calling swap():\n");
    printf("   x = %d, y = %d\n", x, y);
    printf("\n");
    
    // Call swap function and pass addresses of two integers
    printf("3. Calling swap(&x, &y):\n");
    swap(&x, &y);
    printf("\n");
    
    // Print values after swap
    printf("4. After calling swap():\n");
    printf("   x = %d, y = %d\n", x, y);
    printf("\n");
    
    // Demonstrate that original variables are modified
    printf("=== Key Observations ===\n");
    printf("- swap() function receives addresses of variables\n");
    printf("- Using pointers allows modification of original variables\n");
    printf("- Without pointers, only copies would be swapped\n");
    printf("- &x and &y pass the memory addresses to the function\n");
    printf("- *a and *b inside swap() access the actual values\n");
    
    return 0;
}
