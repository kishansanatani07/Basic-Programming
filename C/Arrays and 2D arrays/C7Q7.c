#include <stdio.h>

// Function prototype
int countOddNumbers(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    // Call function and store result
    int oddCount = countOddNumbers(arr, size);

    // Print result
    printf("Number of odd numbers in the array: %d\n", oddCount);

    return 0;
}

// Function to count odd numbers
int countOddNumbers(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        // A number is odd if it leaves a remainder when divided by 2
        if (arr[i] % 2 != 0) {
            count++;
        }
    }

    return count;
}
