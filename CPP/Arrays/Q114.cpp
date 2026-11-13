#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 12, 7, 25, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_val = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    cout << "Maximum value in given array: " << max_val << endl;
    return 0;
}
