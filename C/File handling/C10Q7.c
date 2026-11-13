#include <stdio.h>

int main() {
    FILE *fptr;
    int n;

    // Open file in write mode ("w")
    fptr = fopen("C10Q7.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get the upper limit 'n' from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n, incrementing by 2 to hit only odd numbers
    for (int i = 1; i <= n; i += 2) {
        fprintf(fptr, "%d\n", i);
    }

    // Close the file safely
    fclose(fptr);

    printf("Successfully wrote all odd numbers up to %d to odd_numbers.txt\n", n);
    return 0;
}
