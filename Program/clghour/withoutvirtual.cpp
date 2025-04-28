#include <iostream>
using namespace std;
class Base {
public:
    Base() {cout << "Base constructor\n"; }
    
    // Virtual destructor to ensure correct destruction
    ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[100]; // Dynamically allocated memory
        cout << "Derived constructor\n";
    }

    ~Derived() {
        delete[] data;  // Properly release memory
        cout << "Derived destructor\n";
    }
};

int main() {
    Base* ptr = new Derived();  // Create Derived object with Base pointer
    delete ptr;                 // Correctly calls Derived destructor + Base destructor

    return 0;
}
