#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    char operater;
    cout<<"Enter The Frist Number :: ";
    cin>>num1;
    cout<<"Enter The Second Number :: ";
    cin>>num2;
    cout<<"Enter The Operater [+,-,*,/] :: ";
    cin>>operater;
    switch (operater)
    {
    case '+':
        cout<<"The Result is :: "<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<"The Result is :: "<<(num1-num2)<<endl;
        break;
    case '*':
        cout<<"The Result is :: "<<(num1*num2)<<endl;
        break;
    case '/':
        cout<<"The Result is :: "<<(num1/num2)<<endl;
        break;
    default:
        cout<<"Invalid Operator..!Please select valid one...[+,-,*,/]"<<endl;
        break;
    }

    return 0;
}