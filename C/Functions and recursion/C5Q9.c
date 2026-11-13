#include <stdio.h>
int sum(int n);

int main() {
    int n;
    printf("Enter the value of n:\n");
    if (scanf("%d", &n) == 1 && n >= 0) {
        printf("Sum of first %d natural numbers is: %d\n", n, sum(n));
    } else {
        printf("Please enter a valid non-negative integer.\n");
    }
    return 0;
}

int sum(int n) {
    // Base case: stop when n reaches 0
    if (n == 0) {
        return 0; 
    }
    // // Recursive case: add n to the sum of (n - 1)
    // return n + sum(n - 1);
    int sumnm1=sum(n-1);
    int sumn=sumnm1+n;
return sumn;
}
