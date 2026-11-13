#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    char op;

    cout << "Enter first number, operator, and second number (e.g., 5 + 3): ";
    cin >> n1 >> op >> n2;

    // Performing operations using an if-else if ladder
    if (op == '+') {
        cout << "Result: " << (n1 + n2) << endl;
    } 
    else if (op == '-') {
        cout << "Result: " << (n1 - n2) << endl;
    } 
    else if (op == '*') {
        cout << "Result: " << (n1 * n2) << endl;
    } 
    else if (op == '/') {
        // Safety check for division by zero
        if (n2 == 0) {
            cout << "Error: Division by zero is undefined." << endl;
        } else {
            cout << "Result: " << (n1 / n2) << endl;
        }
    } 
    else {
        cout << "Error: Invalid arithmetic operator." << endl;
    }

    return 0;
}
