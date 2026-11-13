#include <stdio.h>

int main() {
    FILE *fptr;
    int num;

    // Open the file in read mode
    fptr = fopen("C10Q5.txt", "r");

    // Check if the file exists and opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Reading 5 integers from the file:\n");

    // Loop exactly 5 times to read 5 integers
    for (int i = 0; i < 5; i++) {
        // fscanf returns 1 if it successfully reads one integer
        if (fscanf(fptr, "%d", &num) == 1) {
            printf("Integer %d: %d\n", i + 1, num);
        } else {
            printf("Error or End of File reached before reading 5 integers.\n");
            break;
        }
    }

    // Close the file safely
    fclose(fptr);
    return 0;
}
