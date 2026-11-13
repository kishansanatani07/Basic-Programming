#include <iostream>
using namespace std;

int main() {
    int row;
    cout<<"Enter number of rows : ";
    cin>>row;
    int col;
    cout<<"Enter number of cols : ";
    cin>>col;
    for(int i=1;i<=row;i++){ 
        for(int j=1;j<=i;j++){ 
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else if((i+j)%2!=0){
                cout<<"0 ";
            }
        } 
       cout<<endl;
    }
    return 0;
}
