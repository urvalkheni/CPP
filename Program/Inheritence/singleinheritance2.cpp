#include<iostream>
using namespace std;
//private derived
class Base{
    int data1; // private not in heritable
    public :
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base :: setdata(){
    data1 = 10;
    data2 = 20;
}
int Base :: getdata1(){
    return data1;
}
int Base :: getdata2(){
    return data2;
}
class Derived : Base{ // class is derived publicly
    int data3;
    public:
    void process();
    void display();
};

void Derived :: process(){
    setdata();
    data3 = data2 * getdata1();
    // setdata(); if we write here it will print data3 0
    
}
void Derived :: display(){
    cout<<"Th Value of data 1 is :: "<<getdata1()<<endl;
    cout<<"Th Value of data 2 is :: "<<data2<<endl;
    cout<<"Th Value of data 3 is :: "<<data3<<endl;

}
int main(){
    Derived der;
    // der.setdata();
    der.process();
    der.display();
    return 0;
}