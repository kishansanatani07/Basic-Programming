// #include <stdio.h>

// int main() {
//     int n;

//     // Loop continues until the user enters a value greater than 0
//     do {
//         printf("Enter a positive value for n: \n");
//         scanf("%d", &n);

//         if (n <= 0) {
//             printf("Invalid input!\n "); // Warning message before re-asking
//         }
//     } while (n <= 0); 

//     // Declare an array to store n elements
//     int fib[n];

//     // Base cases initialization
//     fib[0] = 0;
//     if (n > 1) {
//         fib[1] = 1;
//     }

//     // Calculate and store the rest of the Fibonacci numbers
//     for (int i = 2; i < n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     // Print the stored numbers
//     printf("The first %d Fibonacci numbers are:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fib[i]);
//     }
//     printf("\n");

//     return 0;
// }




// #include <stdio.h>

// // Function prototype
// void storeFibonacci(int fib[], int n);

// int main() {
//     int n;

//     // Loop continues until the user enters a value greater than 0
//     do {
//         printf("Enter a positive value for n: ");
//         scanf("%d", &n);

//         if (n <= 0) {
//             printf("Invalid input! ");
//         }
//     } while (n <= 0); 

//     // Declare the array after getting a valid size n
//     int fib[n];

//     // Pass the array to the function
//     storeFibonacci(fib, n);

//     // Print the stored numbers
//     printf("The first %d Fibonacci numbers are:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("%d \n ", fib[i]);
//     }
//     printf("\n");

//     return 0;
// }

// // Function to calculate and store Fibonacci numbers in the passed array
// void storeFibonacci(int fib[], int n) {
//     fib[0] = 0; // Base case 1
    
//     if (n > 1) {
//         fib[1] = 1; // Base case 2
//     }

//     // Populate the rest of the array elements
//     for (int i = 2; i < n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
// }



#include <stdio.h>

// Function prototypes
void storeFibonacci(int fib[], int n);
void printArray(int fib[], int n);

int main() {
    int n;

    // Loop continues until the user enters a value greater than 0
    do {
        printf("Enter a positive value for n: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Invalid input! ");
        }
    } while (n <= 0); 

    // Declare the array after getting a valid size n
    int fib[n];

    // Pass array to store the sequence
    storeFibonacci(fib, n);

    // Pass array to print the sequence
    printArray(fib, n);

    return 0;
}

// Function to calculate and store Fibonacci numbers
void storeFibonacci(int fib[], int n) {
    fib[0] = 0; 
    
    if (n > 1) {
        fib[1] = 1; 
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

// Function to print the array elements
void printArray(int fib[], int n) {
    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d \n", fib[i]);
    }
    printf("\n");
}
