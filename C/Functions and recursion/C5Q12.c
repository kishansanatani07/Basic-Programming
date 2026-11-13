#include <stdio.h>
float score(float S,float M,float Sn){
return (S+M+Sn)/3;
}

int main(){
    float S ,M ,Sn;
    printf("enter the marks gained by student in all threee subjects(science,maths,sanskrit)\n");
    scanf("%f,%f,%f",&S,&M,&Sn);
    printf("His average score is:%0.3f\n",score(S,M,Sn));
    return 0;
}