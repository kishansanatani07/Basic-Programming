#include <iostream>
using namespace std;
int max(int a,int b){
    if (a>b ) return a;
    else return b;
    //return(a>b) ? a:b;   // this is how it works
}
// -> (?)TERNARY OPERATOR
// • It can only contain Expressions (things that evaluate to a clean, single value, like numbers, formulas, or functions like printf).
// • It can never contain Statements (structural actions, commands, or instructions like return, int x = 5, if, or semicolons ; in the middle)
int main() {
    int x,y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    cout<<max(x,y)<<" is the greater value in "<<x<<" and "<<y<<".\n";
    return 0;
}