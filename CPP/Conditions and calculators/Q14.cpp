#include <iostream>
using namespace std;

int main() {
    int num;

    // Take positive integer input from user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is even." << endl;  //if(n%2==0) cout<<"even number";
    } else {
        cout << num << " is odd." << endl;   //   if(n%2!=0) cout<<"odd number";
    }

    return 0;
}
