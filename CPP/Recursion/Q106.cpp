#include <iostream>
using namespace std;

int fib(int x){
    if(x==1){
        return 1;
    }
    if(x==2){
        return 1;
    }
    return fib(x-1)+fib(x-2);
}


int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Fibonacci of "<<n<<" is "<<fib(n);
    return 0;
}
