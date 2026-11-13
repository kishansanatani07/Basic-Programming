#include<stdio.h>
void max(int *a ,int *b);
int main(){
    int a,b;
    printf("enter value of a ");
    scanf("%d", &a);
    printf("enter the value of b ");
    scanf("%d", &b);
    max(&a,&b);
    return 0;
}

void max(int *a, int *b){
if (*a>*b){
    printf("%d is the greater amongst the entered number",*a);
}
else if (*b>*a){
 printf("%d is the greater amongst the entered number",*b);
}
else {
printf("%d,%d both are equal", *a, *b);
}

}