#include <stdio.h>

int main() {
    // Initialize the 2D array with 2 rows and 3 columns
    int marks[2][3] = {
        {90, 89, 78}, // Row 0
        {90, 89, 78}  // Row 1
    };

    // Print the element at row index 0, column index 0 (Output: 90)
    printf("%d\n", marks[0][0]);

    return 0;
}
