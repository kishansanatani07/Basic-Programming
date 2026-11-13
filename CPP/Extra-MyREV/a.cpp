/*55,56*/

// #include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<endl;
//     cout<<"Enter the number of col: ";
//     cin>>col;
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*57*/

// #include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<endl;
//     cout<<"Enter the number of col: ";
//     cin>>col;
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*58*/

// #include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<endl;
//     cout<<"Enter the number of col: ";
//     cin>>col;
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*59,60,61,62*/
// #include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cout<<"Enter the number of rows: ";
//     cin>>row;
//     cout<<endl;
//     cout<<"Enter the number of col: ";
//     cin>>col;
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<(char)(i+64)<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<(char)(j+96)<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=1;i<=row;i++){
//         for(int j=1; j<=col;j++){
//             cout<<(char)(i+96)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*63,64,65*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cout << "Enter the number of rows: ";
//     cin >> row;
//     cout << endl;
//     cout << "Enter the number of col: ";
//     cin >> col;
//     cout << endl;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i >= j)
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i >= j)
//             {
//                 cout << (char)(j + 64) << " ";
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i >= j)
//             {
//                 cout << j << " ";
//             }  
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*66,67,68*/


#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << endl;
    cout << "Enter the number of col: ";
    cin >> col;
    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j>=i)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j>=i)
            {
                cout << (char)(j + 64) << " ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j>=i)
            {
                cout << j << " ";
            }  
        }
        cout << endl;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j>=i)
            {
                cout << i << " ";
            }  
        }
        cout << endl;
    }
    for (int i = row;i >= 1;  i--)
    {
        for (int j = col;j >= 1;  j--)
        {
            if (j>=i)
            {
                cout << i << " ";
            }  
        }
        cout << endl;
    }
    return 0;
}