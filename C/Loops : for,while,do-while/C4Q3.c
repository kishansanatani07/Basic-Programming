#include <stdio.h>
int main(){
    int i=0,j;
    printf("enter the value of end number:\n");
    scanf("%d", &j);
    // while(i<=j){
    // printf("%d\n",i);
    // i++;
    // }
    do{
        printf("%d\n",i);
        i++;
    }while(i<=j);
    return 0;
}