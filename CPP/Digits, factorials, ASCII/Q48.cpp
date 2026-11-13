#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    // Convert negative numbers to positive to handle sign safely
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        int last_digit = n % 10; // 1. Extract the last digit
        sum = sum + last_digit;  // 2. Add it to the total sum
        n = n / 10;              // 3. Remove the last digit
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
