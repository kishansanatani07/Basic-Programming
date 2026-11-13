#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;

    // Validation check for positive integers
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid input. All numbers must be positive integers." << endl;
        return 1;
    }

    // Logic to find the greatest number
    if (a >= b && a >= c) {
        cout << "The greatest number is: " << a << endl;
    } 
    else if (b >= a && b >= c) {
        cout << "The greatest number is: " << b << endl;
    } 
    else {
        cout << "The greatest number is: " << c << endl;
    }

    return 0;
}