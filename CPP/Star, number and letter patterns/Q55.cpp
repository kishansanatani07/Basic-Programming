#include <iostream>
using namespace std;

int main() {
    // Outer loop controls the number of rows (3 rows)
    for (int i = 1; i <= 3; i++) {
        
        // Inner loop controls the number of stars per row (5 columns)
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        
        // Move to the next line after printing all stars in a row
        cout << endl;
    }
    return 0;
}
