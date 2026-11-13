#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // 1. Allocate initial memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Store the first 5 odd numbers (1, 3, 5, 7, 9)
    int odd = 1;
    for (int i = 0; i < 5; i++) {
        ptr[i] = odd;
        odd += 2;
    }

    // Print the odd numbers
    printf("--- First 5 Odd Numbers ---\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 3. Reallocate the memory block to hold 6 integers
    int *temp = (int *)realloc(ptr, 6 * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr); // Clean up original memory if resize fails
        return 1;
    }
    ptr = temp;

    // 4. Store the first 6 even numbers (2, 4, 6, 8, 10, 12)
    int even = 2;
    for (int i = 0; i < 6; i++) {
        ptr[i] = even;
        even += 2;
    }

    // 5. Print the even numbers
    printf("\n--- First 6 Even Numbers After realloc ---\n");
    for (int i = 0; i < 6; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 6. Free the dynamically allocated memory
    free(ptr);
    ptr = NULL;

    return 0;
}
