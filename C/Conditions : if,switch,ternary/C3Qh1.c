#include <stdio.h>
#include <math.h>

int main() {
    int num, digit1, digit2, digit3, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Relational operator check to ensure it is a 3-digit number
    if (num < 100 || num > 999) {
        printf("Error: Please enter a valid 3-digit number.\n");
    } 
    else {
        // Step 1: Manually separate the digits without loops
        digit1 = num / 100;         // Gets the hundreds place digit
        digit2 = (num / 10) % 10;   // Gets the tens place digit
        digit3 = num % 10;          // Gets the units place digit

        // Step 2: Calculate the sum of cubes using basic multiplication
        sum = pow(digit1,3) + 
              pow(digit2,3) + 
              pow(digit3,3);

        // Step 3: Use a switch-case statement to check the result
        // We compare (sum == num). If true, it evaluates to 1. If false, it evaluates to 0.
        switch (sum == num) {
            case 1:
                printf("%d is an Armstrong number.\n", num);
                break;
            case 0:
                printf("%d is NOT an Armstrong number.\n", num);
                break;
        }
    }

    return 0;
}

