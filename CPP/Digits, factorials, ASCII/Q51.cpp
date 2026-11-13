#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Save the original value because 'n' will become 0 in the loop
    int original_number = n; 
    int reversed_num = 0;

    // Handle positive numbers
    while (n > 0) {
        int last_digit = n % 10;
        reversed_num = (reversed_num * 10) + last_digit;
        n = n / 10;
    }

    // Calculate the final sum
    int final_sum = original_number + reversed_num;

    cout << "Original Number: " << original_number << endl;
    cout << "Reversed Number: " << reversed_num << endl;
    cout << "Sum: " << final_sum << endl;

    return 0;
}
