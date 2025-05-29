#include <iostream>
#include <cmath>
using namespace std;

void areaOfCircle() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle = " << M_PI * radius * radius << endl;
}

void areaOfRectangle() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << length * width << endl;
}

void areaOfTriangle() {
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << 0.5 * base * height << endl;
}

void areaOfSquare() {
    double side;
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of Square = " << side * side << endl;
}

void areaOfParallelogram() {
    double base, height;
    cout << "Enter base and height of the parallelogram: ";
    cin >> base >> height;
    cout << "Area of Parallelogram = " << base * height << endl;
}

void areaOfTrapezium() {
    double a, b, height;
    cout << "Enter the lengths of the two parallel sides and the height: ";
    cin >> a >> b >> height;
    cout << "Area of Trapezium = " << 0.5 * (a + b) * height << endl;
}

void areaOfEllipse() {
    double a, b;
    cout << "Enter the semi-major axis (a) and semi-minor axis (b): ";
    cin >> a >> b;
    cout << "Area of Ellipse = " << M_PI * a * b << endl;
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
