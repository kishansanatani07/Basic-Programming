#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Numbers 3 or less cannot be composite
    if (n <= 3) {
        cout << n << " is not a composite number." << endl;
        return 0;
    }

    int factor_count = 0;

    // Loop from 2 up to n/2 to find any factors
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            factor_count = 1; // Mark that we found a factor
            break;            // Stop the loop immediately
        }
    }

    // Check the final result
    if (factor_count == 1) {
        cout << n << " is a composite number." << endl;
    } else {
        cout << n << " is not a composite number." << endl;
    }

    return 0;
}
