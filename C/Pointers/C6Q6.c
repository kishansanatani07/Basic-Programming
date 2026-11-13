#include <stdio.h>

void printAddress(int n);

int main() {
    int n = 4;
    printAddress(n);
    printf("address of n is : %d\n", &n);
    return 0;
}

void printAddress(int n) {
    printf("address of n is : %d\n", &n);
}
