#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int = b;
    }
};
class base3{
    protected:
    int base3int;
    public:
    void set_base3int(int c){
        base3int = c;
    }
};
class derived :public base1,public base2,public base3{
    public:
    void show(){
        cout<<"The Value of base 1 is :: "<<base1int<<endl;
        cout<<"The Value of base 2 is :: "<<base2int<<endl;
        cout<<"The Value of base 3 is :: "<<base3int<<endl;
        cout<<"The Sum of base 1 + base 2 + base 3 is :: "<<base1int+base2int+base3int<<endl;
    }

};
/* 
class Derived : visiblity-mode base1 , visiblity-mode base2 {
    class body
};

data members ::
base1int --> protected
base2int --> protected
member function ::
set_base1int() --> public
set_base2int() --> public
set_show() --> public
*/
int main(){
    derived Urval;
    Urval.set_base1int(3);
    Urval.set_base2int(6);
    Urval.set_base3int(9);
    Urval.show();
    return 0;
}