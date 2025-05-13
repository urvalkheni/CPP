#include<iostream>
using namespace std;
class Base{
    public: 
    int var1=1;
   virtual void display(){
        cout<<"1 Displaying Base Class variable var1 :: "<<var1<<endl;
    }
};
class Derived : public Base{
      public:
    int var2=2;
    void display(){
        cout<<"1 Displaying Derived Class variable var2 :: "<<var2<<endl;
        cout<<"2 Displaying Base Class variable var1 :: "<<var1<<endl;
    }
};
int main(){
    Base *baseclasspointer;
    Base obj1_base;
    Derived obj1_derived;
    baseclasspointer = &obj1_derived;
    baseclasspointer->display();

    return 0;
}