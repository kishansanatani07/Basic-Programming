#include <iostream>
using namespace std;

int myPow(int a, int b){
    if (b == 0) return 1;
    if (a == 0) return 0;
    if (a == 1) return 1; 

    int half = myPow(a, b / 2);
    
    if (b % 2 == 0) {
        return half * half;
    }
    else { 
        return a * half * half;
    }
}

int main() {
    int base, expo;
    cout << "Enter base and exponent: ";
    cin >> base >> expo;
    cout << base << " raised to the power " << expo << " is " << myPow(base, expo) << endl;
    return 0;
}
