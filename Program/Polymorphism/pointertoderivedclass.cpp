#include<iostream>
using namespace std;
class Base{
    public:
    int var1;
    void display(){
        cout<<"Displaying Base Class variable var1 :: "<<var1<<endl;
    }
};
class Derived : public Base{
      public:
    int var2;
    void display(){
        cout<<"Displaying Base Class variable var1 :: "<<var1<<endl;
        cout<<"Displaying Derived Class variable var2 :: "<<var2<<endl;
    }
};
int main(){
    Base *baseclasspointer;
    Base obj1_base;
    Derived obj1_derived;
    baseclasspointer = &obj1_derived;//pointing base class pointer to derived class 
    baseclasspointer->var1 = 60;
    //baseclasspointer->var2 = 140; // will throw an error
    baseclasspointer->display();
    Derived *derivedclasspointer;
    derivedclasspointer = &obj1_derived;
    derivedclasspointer->var2 = 140;
    derivedclasspointer->display();
    return 0;
}