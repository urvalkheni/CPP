// Sieve of Eratosthenes: print primes up to n
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "List primes up to: ";
    if(!(cin >> n) || n < 2) return 1;
    vector<bool> isPrime(n+1, true);
    isPrime[0]=isPrime[1]=false;
    for(int p=2;p*p<=n;++p) if(isPrime[p]){
        for(int k=p*p;k<=n;k+=p) isPrime[k]=false;
    }
    for(int i=2;i<=n;++i) if(isPrime[i]) cout << i << ' ';
    cout << '\n';
    return 0;
}
