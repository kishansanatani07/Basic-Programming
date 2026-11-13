#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter n : ";
    cin >> n;

    // Assigning string based on the condition
    (n % 2 == 0) ? cout<<"even number" : cout<<"odd number";

    return 0;
}
