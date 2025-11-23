// Print prime factorization of a positive integer
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n; cout << "Enter integer (>1) to factor: ";
    if(!(cin >> n) || n<=1) return 1;
    for(long long p=2;p*p<=n;++p){
        while(n%p==0){ cout << p << ' '; n/=p; }
    }
    if(n>1) cout << n;
    cout << '\n';
    return 0;
}
