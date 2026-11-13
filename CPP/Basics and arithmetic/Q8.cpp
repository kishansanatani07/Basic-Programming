#include <iostream>
using namespace std;

int main() {
    float p;
    float r;
    float t;
    char comma;
    cout<<"Enter the principle amount, rate and time:\n";
    cin>>p>>comma>>r>>comma>>t;// scans comma as a character but ignores it cause we are not using it in the code
    cout<<"Simple interest is: "<< (p*r*t)/100;

    return 0;
}