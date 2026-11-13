#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("C10Q4.txt", "r");
    char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF) {
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    // fclose(fptr);
    // Shorter equivalent version
while ((ch = fgetc(fptr)) != EOF) {
    printf("%c", ch);
}

    return 0;
}
