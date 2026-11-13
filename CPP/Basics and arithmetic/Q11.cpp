#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout<<(float)x/2<<endl;
    cout<<static_cast<float>(x)/2;
    return 0;
} 