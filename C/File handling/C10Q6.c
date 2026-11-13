#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int roll;
    float cgpa;

    // Open file in append mode ("a") so you don't overwrite previous students
    fptr = fopen("C10Q6.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get information from the user
    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    // Write the structured information to the file
    fprintf(fptr, "Student Name: %s, Roll No: %d, CGPA: %.2f\n", name, roll, cgpa);

    // Close the file safely
    fclose(fptr);

    printf("Successfully added student details to student.txt\n");
    return 0;
}
