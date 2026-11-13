#include <stdio.h>
float CtoF(float c){
float f;
    f=(c*1.8)+32;
return f;
}

int main(){
    float f,c;
printf("enter the temparature in degree celsius:");
scanf("%f",&c);
printf("the temparature in fahrenheit is:%0.3f",CtoF(c));
    return 0;
}