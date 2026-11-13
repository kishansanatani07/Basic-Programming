#include<iostream>
using namespace std;

int main(){
    int size_arr;
    cout<<"Enter size of Array : ";
    cin>>size_arr;
    
    int arr[size_arr];
    cout<<"Enter Array : ";
    for(int i=0;i<size_arr;i++){
        cin>>arr[i];
    }
    
    int brr[size_arr];
    for(int i=size_arr-1,j=0;i>=0&&j<size_arr;i--,j++){
        brr[j]=arr[i];
    }
    
    cout<<"Reversed Array is ";
    for(int i=0;i<size_arr;i++){
       cout<<brr[i]<<"\t";
    }
}
