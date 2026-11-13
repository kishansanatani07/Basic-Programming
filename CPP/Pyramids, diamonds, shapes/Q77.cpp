#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;
    if (row % 2 != 0 && col % 2 != 0) {
        int midRow = (row / 2) + 1;
        int midCol = (col / 2) + 1;
        for (int i = 1; i <= row; i++) { 
            for (int j = 1; j <= col; j++) { 
                if (i == midRow || j == midCol) {
                    cout << "* ";
                }
                else {
                    cout << "  "; 
                }
            } 
            cout << endl;
        }
    }
    else {
        cout << "Enter odd numbers as input for this\n"; 
    }
    return 0;
}
