#include <stdio.h>
#include <stdlib.h>

int main() {
    // Pointers for each different data type
    int *int_ptr;
    char *char_ptr;
    float *float_ptr;
    
    // 1. Allocate a total of 3 blocks of 4 bytes each using calloc
    // Block 0: for int (4 bytes)
    // Block 1: for char (4 bytes allocated, 1 byte used)
    // Block 2: for float (4 bytes)
    // Total size = 12 bytes. calloc initializes everything to 0.
    int_ptr = (int *)calloc(3, 4); 

    if (int_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // 2. Set up the other pointers using offsets from the base pointer
    // int_ptr points to Block 0 (byte 0)
    // char_ptr points to Block 1 (byte 4) -> int_ptr + 1 moves forward by 4 bytes
    char_ptr = (char *)(int_ptr + 1); 
    // float_ptr points to Block 2 (byte 8) -> int_ptr + 2 moves forward by 8 bytes
    float_ptr = (float *)(int_ptr + 2); 

    // 3. Enter data into the first block (Integer)
    int_ptr[0] = 45;

    // 4. Enter data into the second block (Character)
    char_ptr[0] = 'W';
    char_ptr[1] = 'x';
    char_ptr[2] = 'y';
    char_ptr[3] = 'z';


    // 5. Enter data into the third block (Float)
    float_ptr[0] = 19.99f;

    // 6. Print the different data types from their blocks
    printf("--- Reading Different Data Types ---\n");
    printf("\n--- Integer Values ---\n");
    printf("Block 1 (Integer):   %d\n", int_ptr[0]);
    printf("\n--- Character Values ---\n");
    for(int i = 0; i < 4; i++) {
        printf("Block 2(%d) (Character): %c\n", i,char_ptr[i]);
    }
    printf("\n--- Float Values ---\n");
    printf("Block 3 (Float):     %.2f\n", float_ptr[0]);

    // 7. Clean up the allocated memory using the base pointer
    free(int_ptr); 
    return 0;
}
