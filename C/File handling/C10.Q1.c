#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    // Open the file in read mode
    fptr = fopen("C10Q1.txt", "r");

    // Check if the file exists
    if (fptr == NULL) {
        printf("file doesn't exist\n");
    } else {
        // Read and print the file character by character until the end (EOF)
        while ((ch = fgetc(fptr)) != EOF) {
            printf("%c", ch);
        }
        
        // Close the file safely
        fclose(fptr);
    }
    fptr = fopen("C10Q1.txt", "r");
    
    return 0;
}
