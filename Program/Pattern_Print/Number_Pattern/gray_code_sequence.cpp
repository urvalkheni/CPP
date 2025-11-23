// Generate n-bit Gray code sequence
#include <iostream>
#include <vector>
using namespace std;

vector<int> gray(int n){
    vector<int> res(1<<n);
    for(int i=0;i<(1<<n);++i) res[i] = i ^ (i>>1);
    return res;
}

int main(){
    int n;
    cout << "Enter number of bits for Gray code (1-16): ";
    if(!(cin >> n) || n<=0 || n>16) return 1;
    auto g = gray(n);
    for(int v: g) {
        for(int b=n-1;b>=0;--b) cout << ((v>>b)&1);
        cout << '\n';
    }
    return 0;
}
