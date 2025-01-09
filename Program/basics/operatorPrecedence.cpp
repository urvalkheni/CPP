#include<iostream>
using namespace std;
int main(){
    int a=3,b=10;
    int c;
    c = ((a*b-5)+ a++ + b%a);
    cout<<"The Value of c is :: "<<c<<endl;
    
    return 0;
}