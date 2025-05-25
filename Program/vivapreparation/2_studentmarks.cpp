#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks[5];
public:
    Student(string n, int r) : name(n), rollNumber(r) {}

    void inputMarks() {
        cout << "Enter 5 marks for " << name << ": ";
        for (int i = 0; i < 5; ++i) cin >> marks[i];
    }

    void displayResult() {
        int total = 0;
        for (int m : marks) total += m;
        cout << "Name: " << name << ", Roll No: " << rollNumber
             << ", Total Marks: " << total << endl;
    }
};

int main() {
    Student s1("Heet", 101), s2("Pushti", 102);
    s1.inputMarks();
    s2.inputMarks();
    s1.displayResult();
    s2.displayResult();
    return 0;
}
