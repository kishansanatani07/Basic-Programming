#include <iostream>
using namespace std;

int main() {
    int age =22;
    int* ptr=&age; // int * -> represents a pointer && ptr is variable name for pointer && the value assigned to ptr is address of age 
    // Alternate 
    // int* ptr;
    // ptr=&age;
    int _age=*ptr; // means , assign value at pointer 'ptr' to _age
    cout<<age<<endl; // value of age
    cout<<ptr<<endl; // address of age -> value of ptr
    cout<<*ptr<<endl; // value saved at age -> value saved at the address saved in ptr
    cout<<_age<<endl; // value at age -> value saved at the address saved in ptr
    cout<<&ptr<<endl; // address of ptr
    cout<<&age<<endl; // address of age
    cout<<&_age<<endl; // address of _age
    cout<<&(*ptr)<<endl; // address of value saved at the address saved in ptr 
    cout<<*(&ptr)<<endl; // value saved at the address of ptr
    return 0;
}
