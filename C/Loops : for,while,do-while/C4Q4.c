#include<stdio.h>
int main(){
    // int i=1;
    int N,sum=0;
    printf("Enter the value of N(Last natural number):");
    scanf("%d",&N);
    // printf("Sum of first N natural numbers is:%d\n",N*(N+1)/2);//sum=N&(N+1)/2
    // do{
    //     printf("%d\n.",N);
    //     N--;
    // }while(N>=i);
    /*for(int i=1,j=N;i<=N && j>=1;i++,j--){// if we use i<=N,j>=1 the compiler will only see the second condition to run loop or stop.*/
    for(int j=N;j>=1;j--){    
    sum=sum+j;
    printf("%d.\n",j);

    }//i is defined inside for loop then it's for on loop it'll not go outside.
    printf("sum is:%d\n",sum);
    /*for(int i=N;i>=1;i--){
        printf("%d.\n",i);
    }*/
    return 0;
}