#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    int num = fibo(n-1) + fibo(n-2);
    return num;
}
int main(){
     int n;
    cout<<"Enter The Number :: ";
    cin>>n;
    cout<<"nth fibonaci term is :: "<<fibo(n);
    return 0;
}
