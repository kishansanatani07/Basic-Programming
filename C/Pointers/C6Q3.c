#include <stdio.h>

int main() {
    int i = 25;        // 1. Regular variable
    int *ptr = &i;     // 2. Single pointer (stores address of i)
    int **pptr = &ptr; // 3. Pointer to pointer (stores address of ptr)

    // Printing the value of 'i' using the double pointer
    printf("Value of i using pointer to pointer = %d\n", **pptr);
    printf("Value of i using pointer to pointer = %d\n", *ptr);
    printf("Value of i using pointer to pointer = %d\n",i);

    return 0;
}
