#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "No natural numbers till " << n << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * (i + 1);
    }

    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
