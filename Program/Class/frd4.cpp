#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public :
    int data(int a){
        val = a;
    }
    void display(void){
        cout<<"The Frist Obj is :: "<<val<<endl;
    }
    friend void exchnage(c1 &x,c2 &y);
};
class c2{
    int val2;
    public :
    int data(int a){
        val2 = a;
    }
    void display(void){
        cout<<"The Second Obj is :: "<<val2<<endl;
    }
    friend void exchnage(c1 &x,c2 &y);
};
void exchnage(c1 &x, c2 &y){
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.data(3);
    oc2.data(5);
    oc1.display();
    oc2.display();
    exchnage(oc1,oc2);
    oc1.display();
    oc2.display();
    return 0;
}