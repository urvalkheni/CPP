// Fill an n x m matrix in snake (boustrophedon) pattern and print
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cout << "Enter rows and columns (n m): ";
    if(!(cin >> n >> m) || n<=0 || m<=0) return 1;
    vector<vector<int>> a(n, vector<int>(m));
    int val = 1;
    for(int i=0;i<n;++i){
        if(i%2==0) for(int j=0;j<m;++j) a[i][j]=val++;
        else for(int j=m-1;j>=0;--j) a[i][j]=val++;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cout << a[i][j] << '\t';
        cout << '\n';
    }
    return 0;
}
