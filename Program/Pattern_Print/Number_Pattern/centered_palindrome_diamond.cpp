#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; // upper
 for(int i=1;i<=n;++i){ for(int s=0;s<n-i;++s) cout<<"  "; for(int j=1;j<=i;++j) cout<<j<<' '; for(int j=i-1;j>=1;--j) cout<<j<<' '; cout<<'\n'; } // lower
 for(int i=n-1;i>=1;--i){ for(int s=0;s<n-i;++s) cout<<"  "; for(int j=1;j<=i;++j) cout<<j<<' '; for(int j=i-1;j>=1;--j) cout<<j<<' '; cout<<'\n'; } return 0; }
