#include<iostream>
using namespace std;
inline int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter Three Numbers for sum :: ";cin>>a>>b>>c;
    cout<<"The Sum of The Number is :: "<<sum(a,b,c)<<endl;
    return 0;
}