#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,5,6,7,8,9,0};
    cout<<"ELEMENS OF ARRAY ARE : ";
    for(int i =0;i<9;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"ENTER MODIFIED VALUES : ";
    for(int i =0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"ELEMENS OF ARRAY ARE : ";
    for(int i =0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
