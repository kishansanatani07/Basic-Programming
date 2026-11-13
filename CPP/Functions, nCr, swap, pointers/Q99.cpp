#include <iostream>
using namespace std;
void swap(int*x,int*y){
int temp=*x;
*x=*y;
*y=temp;
}

int main() {
    int a,b;
    int* ptr1=&a,* ptr2=&b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    swap(ptr1,ptr2);
    cout<<"Numbers after swapping are: "<<a<<","<<b;
    
    return 0;
}



// #include <iostream>
// using namespace std;

// void swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int x = 12;
//     int y = 45;
//     cout<<x<<" "<<y<<endl;
//     swap(&x,&y);
//     cout<<x<<" "<<y<<endl;
// }
