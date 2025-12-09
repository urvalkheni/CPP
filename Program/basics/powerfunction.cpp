#include <iostream>
using namespace std;

// Function to calculate power using fast exponentiation
double power(double base, int exponent) {
    if (exponent == 0) return 1.0;

    if (base == 0.0 && exponent < 0) {
        throw invalid_argument("0 cannot be raised to a negative exponent");
    }

    double result = 1.0;
    int exp = abs(exponent);
    double current = base;

    while (exp > 0) {
        if (exp & 1) result *= current;
        current *= current;
        exp >>= 1;
    }

    return exponent > 0 ? result : 1.0 / result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    if (!(cin >> base)) {
        cout << "Invalid base." << endl;
        return 1;
    }

    cout << "Enter the exponent (can be negative): ";
    if (!(cin >> exponent)) {
        cout << "Invalid exponent." << endl;
        return 1;
    }

    try {
        double result = power(base, exponent);
        cout << fixed;
        cout.precision(5);
        cout << base << " ^ " << exponent << " = " << result << endl;
    } catch (const exception &ex) {
        cout << "Error: " << ex.what() << endl;
        return 1;
    }

    return 0;
}