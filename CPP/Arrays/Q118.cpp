#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 4, 7, 18, 3, 22, 9, 14, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    int difference = even_sum - odd_sum;
    cout << "Difference: " << difference << endl;
    return 0;
}
