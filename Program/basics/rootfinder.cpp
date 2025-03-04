#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

// Function to find roots of quadratic equation
template <typename T>
void solveQuadratic(T a, T b, T c) {
    T D = b * b - 4 * a * c;
    if (D >= 0) {
        cout << "Roots: " << (-b + sqrt(D)) / (2 * a) << " , " << (-b - sqrt(D)) / (2 * a) << endl;
    } else {
        complex<T> root1(-b / (2.0 * a), sqrt(-D) / (2.0 * a));
        complex<T> root2(-b / (2.0 * a), -sqrt(-D) / (2.0 * a));
        cout << "Complex Roots: " << root1 << " , " << root2 << endl;
    }
}

// Function to find roots of cubic equation (using numerical method)
template <typename T>
void solveCubic(T a, T b, T c, T d) {
    // Cardano's method is complex; using an approximation method
    cout << "Cubic root solver is not fully implemented here. Use numerical methods like Newton-Raphson for real-world applications." << endl;
}

int main() {
    int degree;
    cout << "Enter the degree of the polynomial (2 or 3): ";
    cin >> degree;

    if (degree == 2) {
        double a, b, c;
        cout << "Enter coefficients a, b, c: ";
        cin >> a >> b >> c;
        solveQuadratic(a, b, c);
    } else if (degree == 3) {
        double a, b, c, d;
        cout << "Enter coefficients a, b, c, d: ";
        cin >> a >> b >> c >> d;
        solveCubic(a, b, c, d);
    } else {
        cout << "Invalid degree!" << endl;
    }
    return 0;
}
