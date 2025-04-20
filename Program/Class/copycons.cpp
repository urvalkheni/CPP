#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        // when no copy constructor is found copiler supplies its own copy constructor 
        Number(Number &obj){
            cout<<"Copy Called"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The Number for this object is :: "<<a<<endl;
        }

};
int main(){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    //z1 resemble z or x or y
    
    return 0;
}