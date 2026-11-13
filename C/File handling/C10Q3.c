#include <stdio.h>

int main() {
    FILE *fptr;

    // Open the file in write mode ("w")
    fptr = fopen("C10Q3.txt", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write a sentence to the file
    fprintf(fptr, "This is a sentence written to the file.\n");

    // Close the file safely
    fclose(fptr);

    printf("Sentence successfully written to NewTest.txt\n");
    return 0;
}
