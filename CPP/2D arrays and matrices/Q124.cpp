#include <iostream>
using namespace std;

int main() {
    // 1. Initialized with nested braces (grouped by rows)
    int arr1[4][2] = { { 1234, 56 }, { 1256, 43 }, { 1434, 32 }, { 1312, 96 } };

    // 2. Initialized as a flat list (compiler fills rows sequentially)
    int arr2[4][2] = { 1234, 56 , 1256, 43 , 1434, 32 , 1312, 96 };

    // 3. Flat initialization for a 2x3 matrix
    int arr3[2][3] = { 12, 34, 56, 78, 91, 23 };

    // 4. Omitting the row dimension (compiler calculates row count automatically)
    int arr4[][3] = { 12, 34, 56, 78, 91, 23 };

    // Displaying the contents of the auto-sized array (arr4)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
