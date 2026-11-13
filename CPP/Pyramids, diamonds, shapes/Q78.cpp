#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;
        for (int i = 1; i <= row; i++) { 
            for (int j = 1; j <= col; j++) { 
                if (i==row||i==1||j==col||j==1) {
                    cout << "* ";
                }
                else {
                    cout << "  "; 
                }
            } 
            cout << endl;
        }
    return 0;
}
