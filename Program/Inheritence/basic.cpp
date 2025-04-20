#include <iostream>
using namespace std;
// base class
class Employee
{
    
    public:
    int id;
    float salary;
        Employee(){}
        Employee(int inpid){
            id = inpid;
            salary = 34;
        }
};
//  Derived class syntax
//  class {{derived-clas-name}} : {{visiblity-mode}} {{base-class-name}}
// Create a derived class
// defult visiblity mode is private
// private visiblity mode : public member of the base class becomes private members of the derived class
// public visiblity mode : public member of the base class becomes public members of the derived class
// private members are never inherit
class Programmer : public Employee{
    public:
    Programmer(int inpid){
        id = inpid;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }

};

int main(){
    Employee Heet(1),Urval(2),Krish(3);
    cout<<Heet.salary<<endl;
    cout<<Urval.salary<<endl;
    cout<<Krish.salary<<endl;
    Programmer skillf(1);
    cout<<skillf.languageCode<<endl;
    skillf.getData();
    return 0;
}