#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of rows : "; 
    cin >> row;

    for (int i = 1; i <= row; i++) {
        // 1. Print the leading spaces to center the pyramid
        for (int j = 1; j <= (row - i); j++) {
            cout << "  ";
        }
        
        // 2. Print the odd number of stars (1, 3, 5, 7...)
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        
        cout << endl;
    }
    return 0;
}
