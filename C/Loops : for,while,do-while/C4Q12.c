#include<stdio.h>
int main(){
    int n;
    printf("Enter the number whose reverse table you want to print\n");
    scanf("%d",&n);
    for(int i=10*n;i>=n;i=i-n){
    printf("%d\n",i);
    }
    // for(int i=10;i>=1;i--){
    // printf("%d\n",i*n);
    // }
    return 0;
}