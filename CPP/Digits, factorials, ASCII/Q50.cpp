#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversed_num = 0;

    // Handle negative numbers safely
    if (n < 0) {
        cout << "-";
        n = -n;
    }

    // Process without arrays using basic math
    while (n > 0) {
        int last_digit = n % 10;
        reversed_num = (reversed_num * 10) + last_digit;
        n = n / 10;
    }

    cout << reversed_num << endl;
    return 0;
}
