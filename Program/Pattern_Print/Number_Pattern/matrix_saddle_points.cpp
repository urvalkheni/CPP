// Find saddle points: elements that are minimum in their row and maximum in their column
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
    for(int i=0;i<n;++i){
        int rowMin = a[i][0]; int colIdx = 0;
        for(int j=1;j<m;++j) if(a[i][j] < rowMin){ rowMin = a[i][j]; colIdx = j; }
        bool isSaddle = true;
        for(int r=0;r<n;++r) if(a[r][colIdx] > rowMin) { isSaddle = false; break; }
        if(isSaddle) cout << "Saddle point at ("<<i<<","<<colIdx<<") = "<<rowMin<<"\n";
    }
    return 0;
}
