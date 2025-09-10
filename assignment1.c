#include <stdio.h>

int main() {
    // Assignment 1: Basics of Pointers
    printf("=== Assignment 1: Basics of Pointers ===\n\n");
    
    // Declare an integer variable and initialize it with a value
    int num = 42;
    printf("1. Integer variable 'num' initialized with value: %d\n", num);
    
    // Declare a pointer variable that points to the integer
    int *ptr = &num;
    printf("2. Pointer 'ptr' declared and points to 'num'\n");
    
    // Print the address of the integer variable using both the variable and the pointer
    printf("3. Address of 'num' using &num: %p\n", &num);
    printf("   Address of 'num' using ptr:  %p\n", ptr);
    printf("   Both addresses are the same: %s\n", (&num == ptr) ? "Yes" : "No");
    
    // Print the value using both the variable and the pointer
    printf("4. Value of 'num' using num: %d\n", num);
    printf("   Value of 'num' using *ptr: %d\n", *ptr);
    
    // Modify the value of the integer using the pointer and print the new value
    *ptr = 100;
    printf("5. Modified value using pointer (*ptr = 100):\n");
    printf("   New value of 'num': %d\n", num);
    printf("   New value using *ptr: %d\n", *ptr);
    
    printf("\n=== Key Observations ===\n");
    printf("- &num gives the address of variable 'num'\n");
    printf("- ptr stores the address of 'num'\n");
    printf("- *ptr dereferences the pointer to access the value\n");
    printf("- Modifying *ptr changes the original variable 'num'\n");
    
    return 0;
}
