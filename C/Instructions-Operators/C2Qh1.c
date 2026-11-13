#include <stdio.h>
int main(){
    float x,y,z;
    // printf("enter the value of x \n");
    // scanf("%f",& x);
    // printf("enter the value of y \n");
    // scanf("%f",& y);
    // printf("enter the value of z \n");
    // scanf("%f",& z);
    printf("enter the value of x,y,z.ie.(x,y,z) \n");
    scanf("%f,%f,%f",& x,&y,&z);
    printf("Average of x,y,z is: %0.3f", (x+y+z)/3);
    return 0;
}