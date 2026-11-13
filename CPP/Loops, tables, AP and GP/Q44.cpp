#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Numbers less than or equal to 3 are not composite (1 is neither, 2 and 3 are prime)
    if (n <= 3) {
        cout << n << " is not a composite number." << endl;
        return 0;
    }

    bool isComposite = false;

    // Check if any number from 2 up to n/2 divides n perfectly
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isComposite = true;
            break; // Stop checking as soon as we find a factor
        }
    }

    if (isComposite) {
        cout << n << " is a composite number." << endl;
    } else {
        cout << n << " is not a composite number." << endl;
    }

    return 0;
}
