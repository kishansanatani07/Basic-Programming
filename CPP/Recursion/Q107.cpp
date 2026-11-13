#include <iostream>
using namespace std;

// Changed return type and variables to long long to handle huge numbers
long long fib(int x) {
    if (x <= 0) return 0;
    if (x == 1 || x == 2) return 1;

    long long prev2 = 1; // Represents fib(x-2)
    long long prev1 = 1; // Represents fib(x-1)
    long long current = 0;

    for (int i = 3; i <= x; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fib(n) << endl;
    return 0;
}
