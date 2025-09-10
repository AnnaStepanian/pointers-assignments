#include <stdio.h>

int main() {
    // Assignment 2: Pointer Arithmetic
    printf("=== Assignment 2: Pointer Arithmetic ===\n\n");
    
    // Declare an array of integers and initialize it with 5 values
    int arr[5] = {10, 20, 30, 40, 50};
    printf("1. Array initialized with values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // Use a pointer to traverse the array and print each element
    int *ptr = arr; // ptr points to the first element
    printf("2. Traversing array using pointer:\n");
    printf("   Element addresses and values:\n");
    for (int i = 0; i < 5; i++) {
        printf("   arr[%d] at address %p = %d\n", i, ptr + i, *(ptr + i));
    }
    printf("\n");
    
    // Modify the values of the array using pointer arithmetic
    printf("3. Modifying array values using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2; // Double each value
    }
    printf("   All values doubled!\n\n");
    
    // Print the modified array using both the pointer and the array name
    printf("4. Modified array using array name:\n");
    printf("   ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    printf("5. Modified array using pointer arithmetic:\n");
    printf("   ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n\n");
    
    // Demonstrate pointer arithmetic concepts
    printf("=== Pointer Arithmetic Concepts ===\n");
    printf("- arr[0] address: %p\n", &arr[0]);
    printf("- ptr address: %p\n", ptr);
    printf("- arr[1] address: %p\n", &arr[1]);
    printf("- ptr + 1 address: %p\n", ptr + 1);
    printf("- Size of int: %zu bytes\n", sizeof(int));
    printf("- Address difference: %ld bytes\n", (char*)(ptr + 1) - (char*)ptr);
    
    return 0;
}
