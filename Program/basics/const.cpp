#include<iostream>
using namespace std;
int main(){
    cout << "=== Demonstrating const Variables ===\n" << endl;
    
    //so in this the value of a can be changed cuz it's a normal variable
    int a = 35; // intialize normal value a = 35
    cout<<"Initial a (mutable): "<<a<<endl;
    a = 45; // giving new value a = 45
    cout<<"Modified a: "<<a<<endl;
    
    //following value of b is constant which only can readable you can't chnage it
    const int b = 69;
    cout<<"Constant b (immutable): "<<b<<endl;
    // Uncommenting below will cause compile error:
    // b = 100;  // ERROR: const cannot be modified
    return 0;
}