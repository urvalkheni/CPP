#include<iostream>
using namespace std;
int main(){
    cout << "Demonstrating Operator Precedence\n" << endl;
    
    int a=3,b=10;
    int c;
    cout << "Initial: a = " << a << ", b = " << b << endl;
    c = ((a*b-5)+ a++ + b%a);
    cout << "Expression: ((a*b-5)+ a++ + b%a)" << endl;
    cout << "Result: c = " << c << endl;
    
    return 0;
}