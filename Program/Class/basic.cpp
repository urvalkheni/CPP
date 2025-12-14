#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        int empID;
        string name;
        double salary;
        int workHours;
        
    public:
        int department;
        int age;
        
        // Constructor
        Employee() : empID(0), name(""), salary(0.0), workHours(0), department(0), age(0) {}
        
        void setData(int id, string n, double sal, int hours) {
            empID = id;
            name = n;
            salary = (sal >= 0) ? sal : 0;
            workHours = (hours >= 0) ? hours : 0;
        }
        
        void getData(){
            cout << "\n=== Employee Details ==="<<endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: $" << salary << endl;
            cout << "Work Hours: " << workHours << " hrs/week" << endl;
            cout << "Department: " << department << endl;
            cout << "Age: " << age << endl;
        }
        
        double calculateMonthlyPay() {
            return salary / 12.0;
        }
        
        bool isOvertime() {
            return workHours > 40;
        }
};

int main(){
    cout << "=== Employee Management System ==="<<endl;
    
    Employee urval;
    urval.age = 25;
    urval.department = 101;
    urval.setData(1001, "Urval Kheni", 60000.0, 45);
    
    urval.getData();
    
    cout << "\n=== Additional Info ==="<<endl;
    cout << "Monthly Pay: $" << urval.calculateMonthlyPay() << endl;
    cout << "Overtime: " << (urval.isOvertime() ? "Yes" : "No") << endl;
    
    return 0;
}