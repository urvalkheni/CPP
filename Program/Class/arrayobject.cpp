#include<iostream>
using namespace std;
class complex{
    int real, imaginary;
    public :
    void getData(){
        cout<<"The Real part is :: "<<real<<endl;
        cout<<"The Imaginary part is :: "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real = a;
        imaginary = b;
    }

};
int main(){
    complex a;
    complex *ptr = &a;
    ptr->setData(3,6);
    ptr->getData();
    return 0;
}