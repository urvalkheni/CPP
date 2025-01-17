#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter The First Number :: ";
    cin>>num1;
    cout<<"Enter The Second Number :: ";
    cin>>num2;
    cout<<"Before Swapping you first number is "<<num1<<" and second number is "<<num2<<endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"After Swapping you first number is "<<num1<<" and second number is "<<num2<<endl;
    return 0;
}