#include <iostream>
using namespace std;

// Helper function to find factorial
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

// Function 1: To find nCr
int findNCR(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

// Function 2: To handle printing logic
void printLeftPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << findNCR(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    printLeftPascalTriangle(n);
    return 0;
}
