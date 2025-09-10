#include <stdio.h>

int main() {
    // Assignment 4: Pointers to Pointers
    printf("=== Assignment 4: Pointers to Pointers ===\n\n");
    
    // Declare an integer variable and initialize it
    int num = 100;
    printf("1. Integer variable 'num' initialized with value: %d\n", num);
    printf("   Address of 'num': %p\n", &num);
    printf("\n");
    
    // Declare a pointer to that variable
    int *ptr = &num;
    printf("2. Pointer 'ptr' points to 'num':\n");
    printf("   Value of ptr (address of num): %p\n", ptr);
    printf("   Value pointed by ptr: %d\n", *ptr);
    printf("   Address of ptr itself: %p\n", &ptr);
    printf("\n");
    
    // Declare a pointer to the pointer and initialize it
    int **double_ptr = &ptr;
    printf("3. Double pointer 'double_ptr' points to 'ptr':\n");
    printf("   Value of double_ptr (address of ptr): %p\n", double_ptr);
    printf("   Value pointed by double_ptr: %p\n", *double_ptr);
    printf("   Address of double_ptr itself: %p\n", &double_ptr);
    printf("\n");
    
    // Print the value of the integer using both the pointer and the double-pointer
    printf("4. Accessing the integer value:\n");
    printf("   Using variable 'num': %d\n", num);
    printf("   Using pointer '*ptr': %d\n", *ptr);
    printf("   Using double pointer '**double_ptr': %d\n", **double_ptr);
    printf("\n");
    
    // Demonstrate modification through double pointer
    printf("5. Modifying value through double pointer:\n");
    **double_ptr = 200;
    printf("   After **double_ptr = 200:\n");
    printf("   num = %d\n", num);
    printf("   *ptr = %d\n", *ptr);
    printf("   **double_ptr = %d\n", **double_ptr);
    printf("\n");
    
    // Show the chain of addresses
    printf("=== Address Chain ===\n");
    printf("num address:        %p\n", &num);
    printf("ptr value:          %p (points to num)\n", ptr);
    printf("ptr address:        %p\n", &ptr);
    printf("double_ptr value:   %p (points to ptr)\n", double_ptr);
    printf("double_ptr address: %p\n", &double_ptr);
    
    printf("\n=== Key Observations ===\n");
    printf("- **double_ptr means: go to double_ptr, get the address it contains,\n");
    printf("  then go to that address and get the value\n");
    printf("- *double_ptr gives us the address stored in ptr\n");
    printf("- **double_ptr gives us the value stored in num\n");
    printf("- Double pointers are useful for dynamic memory allocation\n");
    printf("  and passing pointers by reference to functions\n");
    
    return 0;
}
