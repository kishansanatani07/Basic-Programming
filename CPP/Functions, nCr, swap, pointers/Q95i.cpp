#include <iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=1;i<=x;i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    
    cout<<a/(b*c);
    return 0;
}



// #include <iostream>
// using namespace std;

// // Function to calculate factorial of a number using int
// int factorial(int num) {
//     int fact = 1;
//     for (int i = 1; i <= num; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// // Dedicated function to calculate nCr using int
// int calculateNCR(int n, int r) {
//     int numerator = factorial(n);
//     int denominator = factorial(r) * factorial(n - r);
//     return numerator / denominator;
// }

// int main() {
//     int n, r;
//     cout << "--- Combination (nCr) Calculator ---" << endl;
//     cout << "Enter total number of items (n): ";
//     cin >> n;
//     cout << "Enter items to select (r): ";
//     cin >> r;

//     // Validation check: n must be >= r, and both non-negative
//     if (n < r || n < 0 || r < 0) {
//         cout << "Invalid Input! Ensure that n >= r and both are non-negative." << endl;
//     } else {
//         int result = calculateNCR(n, r);
//         cout << "Combination (" << n << "C" << r << ") = " << result << endl;
//     }

//     return 0;
// }



