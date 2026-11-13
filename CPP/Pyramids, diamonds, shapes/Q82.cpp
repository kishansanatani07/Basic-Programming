#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of cols : ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        int a = 1;
        for (int j = 1; j <= col; j++)
        {

            if (i + j >= row + 1)
            {
                cout << a << " ";
                a++;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
