#include <stdio.h>

void calculate(int a, int b, int *sum, int *prod, float *avg);

int main() {
    int num1, num2;
    int s, p;
    float a;

    // 1. Scan the two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // 2. Pass variables by value, and tracking variables by reference (&)
    calculate(num1, num2, &s, &p, &a);

    // 3. Print results in main function
    printf("\n--- Results ---\n");
    printf("Sum = %d\n", s);
    printf("Product = %d\n", p);
    printf("Average printed in main = %.2f\n", a);

    return 0;
}

void calculate(int a, int b, int *sum, int *prod, float *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (float)(a + b) / 2; // (float) ensures we don't lose decimal points
}
