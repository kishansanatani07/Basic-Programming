#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Negative numbers do not have a defined factorial
    if (n < 0) {
        cout << "Factorial of a negative number doesn't exist." << endl;
        return 0;
    }

    long long factorial = 1; // Used long long to prevent integer overflow

    // Loop from 1 up to n to calculate the product
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
