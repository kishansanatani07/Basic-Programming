#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter Array's Lengths : ";
    cin >> m >> n;

    int arr[m], brr[n];
    
    cout << "Enter array 1 : ";
    for(int i = 0; i < m; i++) cin >> arr[i];

    cout << "Enter array 2 : ";
    for(int i = 0; i < n; i++) cin >> brr[i];

    cout << "Summed array is : ";
    int max_L = (m > n) ? m : n;
    
    for (int i = 0; i < max_L; i++) {
        int a = (i < m) ? arr[i] : 0; // If within bounds use array value, else 0
        int b = (i < n) ? brr[i] : 0; // If within bounds use array value, else 0
        cout << a + b << "\t";
    }
    cout << endl;

    return 0;
}




// int main(){
//     int m,n;
//     cout<<"Enter Array's Lenghts : ";
//     cin>>m>>n;
//     int arr[m],brr[n];
//     cout<<"Enter array 1 : ";
//     for(int i=0;i<m;i++){
//         cin>>arr[i];
//     }
//     cout<<"Entered array 1 is : ";
//     for(int i=0;i<m;i++){
//         cout<<arr[i]<<"\t";
//     }
//     cout<<endl;
//     cout<<"Enter array 2 : ";
//     for(int i=0;i<n;i++){
//         cin>>brr[i];
//     }
//     cout<<"Entered array 2 is : ";
//     for(int i=0;i<n;i++){
//         cout<<brr[i]<<"\t";
//     }
//     cout<<endl;
//     int sum_L=(m>n ? m:n);
//     for(int i=0;i<sum_L;i++){
//         if(m>n){
//             if(i>=n){
//                 cout<<arr[i]<<"\t";
//             }else{
//                 cout<<arr[i]+brr[i]<<"\t";
//             }
//         }else{
//             if(i>=m){
//                 cout<<brr[i]<<"\t";
//             }else{
//                 cout<<arr[i]+brr[i]<<"\t";;
//             }
//         }
//     }
//     return 0;
// }\