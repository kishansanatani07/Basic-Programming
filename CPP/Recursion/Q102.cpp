#include <iostream>
using namespace std;

// Parameterized Recursion: 'sum' is carried along as a parameter
void sum(int i, int sm) {
    if (i < 1) {
        cout << "Final Sum: " << sm << endl;
        return;
    }
    sum(i - 1, sm + i);
}

int main() {
    int n = 5;
    sum(n, 0); 
    return 0;
}
