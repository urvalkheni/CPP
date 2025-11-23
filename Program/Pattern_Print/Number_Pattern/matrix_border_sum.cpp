// Compute sum of border elements of a matrix
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cout << "Enter rows and columns (n m): ";
    if(!(cin >> n >> m) || n<=0 || m<=0) return 1;
    vector<vector<int>> a(n, vector<int>(m));
    cout << "Enter matrix elements:\n";
    for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin >> a[i][j];
    long long sum = 0;
    for(int j=0;j<m;++j) sum += a[0][j];
    if(n>1) for(int j=0;j<m;++j) sum += a[n-1][j];
    for(int i=1;i<n-1;++i){
        sum += a[i][0];
        if(m>1) sum += a[i][m-1];
    }
    cout << "Border sum = " << sum << '\n';
    return 0;
}
