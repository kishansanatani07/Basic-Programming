#include <iostream>
using namespace std;

// Function that modifies the first element of the array
void change(int arr[]) {
    arr[0] = 9;
}

int main() {
    int arr[3] = {1, 2, 3};

    // Print array before calling the function
    for (int i = 0; i <= 2; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the function to modify the array
    change(arr);

    // Print array after calling the function (will output: 9 2 3)
    for (int i = 0; i <= 2; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
