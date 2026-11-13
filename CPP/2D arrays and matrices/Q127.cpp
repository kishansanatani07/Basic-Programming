#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {
        {9, 4, 2},
        {0, 1, 7}
    };
    
    int b[2][3] = {
        {2, 1, 6},
        {5, 9, 4}
    };

    cout<< "Resultant matrix after addition:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}






// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][3] = {
//         {9, 4, 2},
//         {0, 1, 7}
//     };
    
//     int b[2][3] = {
//         {2, 1, 6},
//         {5, 9, 4}
//     };
    
//     int sum[2][3];

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     cout << "Sum of the two matrices:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
