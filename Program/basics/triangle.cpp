#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    // Input the three sides
    cout << "Enter three sides of the triangle: ";
    if (!(cin >> a >> b >> c)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Sides must be positive." << endl;
        return 1;
    }

    // Triangle Inequality Theorem check
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Triangle is possible." << endl;
    } else {
        cout << "Triangle is NOT possible." << endl;
    }

    return 0;
}
