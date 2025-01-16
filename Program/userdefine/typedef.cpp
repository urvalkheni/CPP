#include<iostream>
using namespace std;
// type def structure is a user define data type
// with typrdef you don't have to use full syntax of structure
// for better understanding checkout structure.cpp file
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main(){
    ep urval;
    urval.eId = 1;
    urval.favChar = 'U';
    urval.salary = 120000;
    cout<<"The ID is :: "<<urval.eId<<endl;
    cout<<"The Favorite Charecter is :: "<<urval.favChar<<endl;
    cout<<"The Salary is :: "<<urval.salary<<endl;
    return 0;
}