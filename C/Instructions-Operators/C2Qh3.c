#include <stdio.h>
int main(){
    char P;
    printf("enter the character 'P':\n");
    scanf("%c", &P);
    printf("%d", (P <='9') && (P >='1'));
    return 0;
}