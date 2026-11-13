#include <iostream>
using namespace std;

int main() {
    int a,b;
    char comma;
    cout<<"Enter the numbers a and b : ";
    cin>>a>>comma>>b;
    cout<<"Remainder when a is divided by b : "<< a % b;// modulos works for only int variables
    return 0;
}