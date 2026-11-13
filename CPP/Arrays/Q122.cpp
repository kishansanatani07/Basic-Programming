#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0;
    int j = n - 1;
    bool is_palindrome = true;

    while (i < j) {
        if (a[i] != a[j]) {
            is_palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}

