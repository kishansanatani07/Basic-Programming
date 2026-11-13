// #include <iostream>
// using namespace std;
// int main(){
//     // rectangle banana hai
//     // rows -> m, cols -> 5
//     char row;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     char col;
//     cout<<"Enter number of cols : ";
//     cin>>col;
//     for(char ch='A';ch<=row;ch++){ // rows = row
//         for(char ch1='A';ch1<=col;ch1++){ // cols = col
//             cout<<ch1<<"\t";
//         }
//         cout<<endl;
//     }
// }


#include <iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows -> m, cols -> 5
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of cols : ";
    cin>>n;
    for(int i=1;i<=m;i++){ // rows = m
        for(int j=1;j<=n;j++){ // cols = n
            cout<<(char)(j+64)<<"\t";
        }
        cout<<endl;
    }
}