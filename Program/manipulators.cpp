#include<iostream>
#include<iomanip>// with this we can use manipilators
using namespace std;
int main(){
    int a = 3,b=78,c=1233;
    cout<<"The Vlaue of without a is :: "<<a<<endl;
    cout<<"The Vlaue of without b is :: "<<b<<endl;
    cout<<"The Vlaue of without c is :: "<<c<<endl;
    cout<<"The Vlaue of a is :: "<<setw(4)<<a<<endl;
    cout<<"The Vlaue of b is :: "<<setw(4)<<b<<endl;
    cout<<"The Vlaue of c is :: "<<setw(4)<<c<<endl;
    // setw increase width which you enter
    return 0;
}
