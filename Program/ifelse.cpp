#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age :: ";
    cin>>age;
    if(age<18) cout<<"You are Not come to party....!";
    else if(age==18) cout<<"You are a kid and you will get a kid pass to get to party";
    else cout<<"You can Come To The Party";
    return 0;
}