#include<iostream>
using namespace std;
class Complex{
    int x,y;
    public:
    Complex(){
        x = 0;
        y = 0;
    }
    Complex(int a,int b){
        x  = a;
        y = b;
    }
    Complex(int b){
        x  = 6;
        y = b;
    }
    void display(void){
        cout<<"The Complex number is :: "<<x<<" + "<<y<<"i"<<endl;
    }

};
int main(){
    Complex c1,c2(1,2),c3(4);
    c1.display();
    c2.display();
    c3.display();

    return 0;
}