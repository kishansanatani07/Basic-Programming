#include <iostream>
using namespace std;
int main(){
    // rectangle banana hai
    // rows -> m, cols -> 5
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of cols : ";
    cin>>n;
        int a=1;
    for(int i=1;i<=m;i++){ // rows = m
        for(int j=1;j<=i;j++){ // cols = n
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}