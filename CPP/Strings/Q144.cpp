#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"enter string : ";
    cin>>str;
    
    int num = stoi(str);
    cout << num+1 << endl;
    return 0;
}
