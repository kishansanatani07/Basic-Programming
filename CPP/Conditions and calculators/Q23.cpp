#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    // Input validation
    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    // Checking the compound condition
    if ((num % 5 == 0 || num % 3 == 0) && (num % 15 != 0)) {
        cout << num << " satisfies the condition." << endl;
    } 
    else {
        cout << num << " does not satisfy the condition." << endl;
    }

    return 0;
}
