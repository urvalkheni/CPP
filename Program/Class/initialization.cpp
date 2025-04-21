#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : intiliozation-section
{
    assigment + other code;
}
    class test{
        int a,b;
        public:
        Test(int i,int j) : a(i),b(j) {constructor-body}
    }
*/
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j) { 
        cout << "Constructor executed"<<endl;
        cout<<"The Value of a is :: "<<a<<endl;
        cout<<"The Value of b is :: "<<b<<endl;
    }
};
int main()
{
    Test t(4,6);
    return 0;
}