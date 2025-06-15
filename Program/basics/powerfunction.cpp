#include <iostream>
using namespace std;

// Function to calculate power
double power(double base, int exponent) {
    double result = 1.0;

    if (exponent > 0) {
        for (int i = 0; i < exponent; ++i)
            result *= base;
    } else if (exponent < 0) {
        for (int i = 0; i < -exponent; ++i)
            result /= base;
    }
    // If exponent is 0, result remains 1.0
    return result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent (can be negative): ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << fixed;
    cout.precision(5);
    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0;
}