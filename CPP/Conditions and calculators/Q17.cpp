#include <iostream>
using namespace std;

int main() {
    float sp,cp,diff;
    char comma;
    float profit , loss;
    cout<<"Enter the selling price and cost price : (sp,cp)\n";
    cin>>sp>>comma>>cp;
if (cp <= 0 || sp<=0) {
    cout << "Invalid cost price. CP and SP must be greater than 0." << endl;
    return 1;
}

diff=sp-cp;
if(diff >0){
        profit=(diff*100)/cp;
        cout<<"Person has made profit of "<<profit<<"% "<<"or "<<diff<<" Rupees.";
    }
else if(diff <0){
        loss=-((diff*100)/cp);
        cout<<"Person has incurred loss of "<<loss<<"% "<<"or "<<-diff<<" Rupees.";
    }
else{
    cout<<"Person has incurred neither profit nor loss";
}
    return 0;
}