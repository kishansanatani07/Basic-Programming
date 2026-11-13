#include <iostream>
using namespace std;

int main() {
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int sum = 0;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            sum += a[i][j];
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
