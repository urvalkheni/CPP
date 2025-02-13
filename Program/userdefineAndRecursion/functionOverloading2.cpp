#include<iostream>
using namespace std;
float divide(int a,int b){
    if(a>b){
        return ((float)a/b);
    }
    else{
        return ((float)b/a);
    }
}
// void divide(int n);
// float divide(float a,float b,float c);
int main(){
    int num1,num2,num3;
    float num4,num5,num6;
    cout<<"This Is Function Overloading Program"<<endl;
    cout<<"Enter Two Number For Divide Function :: ";cin>>num1>>num2;
    cout<<"The Division of Num1 and Num2 is :: "<<divide(num1,num2)<<endl;
    // cout<<"Enter one Number for Divide Function :: ";cin>>num3;
    // cout<<"The Number is Prime or not get by divide function :: ";divide(num3);
    // cout<<"Enter Three Number To Divide Function :: ";cin>>num4>>num5>>num6;
    // cout<<"The Average Of Three Number by Divide Function is "<<divide(num4,num5,num6);
    
    return 0;
}