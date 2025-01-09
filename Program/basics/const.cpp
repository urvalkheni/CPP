#include<iostream>
using namespace std;
int main(){
    //so in this the value of a can be changed cuz it's a normal variable
    int a = 35; // intialize normal value a = 35
    cout<<"The Value of a is :: "<<a<<endl;
    a = 45; // giving new value a = 45
    cout<<"The Value of a is :: "<<a<<endl;
    //following value of b is constant which only can readable you can't chnage it
    const int b = 69;
    cout<<"The Value of b is :: "<<b<<endl;
    return 0;
}