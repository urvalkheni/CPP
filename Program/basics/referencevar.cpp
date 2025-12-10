#include<iostream>
using namespace std;
int c  = 45;
int main(){
    int a,b,c;
    cout<<"Built-in Data Types"<<endl;
    cout<<"Enter The Value of a :: ";
    if (!(cin>>a)) {
        cout<<"Invalid input for a."<<endl;
        return 1;
    }
    cout<<"Enter The Value of b :: ";
    if (!(cin>>b)) {
        cout<<"Invalid input for b."<<endl;
        return 1;
    }
    c  = a + b;
    cout<<"The Sum is :: "<<c<<endl;
    cout<<"The Gloabl C is :: "<<::c<<endl<<endl;
    
    cout<<"Float, Double and Long Double Literals"<<endl;
    float d=69.69;
    long double e=69.69;
    cout<<"The size of 69.69 is :: "<<sizeof(69.69)<<endl;
    cout<<"The size of 69.69l is :: "<<sizeof(69.69l)<<endl;
    cout<<"The size of 69.69f is :: "<<sizeof(69.69f)<<endl;
    cout<<"The size of 69.69L is :: "<<sizeof(69.69L)<<endl;
    cout<<"The size of 69.69F is :: "<<sizeof(69.69F)<<endl<<endl;
    
    cout<<"Reference Variable"<<endl;
    int x=45;
    int &y = x;
    cout<<"The Value of x is :: "<<x<<endl;
    cout<<"The value of y is :: "<<y<<endl<<endl;

    cout<<"Typecasting"<<endl;
    int p = 69;
    float q = 31.69;
     cout<<"The Value of p is :: "<<float(p)<<endl;
     cout<<"The Value of p is :: "<<(float)p<<endl;

    cout<<"The Value of q is :: "<<int(q)<<endl;
    cout<<"The Value of q is :: "<<(int)q<<endl;
    int r = int(q);

    cout<<"The Value of p+q is :: "<<p+q<<endl;
    cout<<"The Value of p+(int)q is :: "<<p+(int)q<<endl;
    cout<<"The Value of p+int(q) is :: "<<p+int(q)<<endl;
    cout<<"The Value of float(p)+q is :: "<<float(p)+q<<endl;
    cout<<"The Value of (float)p+q is :: "<<(float)p+q<<endl;
    cout<<"The Value of r is :: "<<r<<endl<<endl;
    return 0;
}