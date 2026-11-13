#include <iostream>
using namespace std;

int main() {
    float a,a1,a2,a3,d,sum=0; 
    int n1,n2;
    char comma;
    cout<<"Enter the first 3 terms of an AP:(a1,a2,a3)\n";
    cin>>a>>comma>>a1>>comma>>a2;
    if((a1-a)==(a2-a1)){
        d=(a1-a);
    }
    else{
        cout<<"Enter an Valid AP";
        return 1;
    }
    cout<<"Enter the number of terms you want in this AP\n";
    cin>>n1;
    cout<<"Enter the number of terms you want sum\n";
    cin>>n2;
    for (int i = 1; i <=n1; i++) {
        cout <<i<<"th Term of the AP is: "<<a+(i-1)*d<< endl;
    }
    cout<<"Sum of "<<n2<<" terms of AP is "<<((float)n2/2)*(2*a+(n2-1)*d)<<" .";
    
    return 0;
}