#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter Two Number :: ";cin>>num1>>num2;
    cout<<"Number 1 before Swap :: "<<num1<<endl<<"Number 2 Before Swap :: "<<num2<<endl;
    num1 = num1 + num2 - (num2=num1);
    cout<<"Number 1 After Swap :: "<<num1<<endl<<"Number 2 After Swap :: "<<num2<<endl;
    return 0;
}