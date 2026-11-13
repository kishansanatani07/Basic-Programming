#include<stdio.h>
int main(){
    int n,N;
    do{scanf("%d",&N);
        if(N%7 ==0){
            break;
        }
    }while(1); //while(N%7 ==0);
    printf("you have entered a multiple of 7.");
    return 0;
}