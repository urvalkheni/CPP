#include<iostream>
using namespace std;

int main(){
    int a = 16;
    int *x = &a; // this store the address of varibale a 
    int **y = &x; // and this store the address of pointer x
    cout<<"The value of a is :: "<<a<<endl; 
    cout<<"The value of a is by pointer x :: "<<*x<<endl;
    cout<<"The value of a is by pointer y :: "<<**y<<endl;
    cout<<"The Adress of a is by & :: "<<&a<<endl; 
    cout<<"The Adress of a is by pointer x :: "<<x<<endl; 
    cout<<"The address of x is :: "<<y<<endl;
    return 0;
}