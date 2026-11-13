#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows : "; cin >> row;
    cout << "Enter number of cols : "; cin >> col;

    for (int i = 0; i < row; i++) {
        // Print spaces to create the slant (fewer spaces as rows go down)
        for (int j = 0; j < (row - 1 - i); j++) {
            cout << "  ";
        }
        
        // Print the fixed number of columns of asterisks
        for (int j = 0; j < col; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }
    return 0;
}
