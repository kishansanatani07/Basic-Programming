#include <stdio.h>

int fib(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    
    // Calculate the result first
    int result = fib(n - 1) + fib(n - 2);
    
    // Print the safely calculated result
    printf("Calculated fib of %d is: %d\n", n, result);
    
    return result;
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive integer starting from 1.\n");
    } else {
        printf("\nFinal Result -> %dth term is: %d\n", n, fib(n));
    }
    return 0;
}
