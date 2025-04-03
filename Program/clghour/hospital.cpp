#include <iostream>
#include <string>
using namespace std;

// Base class
class Hospital {
protected:
    int roll_no;
    string name;

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cin.ignore(); // Ignore newline after integer input
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void printData() {
        cout << "Roll No: " << roll_no << "\nName: " << name << endl;
    }
};

// Derived class from Hospital
class Ward : virtual public Hospital {
protected:
    int ward_number;

public:
    void getData() {
        Hospital::getData();
        cout << "Enter Ward Number: ";
        cin >> ward_number;
    }

    void printData() {
        Hospital::printData();
        cout << "Ward Number: " << ward_number << endl;
    }
};

// Derived class from Hospital
class Room : virtual public Hospital {
protected:
    int bed_number;
    string nature_of_illness;

public:
    void getData() {
        cout << "Enter Bed Number: ";
        cin >> bed_number;
        cin.ignore(); // Ignore newline after integer input
        cout << "Enter Nature of Illness: ";
        getline(cin, nature_of_illness);
    }

    void printData() {
        cout << "Bed Number: " << bed_number << "\nNature of Illness: " << nature_of_illness << endl;
    }
};

// Derived class from Ward and Room
class Patient : public Ward, public Room {
public:
    void getData() {
        Ward::getData(); // Get patient and ward details
        Room::getData(); // Get room details
    }

    void printData() {
        Ward::printData();
        Room::printData();
    }
};

int main() {
    Patient p;
    cout << "Enter patient details:\n";
    p.getData();
    cout << "\nPatient Details:\n";
    p.printData();
    return 0;
}
