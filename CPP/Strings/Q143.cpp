#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout<<"enter num : ";
    cin>>num;
    
    string str = to_string(num);
    cout << str.length() << endl;
    return 0;
}
