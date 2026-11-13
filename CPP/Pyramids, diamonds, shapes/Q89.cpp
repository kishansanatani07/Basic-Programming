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
        for (int j = 1,k=1; j <= col; j++)
        {
            int right_side = midpc + p + (col % 2 == 0 ? 1 : 0);

            if (j >= (midpc - p) && j <= right_side){
                cout << k<<" ";
                k++;
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