// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int arr[] = {5, 12, 4, 7, 18, 3, 22, 9, 14, 6};
//     int size = sizeof(arr) / sizeof(arr);
    
//     int max = INT_MIN;
//     int smax = INT_MIN;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] > max) {
//             smax = max;
//             max = arr[i];
//         } else if (arr[i] > smax && arr[i] != max) {
//             smax = arr[i];
//         }
//     }

//     cout << "Second largest element: " << smax << endl;
//     return 0;
// }



#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-10,-2,-3,-4,-5};
    int n = sizeof(arr)/4;
    int mx =INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx) smx = max(smx,arr[i]);
    }
    cout<<smx;
}
