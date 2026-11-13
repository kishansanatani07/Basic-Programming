#include <stdio.h>
int fact(int n);

int main() {
    int n;
    printf("Enter the value of n:\n");
    if (scanf("%d", &n) == 1 && n >= 0) {
        printf("Factorial of %d is: %d\n", n, fact(n));
    } else {
        printf("Please enter a valid non-negative integer.\n");
    }
    return 0;
}

int fact(int n) {
    // Base case: stop when n reaches 0
    if (n == 0) {
        return 1; 
    }
    // // Recursive case: multiply n to fact(n-1)
    // return n *fact(n - 1);
    int factnm1=fact(n-1);
    int factn=factnm1*n;
return factn;
}