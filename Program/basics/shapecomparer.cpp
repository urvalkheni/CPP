#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; 
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() {
        return side * side;
    }
};

void compareAreas(Shape* s1, Shape* s2) {
    double area1 = s1->area();
    double area2 = s2->area();

    cout << "Circle Area: " << area1 << endl;
    cout << "Square Area: " << area2 << endl;

    if (area1 > area2)
        cout << "Circle has a larger area." << endl;
    else if (area1 < area2)
        cout << "Square has a larger area." << endl;
    else
        cout << "Both shapes have equal area." << endl;
}

int main() {
    double r, s;
    
    cout << "Enter radius of the circle: ";
    cin >> r;
    
    cout << "Enter side length of the square: ";
    cin >> s;

    Circle c(r);
    Square sq(s);

    compareAreas(&c, &sq);

    return 0;
}
