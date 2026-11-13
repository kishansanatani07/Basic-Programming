#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the value of x: \n";
    cin >> x;

    if (x < 0) {
        cout << "== Please enter a +ve integer ==\n";
    } 
    else if (x % 5 == 0) {
        cout << "== " << x << " is divisible by 5 ==\n";
    } 
    else {
        cout << "== " << x << " is not divisible by 5 ==\n";    
    }

    return 0;
}
