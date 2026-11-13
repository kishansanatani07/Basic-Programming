#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;
    if(row==col){
        for (int i = 1; i <= row; i++) { 
            for (int j = 1; j <= col; j++) { 
                if (i==j||i+j==row+1) {
                    cout << "* ";
                }
                else {
                    cout << "  "; 
                }
            } 
            cout << endl;
        }
    }
    else{
        cout<<"number of Row and col should be same";
    }
    return 0;
}
