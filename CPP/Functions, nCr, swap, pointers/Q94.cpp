#include <iostream>
#include <cmath> // Required for all math functions
using namespace std;

int main() {
    cout << "--- C++ <cmath> Library Commonly Used Functions ---" << endl << endl;

    // 1. Power and Roots
    double base = 2, exp_val = 3;
    cout << "1. pow(" << base << ", " << exp_val << ") = " << pow(base, exp_val) << "  [2 raised to the power of 3]" << endl;
    cout << "2. sqrt(25) = " << sqrt(25) << "  [Square root of 25]" << endl;
    cout << "3. cbrt(27) = " << cbrt(27) << "  [Cube root of 27]" << endl;
    cout << "4. hypot(3, 4) = " << hypot(3, 4) << "  [Hypotenuse of a right triangle: sqrt(3^2 + 4^2)]" << endl;
    cout << "5. exp(1) = " << exp(1) << "  [e raised to the power of 1 (e = 2.71828)]" << endl << endl;

    // 2. Logarithms
    cout << "6. log(2.71828) = " << log(2.71828) << "  [Natural logarithm (base-e)]" << endl;
    cout << "7. log10(100) = " << log10(100) << "  [Common logarithm (base-10)]" << endl;
    cout << "8. log2(8) = " << log2(8) << "  [Binary logarithm (base-2)]" << endl << endl;

    // 3. Rounding Functions
    double num1 = 4.3, num2 = 4.8;
    cout << "9. ceil(" << num1 << ") = " << ceil(num1) << "  [Rounds UP to the nearest integer]" << endl;
    cout << "10. floor(" << num2 << ") = " << floor(num2) << "  [Rounds DOWN to the nearest integer]" << endl;
    cout << "11. round(" << num1 << ") = " << round(num1) << "  [Rounds to nearest integer (4)]" << endl;
    cout << "12. round(" << num2 << ") = " << round(num2) << "  [Rounds to nearest integer (5)]" << endl;
    cout << "13. trunc(4.9) = " << trunc(4.9) << "  [Truncates/removes the decimal part completely]" << endl << endl;

    // 4. Absolute, Remainder, and Min/Max
    cout << "14. abs(-15) = " << abs(-15) << "  [Returns the absolute positive value]" << endl;
    cout << "15. fmod(5.5, 2.0) = " << fmod(5.5, 2.0) << "  [Floating-point remainder of 5.5 / 2.0]" << endl;
    cout << "16. fmax(10.5, 20.7) = " << fmax(10.5, 20.7) << "  [Returns the maximum of two values]" << endl;
    cout << "17. fmin(10.5, 20.7) = " << fmin(10.5, 20.7) << "  [Returns the minimum of two values]" << endl << endl;

    // 5. Trigonometry (Values are processed in Radians)
    // To convert 90 degrees to radians: 90 * (3.14159 / 180) ≈ 1.5708
    double angle_rad = 1.5708; 
    cout << "18. sin(" << angle_rad << " rad) = " << sin(angle_rad) << "  [Equivalent to sin(90°)]" << endl;
    cout << "19. cos(" << angle_rad << " rad) = " << cos(angle_rad) << "  [Equivalent to cos(90°)]" << endl;
    cout << "20. tan(0) = " << tan(0) << "  [Equivalent to tan(0°)]" << endl;
    cout << "21. atan2(1, 1) = " << atan2(1, 1) << " rad  [Calculates angle using y and x coordinates]" << endl;

    return 0;
}
