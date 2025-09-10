#include <stdio.h>

int main() {
    // Assignment 5: Strings and Character Pointers
    printf("=== Assignment 5: Strings and Character Pointers ===\n\n");
    
    // Declare a string as a character array
    char str[] = "Hello";
    printf("1. String declared as char array: \"%s\"\n", str);
    printf("   Array size: %zu bytes\n", sizeof(str));
    printf("   String length: %zu characters\n", sizeof(str) - 1); // -1 for null terminator
    printf("\n");
    
    // Declare a pointer to the first character of the string
    char *ptr = str; // Points to first character
    printf("2. Pointer 'ptr' points to first character:\n");
    printf("   ptr value (address): %p\n", ptr);
    printf("   *ptr (first character): '%c'\n", *ptr);
    printf("   str[0]: '%c'\n", str[0]);
    printf("   Both are the same: %s\n", (*ptr == str[0]) ? "Yes" : "No");
    printf("\n");
    
    // Print the string using the pointer and a loop (without using str[i])
    printf("3. Printing string using pointer and loop:\n");
    printf("   Method 1 - Using pointer arithmetic: ");
    for (int i = 0; i < 5; i++) {
        printf("%c", *(ptr + i));
    }
    printf("\n");
    
    printf("   Method 2 - Using pointer increment: ");
    char *temp_ptr = ptr;
    while (*temp_ptr != '\0') {
        printf("%c", *temp_ptr);
        temp_ptr++;
    }
    printf("\n");
    
    printf("   Method 3 - Using array notation with pointer: ");
    for (int i = 0; i < 5; i++) {
        printf("%c", ptr[i]);
    }
    printf("\n\n");
    
    // Count the number of characters in the string using pointer arithmetic
    printf("4. Counting characters using pointer arithmetic:\n");
    int count = 0;
    char *count_ptr = str;
    
    printf("   Character-by-character traversal:\n");
    while (*count_ptr != '\0') {
        printf("   Character %d: '%c' at address %p\n", count + 1, *count_ptr, count_ptr);
        count_ptr++;
        count++;
    }
    printf("   Total characters counted: %d\n", count);
    printf("\n");
    
    // Demonstrate string manipulation with pointers
    printf("5. String manipulation using pointers:\n");
    char *manip_ptr = str;
    printf("   Original string: %s\n", str);
    
    // Convert to uppercase using pointer
    while (*manip_ptr != '\0') {
        if (*manip_ptr >= 'a' && *manip_ptr <= 'z') {
            *manip_ptr = *manip_ptr - 32; // Convert to uppercase
        }
        manip_ptr++;
    }
    printf("   After converting to uppercase: %s\n", str);
    printf("\n");
    
    // Show memory layout
    printf("=== Memory Layout ===\n");
    printf("String array addresses:\n");
    for (int i = 0; i < 6; i++) { // Include null terminator
        printf("str[%d] = '%c' at address %p\n", i, str[i], &str[i]);
    }
    
    printf("\n=== Key Observations ===\n");
    printf("- char str[] creates an array that can be modified\n");
    printf("- str is equivalent to &str[0] (address of first element)\n");
    printf("- *ptr accesses the character at the current position\n");
    printf("- ptr++ moves the pointer to the next character\n");
    printf("- *(ptr + i) is equivalent to str[i]\n");
    printf("- Strings are null-terminated ('\\0' marks the end)\n");
    printf("- Pointer arithmetic works with characters (1 byte each)\n");
    
    return 0;
}
