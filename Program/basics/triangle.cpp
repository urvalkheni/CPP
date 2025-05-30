#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    // Input the three sides
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Triangle Inequality Theorem check
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Triangle is possible." << endl;
    } else {
        cout << "Triangle is NOT possible." << endl;
    }

    return 0;
}
