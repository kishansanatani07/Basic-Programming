#include <iostream>
using namespace std;

int main() {
    float l , b;
    char comma;
    cout<<"Enter the lenght and breadth of rectanmgle : (l,b)\n";
    cin>>l>>comma>>b;
    float area=l*b;
    float perimeter=2*(l+b);
    cout<<"Area of the rectangle is "<<area<<".\n";
    cout<<"Perimeter of the rectangle is "<<perimeter<<".\n";
    if(area>perimeter){
        cout<<"Area is Greater than perimeter.";
    }
    else if(area<perimeter){
        cout<<"Perimeter is Greater than Area.";
    }
    else {
        cout<<"Area and Perimeter both are equal.";
    }
    return 0;
}