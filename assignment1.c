#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;
    
    printf("Address using &num: %p\n", &num);
    printf("Address using ptr:  %p\n", ptr);
    
    printf("Value before: %d\n", num);
    *ptr = 100;
    printf("Value after:  %d\n", num);
    
    return 0;
}
