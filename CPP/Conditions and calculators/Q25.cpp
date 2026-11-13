#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter the coordinates (x y): ";
    cin >> x >> y;

    // Check for origin first
    if (x == 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") is at the origin." << endl;
    }
    // Check for axes next
    else if (x == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the y-axis." << endl;
    }
    else if (y == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the x-axis." << endl;
    }
    // Determine quadrants if it's not on any boundary
    else if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the 1st Quadrant." << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the 2nd Quadrant." << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in the 3rd Quadrant." << endl;
    }
    else {
        cout << "The point (" << x << ", " << y << ") lies in the 4th Quadrant." << endl;
    }

    return 0;
}
