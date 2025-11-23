// Build an n x n Ulam-style spiral and mark primes with '*'
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    if(x%2==0) return x==2;
    for(int i=3;i*i<=x;i+=2) if(x%i==0) return false;
    return true;
}

int main(){
    int n;
    cout << "Enter odd dimension n for spiral (e.g. 5,7): ";
    if(!(cin >> n) || n<=0 || n%2==0) return 1;
    vector<vector<int>> a(n, vector<int>(n));
    int x = n/2, y = n/2;
    int cur = 1;
    a[x][y] = cur++;
    for(int step=1; cur<=n*n; step+=2){
        // move right 1
        for(int i=0;i<step && cur<=n*n;++i) y++ , a[x][y]=cur++;
        // up step
        for(int i=0;i<step && cur<=n*n;++i) x-- , a[x][y]=cur++;
        step++;
        // left step
        for(int i=0;i<step && cur<=n*n;++i) y-- , a[x][y]=cur++;
        // down step
        for(int i=0;i<step && cur<=n*n;++i) x++ , a[x][y]=cur++;
    }
    // print primes as '*' else ' '
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout << (isPrime(a[i][j]) ? "* " : ". ");
        }
        cout << '\n';
    }
    return 0;
}
