#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size = 5;

    // 1. Allocate memory for an array of size 5 using calloc
    ptr = (int *)calloc(size, sizeof(int));

    // Safety check for memory allocation
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Enter values from the user using a loop
    printf("Enter %d integer values:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &ptr[i]);
    }

    // 3. Print the values back to verify (Optional but good practice)
    printf("\n--- Displaying Stored Values ---\n");
    for (int i = 0; i < size; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 4. Free the allocated memory
    free(ptr);
    ptr = NULL;

    return 0;
}
