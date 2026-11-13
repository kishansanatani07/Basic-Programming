#include <iostream>
using namespace std;

int pow(int a, int b){
    if(a==1||b==0){
        return 1;
    }
    return a*pow(a,b-1);
}


int main() {
    int base,expo;
    cout<<"Enter base and exponent: ";
    cin>>base>>expo;
    cout<<base<<" raised to the power "<<expo<<" is "<<pow(base,expo);
    return 0;
}
