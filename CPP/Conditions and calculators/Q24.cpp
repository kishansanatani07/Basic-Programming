#include <iostream>
using namespace std;

int main() {
    float percentage;
    cout << "Enter the student's percentage: ";
    cin >> percentage;

    // Input validation for realistic percentage scores
    if (percentage < 0 || percentage > 100) {
        cout << "Invalid input. Percentage must be between 0 and 100." << endl;
        return 1;
    }

    // Grading logic based on your updated rules
    if (percentage >= 91 && percentage <= 100) {
        cout << "Grade: Marvellous" << endl;
    }
    else if (percentage >= 81 && percentage <= 90) {
        cout << "Grade: Very Good" << endl;
    }
    else if (percentage >= 61 && percentage <= 80) {
        cout << "Grade: Good" << endl;
    }
    else if (percentage >= 41 && percentage <= 60) {
        cout << "Grade: Average" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
