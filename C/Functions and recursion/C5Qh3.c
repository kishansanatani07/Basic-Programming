#include<stdio.h>
void checktemp(float temp);
int main(){
    float temp;
    printf("enter the value of temp\n");
    scanf("%f",&temp);
    checktemp(temp);
    return 0;
}

void checktemp(float temp){
    if(temp<7){
        printf("weather is very cold\n");
    }
    else if(temp>=7 && temp<12){
        printf("weather is cold\n");
    }
    else if(temp>=12 && temp <25){
        printf("weather is normal\n");
    }
    else if(temp>=25 && temp<=34){
        printf("Weather is a bit hotter\n");
    }
    else if(temp>=34){
        printf("Weather is a very hot\n");
    }
}