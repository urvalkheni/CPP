#include <iostream>

using namespace std;

double marksToSGPA(int marks) {
    return (marks / 10.0);
}

struct Student {
    string name;
    int marks;
    double sgpa;
};

int main() {
    Student students[5], temp;

    cout << "Enter details for 5 students (Name and Marks out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " Name: ";
        cin >> students[i].name;
        cout << "Marks: ";
        cin >> students[i].marks;
        students[i].sgpa = marksToSGPA(students[i].marks);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (students[i].sgpa < students[j].sgpa) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    cout << "\nResults (Sorted by SGPA):\n";
    cout << "------------------------------------\n";
    cout << "Name\tMarks\tSGPA\n";
    cout << "------------------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << "\t" << students[i].marks << "\t" << students[i].sgpa << "\n";
    }

    cout << "\nTop Performer: " << students[0].name << " with SGPA " << students[0].sgpa << "\n";

    return 0;
}
