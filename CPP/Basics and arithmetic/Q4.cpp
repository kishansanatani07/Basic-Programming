#include<iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 2;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout<<x/y;//(gives quotient only)
    // // Fixed: Static cast converts x to double to preserve decimals
    // cout << static_cast<double>(x) / y << endl; 

    return 0;
}
   