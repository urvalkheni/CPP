#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    a = 5;
    b = 3;
    c = a++ + --b + ++a - b-- + a++ - b++ + ++b;
    cout<<"a is :: "<<a<<endl<<"b is :: "<<b<<endl<<"c is :: "<<c<<endl;
    return 0;
}