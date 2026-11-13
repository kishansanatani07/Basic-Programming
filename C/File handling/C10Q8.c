#include <stdio.h>

int main() {
    FILE *fptr;
    int a, b, sum;

    // 1. Open the file in read mode to fetch the two numbers
    fptr = fopen("C10Q8.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file to read.\n");
        return 1;
    }

    // Read the two integers from the file
    if (fscanf(fptr, "%d %d", &a, &b) != 2) {
        printf("Error: File does not contain two valid numbers.\n");
        fclose(fptr);
        return 1;
    }
    
    // Close the file after reading
    fclose(fptr);

    // Calculate the sum
    sum = a + b;

    // 2. Reopen the same file in write mode to overwrite it
    fptr = fopen("C10Q8.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not open file to write.\n");
        return 1;
    }

    // Write the sum back into the file
    fprintf(fptr, "%d", sum);

    // Close the file safely
    fclose(fptr);

    printf("Successfully replaced numbers with their sum: %d\n", sum);
    return 0;
}
