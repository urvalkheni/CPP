#include <iostream>
using namespace std;

// Template for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Template for subtraction
template <typename T>
T subtract(T a, T b) {
    return a - b;
}

int main() {
    // Integer
    int i1, i2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "Integer addition: " << add(i1, i2) << endl;
    cout << "Integer subtraction: " << subtract(i1, i2) << endl;

    // Float
    float f1, f2;
    cout << "\nEnter two float numbers: ";
    cin >> f1 >> f2;
    cout << "Float addition: " << add(f1, f2) << endl;
    cout << "Float subtraction: " << subtract(f1, f2) << endl;

    // Double
    double d1, d2;
    cout << "\nEnter two double numbers: ";
    cin >> d1 >> d2;
    cout << "Double addition: " << add(d1, d2) << endl;
    cout << "Double subtraction: " << subtract(d1, d2) << endl;

    // Char
    char c1, c2;
    cout << "\nEnter two characters: ";
    cin >> c1 >> c2;
    cout << "Char addition: " << add(c1, c2) << " (ASCII: " << (int)add(c1, c2) << ")" << endl;
    cout << "Char subtraction: " << subtract(c1, c2) << " (ASCII: " << (int)subtract(c1, c2) << ")" << endl;

    return 0;
}
