#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long factorial = 1; // Stores the running factorial product

    // Single loop to print each factorial up to n
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i; // Multiplies the previous factorial by the current index
        cout << "Factorial of " << i << " is: " << factorial << endl;
    }

    return 0;
}
