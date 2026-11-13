#include <stdio.h>

// Function prototypes
void reverseArray(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n= 5;

    printf("Original array: ");
    printArray(arr, n);

    // Call the reverse function
    reverseArray(arr, n);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}

// Function to reverse the array in place
void reverseArray(int arr[], int n) {
    // int start = 0;
    // int end = n - 1;

    // // Swap elements from both ends moving towards the center
    // while (start < end) {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;

    //     start++;
    //     end--;
    // }
    for(int i=0;i<=(n/2);i++){
        int temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
    }
}

// Helper function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
