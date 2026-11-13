#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Order of Matrix : ";
    cin >> n;
    int matrix[n][n];
    cout << "==Enter Matrix (Row by Row)=="<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    cout<<"==Entered Matrix is=="<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j]<<"\t";
        }
        cout << endl;
    }
        cout<<"==Transpose of Matrix=="<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[j][i]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
