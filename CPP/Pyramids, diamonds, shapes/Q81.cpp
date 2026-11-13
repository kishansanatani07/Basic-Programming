#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;

    int midpr = (row % 2 != 0) ? (row / 2) + 1 : (row / 2);
    int midpc = (col % 2 != 0) ? (col / 2) + 1 : (col / 2);

    int p = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            int right_side = midpc + p + (col % 2 == 0 ? 1 : 0);

            if (j >= (midpc - p) && j <= right_side)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        if (i < midpr)
        {
            p = p + 1;
        }
        else if (i > midpr || row % 2 != 0)
        {
            p = p - 1;
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout << "Enter number of rows : ";
//     cin >> row;
//     cout << "Enter number of cols : ";
//     cin >> col;

//     int midpr = row / 2;
//     int midpc = (col / 2) + (col % 2);

//     int p = 0;
//     for (int i = 1; i <= row; i++) {
//         for (int j = 1; j <= col; j++) {
//             // If col is even, we shift the right boundary by 1 to make a flat center
//             int right_bound = midpc + p + (col % 2 == 0 ? 1 : 0);

//             if (j >= (midpc - p) && j <= right_bound) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;

//         // Symmetrical tracking for even rows
//         if (row % 2 == 0) {
//             if (i < midpr) {
//                 p = p + 1; // Expand top half
//             } else if (i > midpr) {
//                 p = p - 1; // Shrink bottom half
//             }
//             // When i == midpr, p stays exactly the same to repeat the center width!
//         } else {
//             // Standard odd row logic
//             if (i < midpr + 1) p = p + 1;
//             else p = p - 1;
//         }
//     }
//     return 0;
// }
