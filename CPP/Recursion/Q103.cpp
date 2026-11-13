#include <iostream>
using namespace std;
// int sum(int x){
//     int sm=0;
//     if(x==0){
//         return 0;
//     }
//     sm=x+sum(x-1);
//     return sm;
// }

int sum(int x){
    if(x==0){
        return 0;
    }
    return x+sum(x-1);
}


int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"sum of numbers from 1-9 is : "<<sum(n);
    return 0;
}