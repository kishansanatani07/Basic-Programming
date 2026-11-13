#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    // Validation to ensure the input is a positive integer
    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    // Check if the number leaves a remainder of 0 when divided by both 5 and 3
    if (num % 5 == 0 && num % 3 == 0) {
        cout << num << " is divisible by both 5 and 3." << endl;
    } 
    else {
        cout << num << " is not divisible by both 5 and 3." << endl;
    }

    return 0;
}
