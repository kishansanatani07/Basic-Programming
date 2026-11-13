#include <iostream>
using namespace std;

int main() {
    int size=10,num[size];
    cout<<"Enter nums : ";
    for(int i =0;i<size;i++)cin>>num[i];
    cout<<"Nums are : ";
    for(int i =0;i<size;i++)cout<<num[i]<<" ";
    return 0;
}
