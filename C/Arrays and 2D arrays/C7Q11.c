// #include <stdio.h>

// // Function prototypes
// void storeTable(int arr[][10], int row, int num);
// void printTables(int arr[][10], int num1, int num2);

// int main() {
//     int tables[2][10];
//     int num1, num2;

//     // Get custom numbers from the user
//     printf("Enter the first number for the table: ");
//     scanf("%d", &num1);
//     printf("Enter the second number for the table: ");
//     scanf("%d", &num2);

//     // Store the tables dynamically based on user input
//     storeTable(tables, 0, num1);
//     storeTable(tables, 1, num2);

//     // Print out both tables labeled with the user's choices
//     printTables(tables, num1, num2);

//     return 0;
// }

// // Function to calculate and store a table in a specific row
// void storeTable(int arr[][10], int row, int num) {
//     for (int j = 0; j < 10; j++) {
//         arr[row][j] = num * (j + 1);
//     }
// }

// // Function to print the full 2D array
// void printTables(int arr[][10], int num1, int num2) {
//     printf("\nTable of %d:\n", num1);
//     for (int j = 0; j < 10; j++) {
//         printf("%d ", arr[0][j]);
//     }
//     printf("\n\n");

//     printf("Table of %d:\n", num2);
//     for (int j = 0; j < 10; j++) {
//         printf("%d ", arr[1][j]);
//     }
//     printf("\n");
// }




// #include <stdio.h>

// // Function prototypes
// void storeTable(int arr[][10], int row, int num);
// void printTable(int arr[], int num); // Expects a 1D array (one row)

// int main() {
//     int tables[2][10];
//     int num1, num2;

//     // Get the inputs from the user
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     // Store the data into the 2D array
//     storeTable(tables, 0, num1);
//     storeTable(tables, 1, num2);

//     // Reuse the SAME print function twice by passing individual rows
//     printTable(tables[0], num1); // Passes Row 0
//     printTable(tables[1], num2); // Passes Row 1

//     return 0;
// }

// // Function to calculate and store a table in a specific row
// void storeTable(int arr[][10], int row, int num) {
//     for (int j = 0; j < 10; j++) {
//         arr[row][j] = num * (j + 1);
//     }
// }

// // Reusable function to print a single table row
// void printTable(int arr[], int num) {
//     printf("\nTable of %d:\n", num);
//     for (int j = 0; j < 10; j++) {
//         printf("%d ", arr[j]);
//     }
//     printf("\n");
// }



#include <stdio.h>

// Function prototype
void storeTable(int arr[][10], int n, int m, int number);

int main() {
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for(int i=0; i<10; i++) { // 0 to 10
        printf("%d\t", tables[0][i]);
    }
    printf("\n"); // Added for clean line separation

    for(int i=0; i<10; i++) { // 0 to 10
        printf("%d\t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

// Function to store multiplication tables
void storeTable(int arr[][10], int n, int m, int number) {
    for(int i=0; i<m; i++) { // 0 to 10
        arr[n][i] = number * (i+1); // 2, 4, 6, 8, 10...
    }
}
