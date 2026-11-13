#include <stdio.h>

float my_pow(float base, int exp);

int main() {
    float base;
    int exp;
    
    printf("Enter the base (float): ");
    if (scanf("%f", &base) != 1) {
        printf("Invalid base input.\n");
        return 1;
    }
    
    printf("Enter the exponent (integer): ");
    if (scanf("%d", &exp) != 1) {
        printf("Invalid exponent input.\n");
        return 1;
    }
    
    // Check for 0 raised to 0 or negative power
    if (base == 0.0 && exp <= 0) {
        printf("Error: Math error (undefined result).\n");
        return 1;
    }
    
    printf("%.2f raised to the power of %d is %.4f\n", base, exp, my_pow(base, exp));
    return 0;
}

float my_pow(float base, int exp) {
    float result = 1.0;
    
    // Handle the 0th power rule: anything^0 = 1
    if (exp == 0) {
        return 1.0;
    }
    
    // Convert negative exponent to positive for the loop
    long long positive_exp = exp;
    if (positive_exp < 0) {
        positive_exp = -positive_exp;
    }
    
    // Loop to multiply the base
    for (int i = 0; i < positive_exp; i++) {
        result = result * base;
    }
    
    // If the original exponent was negative, invert the final result (1 / result)
    if (exp < 0) {
        return 1.0 / result;
    }
    
    return result;
}
