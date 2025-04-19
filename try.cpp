#include <iostream>
using namespace std;

class Person {  // Base Class
public:
    void showName() {
        cout << "Name: John Doe" << endl;
    }
};

class Employee : public Person {  // Derived from Person
public:
    void showEmployeeID() {
        cout << "Employee ID: E123" << endl;
    }
};

class Manager : public Employee {  // Derived from Employee
public:
    void showDepartment() {
        cout << "Department: Sales" << endl;
    }
};
int main() {
    Manager m;
    m.showName();         // Inherited from Person
    m.showEmployeeID();   // Inherited from Employee
    m.showDepartment();   // Defined in Manager
    return 0;
}
