#include<iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    int data3;
    public :
    Simple (int a=8,int b=9,int c=10){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display();
};
void Simple :: display(){
    cout<<"The Data1 is :: "<<data1<<" and Data2 is :: "<<data2<<" and Data3 is :: "<<data3<<endl;
}
int main(){
    Simple s = Simple(3,2,1);
    s.display();
    return 0;
}