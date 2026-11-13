#include <iostream>
using namespace std;

int main() {
    float g,g1,g2,gn,r,sum=0; 
    int n1,n2;
    char comma;
    cout<<"Enter the first 3 terms of an GP:(g,g1,g2)\n";
    cin>>g>>comma>>g1>>comma>>g2;

    if((g1/g)==(g2/g1)){
        r=(g1/g);
    }
    else{
        cout<<"Enter a Valid GP";
        return 1;
    }
    cout<<"Enter the number of terms you want in this GP\n";
    cin>>n1;
    cout<<"Enter the number of terms you want to sum\n";
    cin>>n2;
    float gtemp=g;
    for (int i = 1; i <=n1; i++) {
        gn=gtemp;
        cout <<i<<"th Term of the GP is: "<<gn<< endl;
        gtemp=gtemp*r;
    }
    float gtemp2=g;
    for (int i = 1; i <=n2; i++) {
    gn=gtemp2;
    sum=sum+gn;
    gtemp2=gtemp2*r;
    }
    cout<<"Sum of "<<n2<<" terms of GP is "<<sum<<" .";
return 0;
}