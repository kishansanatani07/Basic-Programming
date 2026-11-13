#include <stdio.h>
#include <math.h>
int main(){
    float a =1 , b =2;
    printf("enter value of a \n");
    scanf("%f", &a);
    printf("enter the value of b \n");
    scanf("%f", &b);
    printf("sum of a and b is %f \n", a + b);
      float x,y = a * b ; x=y;
    printf("multiplication of a and b is %f \n", y);
    printf("value of x is %f \n",x);
    printf("square of a is %0.2f \n", pow(a,2));
    printf("quotient when a divided by b is %0.3f \n", a / b);
    int p,q;
    printf("enter the value of p \n");
    scanf("%d", & p);
     printf("enter the value of q \n");
    scanf("%d", & q);
    printf("remainder when a is divided by b is %d \n", p%q);
    return 0;
}