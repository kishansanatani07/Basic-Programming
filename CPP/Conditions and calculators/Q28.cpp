#include <iostream>
using namespace std;

// Function declarations (prototypes)
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    float n1, n2;
    char op;

    cout << "Enter first number, operator, and second number (e.g., 5 + 3): ";
    cin >> n1 >> op >> n2;

    switch (op) {
        case '+':
            cout << "Result: " << add(n1, n2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(n1, n2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(n1, n2) << endl;
            break;
        case '/':
            // Safety check to prevent dividing a number by zero
            if (n2 == 0) {
                cout << "Error: Division by zero is undefined." << endl;
            } else {
                cout << "Result: " << divide(n1, n2) << endl;
            }
            break;
        default:
            cout << "Error: Invalid arithmetic operator." << endl;
            break;
    }

    return 0;
}

// Function definitions
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}