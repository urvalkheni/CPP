#include <iostream>
#include <cmath>
using namespace std;

constexpr double PI = 3.14159265358979323846;  // Avoid non-standard M_PI

void areaOfCircle() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    if (!cin || radius <= 0) {
        cout << "Invalid radius!" << endl;
        return;
    }

    cout << "Area of Circle = " << PI * radius * radius << endl;
}

void areaOfRectangle() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    if (!cin || length <= 0 || width <= 0) {
        cout << "Invalid dimensions!" << endl;
        return;
    }

    cout << "Area of Rectangle = " << length * width << endl;
}

void areaOfTriangle() {
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    if (!cin || base <= 0 || height <= 0) {
        cout << "Invalid base or height!" << endl;
        return;
    }

    cout << "Area of Triangle = " << 0.5 * base * height << endl;
}

void areaOfSquare() {
    double side;
    cout << "Enter side of the square: ";
    cin >> side;
    if (!cin || side <= 0) {
        cout << "Invalid side!" << endl;
        return;
    }

    cout << "Area of Square = " << side * side << endl;
}

void areaOfParallelogram() {
    double base, height;
    cout << "Enter base and height of the parallelogram: ";
    cin >> base >> height;
    if (!cin || base <= 0 || height <= 0) {
        cout << "Invalid base or height!" << endl;
        return;
    }

    cout << "Area of Parallelogram = " << base * height << endl;
}

void areaOfTrapezium() {
    double a, b, height;
    cout << "Enter the lengths of the two parallel sides and the height: ";
    cin >> a >> b >> height;
    if (!cin || a <= 0 || b <= 0 || height <= 0) {
        cout << "Invalid inputs!" << endl;
        return;
    }

    cout << "Area of Trapezium = " << 0.5 * (a + b) * height << endl;
}

void areaOfEllipse() {
    double a, b;
    cout << "Enter the semi-major axis (a) and semi-minor axis (b): ";
    cin >> a >> b;
    if (!cin || a <= 0 || b <= 0) {
        cout << "Invalid axes lengths!" << endl;
        return;
    }

    cout << "Area of Ellipse = " << PI * a * b << endl;
}

int main() {
    int choice;

    cout << "Select the shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "4. Square\n";
    cout << "5. Parallelogram\n";
    cout << "6. Trapezium\n";
    cout << "7. Ellipse\n";
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1: areaOfCircle(); break;
        case 2: areaOfRectangle(); break;
        case 3: areaOfTriangle(); break;
        case 4: areaOfSquare(); break;
        case 5: areaOfParallelogram(); break;
        case 6: areaOfTrapezium(); break;
        case 7: areaOfEllipse(); break;
        default: cout << "Invalid choice!" << endl;
    }

    return 0;
}
