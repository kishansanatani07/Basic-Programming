#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // 1. Allocate initial memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    // Assign sample values to the first 5 slots
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10; // Stores 10, 20, 30, 40, 50
    }

    // 2. DYNAMICALLY INCREASE memory size to hold 8 integers using realloc
    int *temp = (int *)realloc(ptr, 8 * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr); // Clean up original memory if resize fails
        return 1;
    }
    ptr = temp; // Update pointer to the newly resized block

    // Assign values to the 3 newly added slots
    ptr[5] = 60;
    ptr[6] = 70;
    ptr[7] = 80;

    // 3. Print all 8 elements to confirm success
    printf("--- All 8 Elements After realloc ---\n");
    for (int i = 0; i < 8; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 4. Free the memory block
    free(ptr);
    ptr = NULL;

    return 0;
}
