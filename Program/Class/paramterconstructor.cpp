#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public :
       
    Complex(int x,int y);
    void display(){
        cout<<"The Complex Number is :: "<<a<<" + "<<b<<"i"<<endl;

    }
};
Complex :: Complex( int x,int y){ // This is Parameterized Constructor
    a = x;
    b = y;
}
int main(){
    Complex c1(6,9);
    c1.display();
    Complex c2 = Complex(3,6);
    c2.display();
   
    return 0;
}

