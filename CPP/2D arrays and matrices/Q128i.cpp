#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 5, 9},
        {14, 2, 8},
        {4, 11, 6}
    };
    
    int max_val = matrix[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
            }
        }
    }

    cout << "Maximum element in given matrix: " << max_val << endl;
    return 0;
}
