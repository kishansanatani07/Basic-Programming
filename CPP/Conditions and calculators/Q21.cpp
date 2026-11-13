#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter the three side lengths: ";
    cin >> a >> b >> c;

    // Validation: Side lengths must be positive numbers
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Side lengths must be greater than 0." << endl;
        return 1;
    }

    // Checking the Triangle Inequality Theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "The numbers " << a << ", " << b << ", and " << c << " can form a triangle." << endl;
    } 
    else {
        cout << "The numbers cannot form a triangle." << endl;
    }
    return 0;
}
