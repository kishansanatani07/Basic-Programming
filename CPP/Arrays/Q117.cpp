#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 12, 7, 25, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    cout << "Number of elements greater than " << x << ": " << count << endl;
    return 0;
}
