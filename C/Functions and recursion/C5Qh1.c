#include<stdio.h>
int countdigit(int n);
int sumofdigit(int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("the number of digits in %d is %d\n",n, countdigit(n));
    printf("the sum of digits in %d is %d\n",n, sumofdigit(n));
    return 0;
}

int countdigit(int n){
    int count=0;
    if (n<0){
        n=-n;
    }
    do{
        n=n/10;
        count++;
    }while(n!=0);
    return count;
}

int sumofdigit(int n){
    int x,sum=0;
    if (n<0){
        n=-n;
    }
    do{
        x=n%10;
        n=n/10;
        sum=sum+x;
    }while(n!=0);
    return sum;
}