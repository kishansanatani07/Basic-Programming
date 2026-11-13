#include <iostream>
using namespace std;
int main()
{
    int a[2][5];
    cout << "Enter Array's Elements : ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    cout<<"Entered Array is :\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<< a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}