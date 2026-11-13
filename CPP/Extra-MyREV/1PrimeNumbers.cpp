#include<iostream>
using namespace std;
void prime(int m);
int main(){
    int a;
    cin>>a;
    prime(a);
}
void prime(int m){
    
    for(int i=2;i<=m;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true){
            cout<<i<<"\t";
        }
    }
}
