#include<iostream>
using namespace std;

int main(){
    long long num;
    int sum=0;
    cout<<"Enter Any Number :: ";
    cin>>num;
    while(num!=0){
        sum = sum + num % 10;
        num /=10;
    }
    cout<<"So Sum of the Number you Entered is :: "<<sum<<endl;
    return 0;
}