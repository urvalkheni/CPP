#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
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

complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setNum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setNum(1,2);
    c1.display();
    c2.setNum(3,4);
    c2.display();

    sum = sumComplex(c1,c2);
    sum.display();
    return 0;
}