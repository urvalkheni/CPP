#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
    void setData(int value){
        data = value;
    }
    friend void add(X o1,Y o2);
};
class Y{
    int num;
    public:
    void setData(int value){
        num = value;
    }
    friend void add(X o1,Y o2);
};
void add(X o1,Y o2){
    cout<<"summing data of X and Y objects given me :: "<< o1.data + o2.num;
}
int main(){
    X a;
    a.setData(2);
    Y b;
    b.setData(5);
    add(a,b);

    return 0;
}