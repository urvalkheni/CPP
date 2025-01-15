#include<iostream>
using namespace std;
// structure is a user define data type
// this helps to make a group of different data types
struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main(){
    struct employee harry;
    harry.eId = 1;
    harry.favChar = 'U';
    harry.salary = 120000;
    cout<<"The ID is :: "<<harry.eId<<endl;
    cout<<"The Favorite Charecter is :: "<<harry.favChar<<endl;
    cout<<"The Salary is :: "<<harry.salary<<endl;
    return 0;
}