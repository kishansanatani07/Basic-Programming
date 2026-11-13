#include <iostream>
using namespace std;
// int factint x){
//     int facto=1;
//     if(x==0||x==1){
//         return 1;
//     }
//     facto=x*fact(x-1);
//     return facto;
// }

int fact(int x){
    if(x==0||x==1){
        return 1;
    }
    return x*fact(x-1);
}


int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    return 0;
}
