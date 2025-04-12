#include <iostream>
#include <vector>
using namespace std;

class Student {
protected:
    int marks;

public:
    virtual void inputMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    virtual void computeGrade() = 0;
    virtual ~Student() {}
};

class Undergraduate : public Student {
public:
    void computeGrade() override {
        if (marks >= 85)
            cout << "Undergraduate Grade: A" << endl;
        else if (marks >= 70)
            cout << "Undergraduate Grade: B" << endl;
        else if (marks >= 50)
            cout << "Undergraduate Grade: C" << endl;
        else
            cout << "Undergraduate Grade: F (Fail)" << endl;
    }
};

class Postgraduate : public Student {
public:
    void computeGrade() override {
        if (marks >= 90)
            cout << "Postgraduate Grade: A" << endl;
        else if (marks >= 75)
            cout << "Postgraduate Grade: B" << endl;
        else if (marks >= 60)
            cout << "Postgraduate Grade: C" << endl;
        else
            cout << "Postgraduate Grade: F (Fail)" << endl;
    }
};

int main() {
    vector<Student*> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int type;
        cout << "\nEnter 1 for Undergraduate or 2 for Postgraduate: ";
        cin >> type;

        Student* student = nullptr;

        if (type == 1) {
            student = new Undergraduate();
        } else if (type == 2) {
            student = new Postgraduate();
        } else {
            cout << "Invalid type! Skipping..." << endl;
            continue;
        }

        student->inputMarks();
        students.push_back(student);
    }

    cout << "\n--- Grades ---\n";
    for (Student* student : students) {
        student->computeGrade();
    }

    for (Student* student : students) {
        delete student;
    }

    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;

    return 0;
}
