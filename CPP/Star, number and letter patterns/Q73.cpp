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
    for(int i=1 ;i<=m;i++){ // rows = m
        for(int j=m;j>=m+1-i;j--){ // cols = n
            cout<<j<<"\t";
        }
        cout<<endl;
    }
}