#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public :
    //Creating a constructor
    //Constructor is a special member function with the same name as of the class. It is automatically Invoked whenever an object is created
    // It is used to intialize the objects of its class
    
    Complex(void);
    void display(){
        cout<<"The Complex Number is :: "<<a<<" + "<<b<<"i"<<endl;

    }
};
Complex :: Complex(void){ // ---> This is a Deafult constructor cuz it's not take any parameter
    a = 0;
    b = 0;
}
int main(){
    Complex c1,c2,c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}

/*
1. it should be declared in the public section of the class
2. They are automatically invkoed when the object is created
3. Do not have return type , they do not return value
4. it can have default arguments
5 we cannot refer to their address


*/