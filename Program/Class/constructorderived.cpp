#include<iostream>
using namespace std;
class Base1{
    int data1;
    public :
    Base1(int i){
        data1 = i;
        cout<<"Base 1 Class constructor called"<<endl;
    }
    void printDataBase1(){
        cout<<"The Value of Data is :: "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public :
    Base2(int i){
        data2 = i;
        cout<<"Base 2 Class constructor called"<<endl;
    }
    void printDataBase2(){
        cout<<"The Value of Data is :: "<<data2<<endl;
    }
};
class Derived : public Base1, public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d) : Base1(a),Base2(b) {
        derived1 = c;
        derived2 = d;
        cout<<"Derived Class constructor called"<<endl;
    }
    void printDataDerived(){
        cout<<"The Value of Derived 1 and Derived 2 is :: "<<derived1<<" "<<derived2<<endl;
    } 
};
int main(){
    Derived Urval(1,2,3,4);
    Urval.printDataBase1();
    Urval.printDataBase2();
    Urval.printDataDerived();
    return 0;
}