#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0 || a==1){
        // here we added this base case because the 0! and 1! is 1.
        return 1;
    }
    return a * factorial(a-1);
}
int main(){
    int n;
    cout<<"Enter The Number to Find Factorial :: ";cin>>n;
    cout<<"The Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}