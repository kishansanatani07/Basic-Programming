#include<stdio.h>
int main(){
    int n;
    printf("Enter the number whose table you want to print\n");
    scanf("%d",&n);
    // for(int i=n;i<=10*n;i=i+n){
    // printf("%d\n",i);
    // }
    for(int i=1;i<=10;i++){
    printf("%d\n",i*n);
    }
    return 0;
}