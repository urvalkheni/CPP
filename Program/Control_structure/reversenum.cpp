#include<iostream>
using namespace std;

int main(){
    long long num,reversenum=0;
    cout<<"Enter Any Number :: ";
    cin>>num;
    while(num!=0){
        reversenum = (reversenum *10) + (num % 10);
        num /=10;
    }
    cout<<"So Sum of the Number you Entered is :: "<<reversenum<<endl;
    return 0;
}