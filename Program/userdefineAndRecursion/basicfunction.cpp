#include<iostream>
using namespace std;
int sum(int a,int b){ // here a and b are formal parameters
    return a + b;
}
int main(){
    int num1,num2;
    cout<<"Enter The First Number :: ";cin>>num1;
    cout<<"Enter The Second Number :: ";cin>>num2;
    cout<<"The Sum of Number 1 and Number 2 is :: "<<sum(num1,num2); // num1 and num2 are actual parameter
    return 0;
}