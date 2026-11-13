#include <stdio.h>

// void printNumbers(int arr[], int n);
void printNumbers(int *arr, int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // (Assuming 6 elements based on your function call)
    
    printNumbers(arr, 6); // Fixed: Added semicolon here
    return 0;
}
// void printNumbers(int arr[], int n)
void printNumbers(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
