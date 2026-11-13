#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Numbers less than or equal to 1 do not have a proper factor other than themselves
    if (n <= 1) {
        cout << "No proper factor exists other than itself." << endl;
        return 0;
    }

    int highest_factor = 1;

    // Loop downwards from n/2 to find the largest divisor
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            highest_factor = i;
            break; // Stop immediately since we are counting down
        }
    }

    /*for(int i=1;i<=n/2;i++){
        if(n%i==0) highest_factor = i;
    }*/

    cout << "The highest factor of " << n << " (other than itself) is: " << highest_factor << endl;

    return 0;
}
