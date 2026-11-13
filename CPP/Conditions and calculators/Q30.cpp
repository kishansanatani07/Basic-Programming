 #include <iostream>
using namespace std;

int main() {
    // Variable declaration and initialization
    int x = 3, y, z;
    
    // Assignment executes from right to left
    y = x = 10; 
    
    // Comparison (x < 10) happens first, then assignment to z
    z = x < 10; 
    
    // Output the results separated by spaces
    cout << x << " " << y << " " << z;
    
    return 0;
}
