#include<stdio.h>
int main(){
    int n,N;
    do{scanf("%d",&N);
        if(N%2 !=0){
            break;
        }
    }while(1); //while(N%2 ==0);
    printf("you have entered a odd number");
    return 0;
}