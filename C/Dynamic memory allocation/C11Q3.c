#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    char *pptr;
    
    // 1. Allocate 20 bytes total: 16 bytes for 4 ints + 4 bytes for 4 chars
    ptr = malloc((4 * sizeof(int)) + (4 * sizeof(char)));//->=ptr = malloc(20);
    
    // 2. Point pptr to the memory address immediately following the 4 integers
    pptr = (char *)(ptr + 4); 

    // 3. Store 4 integer values (occupies bytes 0 to 15)
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;

    // 4. Store 4 character values (occupies bytes 16 to 19)
    pptr[0] = 'a';
    pptr[1] = 'b';
    pptr[2] = 'c';
    pptr[3] = 'd';

    // 5. Print the integer values safely
    printf("--- Integer Values ---\n");
    for(int i = 0; i < 4; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 6. Print the character values safely
    printf("\n--- Character Values ---\n");
    for(int i = 0; i < 4; i++) {
        printf("pptr[%d] = %c\n", i, pptr[i]);
    }

    // Always clean up heap memory
    free(ptr); 
    return 0;
}
