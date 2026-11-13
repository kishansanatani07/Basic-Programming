#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr;

    // 1. Get the size 'n' from the user
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // 2. Dynamically allocate memory for 'n' integers using calloc
    ptr = (int *)calloc(n, sizeof(int));

    // 3. Safety Check: Verify if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // 4. Enter data into the allocated memory blocks
    printf("\nEnter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &ptr[i]);
    }

    // 5. Print the stored data back to the screen
    printf("\n--- Displaying Stored Values ---\n");
    for (int i = 0; i < n; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 6. Always free your dynamically allocated memory
    free(ptr);

    return 0;
}
