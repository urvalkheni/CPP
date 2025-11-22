#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; long long C[101][101]={0}; for(int i=0;i<=n;++i){ C[i][0]=C[i][i]=1; for(int j=1;j<i;++j) C[i][j]=C[i-1][j-1]+C[i-1][j]; }
 for(int i=n;i>=0;--i){ for(int s=0;s<n-i;++s) cout<<"  "; for(int j=0;j<=i;++j) cout<<C[i][j]<<' '; cout<<'\n'; } return 0; }
