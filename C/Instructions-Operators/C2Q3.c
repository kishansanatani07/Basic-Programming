#include <stdio.h>
int main(){
    int x;
    printf("enter the value of x \n");
    scanf("%d",& x);
    printf("%d", x % 2 == 0);
    return 0;
}