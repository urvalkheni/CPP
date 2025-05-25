#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;
    double gpa;
public:
    Student(string n, int a, int r, double g) : Person(n, a), rollNo(r), gpa(g) {}

    void display() override {
        Person::display();
        cout << "Roll No: " << rollNo << ", GPA: " << gpa << endl;
    }
};

int main() {
    Student s("Urval", 19, 234, 9.2);
    s.display();
    return 0;
}
