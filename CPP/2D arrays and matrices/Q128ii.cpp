#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {14, 5, 9},
        {1, 12, 8},
        {4, 11, 6}
    };
    
    int min_val = matrix[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
            }
        }
    }

    cout << "Minimum element in given matrix: " << min_val << endl;
    return 0;
}
