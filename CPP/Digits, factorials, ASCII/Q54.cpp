#include <iostream>
using namespace std;

int main() {
    char ch = 'A'; // Start from character 'A' (ASCII value 65)

    // Loop through all 26 uppercase alphabets until 'Z'
    while (ch <= 'Z') {
        // (int)ch extracts the numerical ASCII value of the character
        cout << "ASCII value: " << (int)ch << " -> Character: " << ch << endl;
        ch++; // Move to the next alphabetical character
    }

    return 200; 
}
