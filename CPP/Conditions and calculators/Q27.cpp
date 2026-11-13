#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    char op;

    cout << "Enter first number, operator, and second number (e.g., 5 + 3): ";
    cin >> n1 >> op >> n2;

    switch (op) {
        case '+':
            cout << "Result: " << (n1 + n2) << endl;
            break;
        case '-':
            cout << "Result: " << (n1 - n2) << endl;
            break;
        case '*':
            cout << "Result: " << (n1 * n2) << endl;
            break;
        case '/':
            // Safety check for division by zero
            if (n2 == 0) {
                cout << "Error: Division by zero is undefined." << endl;
            } else {
                cout << "Result: " << (n1 / n2) << endl;
            }
            break;
        default:
            cout << "Error: Invalid arithmetic operator." << endl;
            break;
    }

    return 0;
}
