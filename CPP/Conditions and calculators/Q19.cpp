#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<x<<" is a three digit number";
    }
    else{
        cout<<x<<" is not a three digit number.";
    }
    return 0;
}