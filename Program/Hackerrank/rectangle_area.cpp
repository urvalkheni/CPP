#include <iostream>
using namespace std;

// Base class: Rectangle
class Rectangle {
protected:
    int width, height;
public:
    void display() {
        cout << width << " " << height << endl;
    }
};

// Derived class: RectangleArea
class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }

    void display() {
        cout << (width * height) << endl;
    }
};

int main() {
    // Create object of derived class
    RectangleArea r_area;

    r_area.read_input();      // Read width and height
    r_area.Rectangle::display();  // Display width and height (from base class)
    r_area.display();         // Display area (overridden in derived class)

    return 0;
}
