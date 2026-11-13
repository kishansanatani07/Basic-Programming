#include <iostream>
using namespace std;
//print 1-n
void print(int x){
    if(x==0) {
        return;
    }
    print(x-1);
    cout<<x<<"."<<endl;
}
// print n-1
void Print(int x){
    if(x==0) {
        return;
    }
    cout<<x<<"."<<endl;
    Print(x-1);
}
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
    Print(n);
    return 0;
}
