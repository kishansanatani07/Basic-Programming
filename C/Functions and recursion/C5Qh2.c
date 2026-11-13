#include<stdio.h>
#include<math.h>
float sqroot(float n);
int main(){
    float n;
    printf("enter the value of n\n");
    scanf("%f",&n);
    printf("square root of %0.3f is %0.3f",n,sqroot(n));
    return 0;
}

float sqroot(float n){
    float x;
    x=pow(n,0.5);
    return x;
}