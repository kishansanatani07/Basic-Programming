#include <stdio.h>
int main(){
    float Radius;
    printf("enter value of Radius ");
    scanf("%f", &Radius);
    float pi=3.14;
    printf("Circumference of the circle is %.2f", 2*pi*Radius);
    return 0;
}