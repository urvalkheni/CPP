// Generate first n Catalan numbers using dynamic programming
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Generate first n Catalan numbers (n <= 30): ";
    if(!(cin >> n) || n <= 0 || n > 30) return 1;
    
    vector<long long> cat(n+1, 0);
    cat[0] = cat[1] = 1;
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<i; j++){
            cat[i] += cat[j] * cat[i-1-j];
        }
    }
    
    cout << "Catalan numbers:\n";
    for(int i=0; i<=n; i++){
        cout << "C(" << i << ") = " << cat[i] << '\n';
    }
    return 0;
}
