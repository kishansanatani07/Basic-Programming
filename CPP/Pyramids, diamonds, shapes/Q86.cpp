#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of rows : "; 
    cin >> row;

    for (int i = 1; i <= row; i++) {
        // 1. Print the leading spaces to center the pyramid
        for (int j = 1; j <= (row - i); j++) {
            cout << "  ";
        }
        
        // 2. Print consecutive numbers starting from 1
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
    return 0;
}





// #include <iostream>
// using namespace std;

// int main() {
//     int row;
//     cout << "Enter number of rows : "; 
//     cin >> row;

//     for (int i = 1; i <= row; i++) {
//         // 1. Print the leading spaces
//         for (int j = 1; j <= (row - i); j++) {
//             cout << "  ";
//         }
        
//         // 2. Count UP to i
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
        
//         // 3. Count DOWN from i-1 back to 1
//         for (int j = i - 1; j >= 1; j--) {
//             cout << j << " ";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int row;
//     cout << "Enter number of rows : "; 
//     cin >> row;

//     for (int i = 1; i <= row; i++) {
//         // 1. Print the leading spaces
//         for (int j = 1; j <= (row - i); j++) {
//             cout << "  ";
//         }
        
//         // 2. Print the row number
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << i << " ";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }