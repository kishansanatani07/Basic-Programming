#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <=100) {
        if (i%2==0) continue;
        cout <<i<< endl;
        i++;
    }
    // for (;i <=100;) {
    //     if (i%2==0) continue;
    //     cout <<i<< endl;
    //     i++;
    // }
    
    // do{
    //     if (i%2==0) continue;
    //     cout <<i<< endl;
    //     i++;
    // }while(i<=100);
    return 0;
}