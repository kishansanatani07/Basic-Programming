#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int prod = 1;

    // Convert negative numbers to positive to handle sign safely
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        int last_digit = n % 10; // 1. Extract the last digit
        prod = prod * last_digit;  // 2. Add it to the total sum
        n = n / 10;              // 3. Remove the last digit
    }

    cout << "Product of digits: " << prod << endl;
    return 0;
}
