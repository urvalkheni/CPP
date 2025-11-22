#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; for(int i=1;i<=n;++i){ for(int s=0;s<n-i;++s) cout<<"  "; for(int j=1;j<=2*i-1;++j){ if(j==1||j==2*i-1||i==n) cout<<i%10<<' '; else cout<<"  "; } cout<<'\n'; } for(int i=n-1;i>=1;--i){ for(int s=0;s<n-i;++s) cout<<"  "; for(int j=1;j<=2*i-1;++j){ if(j==1||j==2*i-1||i==n) cout<<i%10<<' '; else cout<<"  "; } cout<<'\n'; } return 0; }
