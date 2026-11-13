#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter an integer n : ";
    cin>>n;
    int tempn=n;
    // if(n>=0){
    //     cout<<"The absolute value of "<<n<<" is "<<n;
    // }
    // else{
    //     cout<<"The absolute value of "<<n<<" is "<<-n;
    // }
    if(n<0){
        n=-n;
    }
    cout<<"The absolute value of "<<tempn<<" is "<<n;
    return 0;
}