#include <iostream>
using namespace std;

void input(int arr[3][3])
{
    cout << "== Taking input for matrix ==" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

void output(int arr[3][3])
{
    cout << "== The Matrix is ==" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[3][3])
{
    cout << "== The transpose Matrix is ==" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void multiply(int arr[3][3], int brr[3][3], int mult[3][3])
{
    int ele[3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                ele[k] = arr[i][k] * brr[k][j];
            }
            mult[i][j] = ele[0] + ele[1] + ele[2];
        }
    }
}

int main()
{
    int arr[3][3];
    int brr[3][3];
    int mult[3][3];
    input(arr);
    output(arr);
    input(brr);
    output(brr);
    multiply(arr,brr,mult);
    output(mult);

    return 0;
}
