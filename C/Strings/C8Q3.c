#include<stdio.h>
int main(){
    char firstname[50];
    char lastname[50];
    printf("Enter the first name:");
    scanf("%s",firstname);
    printf("Enter the last name:");
    scanf("%s",lastname);
    printf("User's name is %s %s!",firstname,lastname);
    return 0;
    }