#include<iostream>
using namespace std;

int main(){
    long long num; // we taking long long data type cuz we don't know how large the value is
    int length=0,i;
    cout<<"Enter Any Number You Like :: ";
    cin>>num;
    while(num!=0){
        num /=10;
        length++;
    }
    cout<<"So Length of the Number you Entered is :: "<<length<<endl;
    return 0;
}