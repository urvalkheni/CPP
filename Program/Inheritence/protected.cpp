#include <iostream>
using namespace std;
class base{
protected:
    int a;

private:
    int b;
};
/*
    for a protected member :
                    Public derivation   Private Derivation  Protected Derivation
1. Private          not Inherited       not Inherited       not Inherited
2. Protected        Protected           Private             Protected           
3. Public           Public              Private             Protected

Private members of the base class are never directly accessible by derived classes, regardless of the inheritance type. They can only be accessed through public/protected member functions of the base class.
Protected members are inherited:
As protected in public and protected inheritance.
As private in private inheritance.
Public members are:
Inherited as public in public inheritance.
Inherited as private in private inheritance.
Inherited as protected in protected inheritance.
*/
class derived : public base{

};
int main(){
    base b;
    derived d;
   // cout<<d.a; // will not work cuz a is protected in both base as wel as derived class
    return 0;
}