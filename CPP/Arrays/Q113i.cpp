#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int product = 1;

    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    cout << "Product of given array elements: " << product << endl;
    return 0;
}
