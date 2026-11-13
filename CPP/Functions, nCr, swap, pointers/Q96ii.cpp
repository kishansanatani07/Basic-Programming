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

// Function 2: To handle printing logic with spaces
void printPyramidPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Loop to print leading spaces for the pyramid alignment
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }
        
        // Loop to print the combination values
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
    
    printPyramidPascalTriangle(n);
    return 0;
}
