#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;
    int **double_ptr = &ptr;
    
    printf("Using pointer: %d\n", *ptr);
    printf("Using double pointer: %d\n", **double_ptr);
    
    return 0;
}
