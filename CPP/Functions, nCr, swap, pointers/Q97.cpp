#include <iostream>
using namespace std;

// Function to swap two numbers using references
void swapNumbers(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Call function directly without using address-of (&) operator or pointers
    swapNumbers(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}



// #include <iostream>
// using namespace std;

// void swapWithoutTemp(int &num1, int &num2) {
//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;
// }

// int main() {
//     int a, b;
//     cout << "Enter 1st number (a): ";
//     cin >> a;
//     cout << "Enter 2nd number (b): ";
//     cin >> b;

//     cout << "Before swap: a = " << a << ", b = " << b << endl;

//     swapWithoutTemp(a, b);

//     cout << "After swap: a = " << a << ", b = " << b << endl;

//     return 0;
// }
