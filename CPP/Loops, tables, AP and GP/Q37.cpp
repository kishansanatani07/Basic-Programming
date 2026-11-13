#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the  number whose table you want\n";
    cin>>n;
    if(n>=0)
    for (int i = n; i <=n*10; i=i+n) {
        cout <<i<< endl;
    }
    else 
    for (int i = n; i >=n*10; i=i+n) {
        cout <<i<< endl;
    }
    return 0;
}