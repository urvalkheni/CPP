// Compute GCD and LCM of two positive integers
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){ return b==0? a : gcd(b, a%b); }

int main(){
    int a,b; cout << "Enter two positive integers: ";
    if(!(cin >> a >> b) || a<=0 || b<=0) return 1;
    int g = gcd(a,b);
    long long l = (1LL*a*b)/g;
    cout << "GCD="<<g<<" LCM="<<l<<'\n';
    return 0;
}
