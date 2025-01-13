#include<iostream>
using namespace std;

int main(){
    //pointer is a data type which holds the address of other data types
    int a = 10;
    int *ptr = &a; // where & is address operator, * is the dereference opretor it is the give the value of variable at address pointer
    cout<<"The Adress of a is by & :: "<<&a<<endl; // this is by & operator
    cout<<"The Adress of a is by pointer :: "<<ptr<<endl; // this is by pointer
    cout<<"The value of a is :: "<<a<<endl; // this is normal access
    cout<<"The value of a is by pointer :: "<<*ptr<<endl; // this is access by pointer
    return 0;
}