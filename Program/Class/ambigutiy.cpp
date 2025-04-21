#include<iostream>
using namespace std;
class base1{
    public :
    void greet(){
        cout<<"How Are You...!"<<endl;
    }

};
class base2{
    public :
    void greet(){
        cout<<"kem chho...!"<<endl;
    }
};
class derived :public base1, public base2{
    int a;
    public :
    void greet(){
        base1 :: greet();
    }
};
class B{
    public :
    void say(){
        cout<<"Hello C++...!"<<endl;
    }
};
class D : public B{
    int a;
    public:
    void say(){
        cout<<"The World is beautiful..."<<endl;
    }
};
int main(){
    // // ambiguituy 1
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}