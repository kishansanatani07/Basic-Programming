#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;

    // Handle the special case where the input number is exactly 0
    if (n == 0) {
        count = 1;
    } else {
        // Convert negative numbers to positive
        if (n < 0) {
            n = -n;
        }

        // Loop until all digits are removed
        while (n > 0) {
            n = n / 10; // Removes the last digit
            count++;    // Increment digit counter
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}
