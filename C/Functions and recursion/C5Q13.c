#include <stdio.h>
int fib(int n){
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
   int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("%dth term of fibbonacci series is:%d\n",n,fib(n));
    return 0;
}