#include <iostream>
using namespace std;

void sum(int a, int b){
    cout<<a+b;
}

int main(){
    int a;
    cout<<"Enter 1st Number : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    sum(a,b);
}


// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     int a;
//     cout<<"Enter 1st Number : ";
//     cin>>a;
//     int b;
//     cout<<"Enter 2nd Number : ";
//     cin>>b;
//     sum(a,b);
// }
