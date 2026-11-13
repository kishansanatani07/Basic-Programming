#include <stdio.h>

// Function declaration with correct pointer types
void printReverse(int *ptr, int *total_elements);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    int *ptr = &arr[4]; 
    int size = 5;

    printf("Array elements in reverse order:\n");

    printReverse(ptr, &size);
    return 0;
}

void printReverse(int *ptr, int *total_elements) {
    for (int i = 0; i < *total_elements; i++) {
        printf("%d ", *ptr); // Prints current element
        ptr--;               // Moves backward safely toward the start
    }
}
