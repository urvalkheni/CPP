#include<iostream>
using namespace std;
class complex;
class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumRealComplex(complex,complex);
    int sumComComplex(complex,complex);
};
class complex{
    int a;
    int b;
    friend class Calculator; 
    // friend int Calculator :: sumRealComplex(complex,complex);
    // friend int Calculator :: sumComComplex(complex,complex);
    public :
     void setNum(int n1,int n2){
        a = n1;
        b = n2;
     }
     friend complex sumComplex(complex o1,complex o2);
    void display(){
        cout<<"The Complex Number is :: "<<a<<" + "<<b<<"i"<<endl;

    }
};
int Calculator ::  sumRealComplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
int Calculator ::  sumComComplex(complex o1,complex o2){
    return (o1.b+o2.b);
}
int main(){
    complex o1,o2;
    o1.setNum(1,2);
    o2.setNum(3,4);
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The Sum of the Real part of o1 and o2 is :: "<<res<<endl;
    int resc = calc.sumComComplex(o1,o2);
    cout<<"The Sum of the Complex part of o1 and o2 is :: "<<resc<<endl;
    return 0;
}