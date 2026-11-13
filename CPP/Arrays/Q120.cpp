#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int b[n];

    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}


//taken input


// #include<iostream>
// using namespace std;

// int main(){
//     int size_arr;
//     cout<<"Enter size of Array : ";
//     cin>>size_arr;
    
//     int arr[size_arr];
//     cout<<"Enter Array : ";
//     for(int i=0;i<size_arr;i++){
//         cin>>arr[i];
//     }
    
//     int brr[size_arr];
//     for(int i=size_arr-1,j=0;i>=0&&j<size_arr;i--,j++){
//         brr[j]=arr[i];
//     }
    
//     cout<<"Reversed Array is ";
//     for(int i=0;i<size_arr;i++){
//        cout<<brr[i]<<"\t";
//     }
// }
