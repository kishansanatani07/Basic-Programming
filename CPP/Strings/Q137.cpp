#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    str.push_back('!');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    str.append(" World");
    cout << str << endl;
    
    str.clear();
    cout << str << endl;
    return 0;
}
