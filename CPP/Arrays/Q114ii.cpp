#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 12, 7, 25, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min_val = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    cout << "Minimum value in given array: " << min_val << endl;
    return 0;
}
