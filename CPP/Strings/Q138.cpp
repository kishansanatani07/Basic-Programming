#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    string result1 = s1 + " " + s2;
    cout << result1 << endl;

    string result2 = s1 + '!';
    cout << result2 << endl;

    s1 += " Programming";
    cout << s1 << endl;

    return 0;
}
