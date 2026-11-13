#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("C10Q2ii.txt", "r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    fclose(fptr);
     fptr = fopen("C10Q2ii.txt", "a");   
    // fptr = fopen("C10Q2ii.txt", "w");   

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    return 0;
}
