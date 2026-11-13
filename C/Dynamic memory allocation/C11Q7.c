#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr;

    // From Qs 65: Get size and allocate memory
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    // From Qs 65: Enter data
    printf("\nEnter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &ptr[i]);
    }

    // From Qs 65: Print data
    printf("\n--- Displaying Stored Values ---\n");
    for (int i = 0; i < n; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // ==========================================
    // SOLUTION FOR PRACTICE QS 67: Free the memory
    // ==========================================
    free(ptr);
    ptr = NULL; // Safe practice: prevent dangling pointer

    return 0;
}
