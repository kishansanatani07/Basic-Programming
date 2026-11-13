#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the Array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Entered array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    bool is_palindrome=true;
    for(int i=0,j=size-1;i<=size/2&&j>=size/2;i++,j--){
        if(arr[i]!=arr[j]){
            is_palindrome=false;
            cout<<"Given Array is not a Palindrome.";
            break;
        }
    }
    if(is_palindrome==true){
        cout<<"Given Array is a Palindrome.";
    }
    return 0;
}