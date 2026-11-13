#include<stdio.h>
int main(){
    // int i=1;
    int sum=0;
    for(int j=5;j<=50;j++){    
    sum=sum+j;
    printf("%d.\n",j);
    }//i is defined inside for loop then it's for on loop it'll not go outside.
    /*for(int i=5;i<=50;i++){
        printf("%d.\n",i);
    }*/
    printf("sum is:%d\n",sum);  
    return 0;
}