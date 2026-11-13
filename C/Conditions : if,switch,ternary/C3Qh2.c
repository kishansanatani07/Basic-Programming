#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    // if(num>0){
    //     printf("%d is a natural number",num);
    // }
    // else{
    //     printf("%d is not a natural number", num);
    // }
    (num>0)? printf("%d is a natural number", num):printf("%d is a not natural number", num);
    return 0;
}

