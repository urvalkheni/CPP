#include<iostream>
using namespace std;
int power(int a,int b){
    int result=1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}
int main(){
    int base,exponent;
    cout<<"Enter The Base :: ";cin>>base;
    cout<<"Enter The Exponent :: ";cin>>exponent;
    cout<<"The Power of Base "<<base<<" and Exponent "<<exponent<<" is :: "<<power(base,exponent)<<endl;
    return 0;
}