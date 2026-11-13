#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter number of rows: ";
    cin >> m;

    // for (int i = 1; i <= m; i++) {
    //     // Print 'i' odd numbers in each row
    //     for (int j = 1; j <= i; j++) {
    //         cout << (2 * j - 1) << " ";
    //     }
    //     cout << endl;
    // }


    for (int i = 1; i <= m; i++) {
            int a=1;
        for (int j = 1; j <= i; j++) {
            cout << a << " ";
            a=a+2;
        }
        cout << endl;
    }
    return 0;
}

