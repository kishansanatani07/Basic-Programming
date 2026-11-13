#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(a) / sizeof(a[0]);

    int i = 0;
    int j = n - 1;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed array: ";
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;

    return 0;
}
