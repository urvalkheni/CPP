#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<2) return 0; for(int i=1;i<=n;++i){ for(int j=1;j<=n;++j){ if(i==1||i==n||j==1||j==n||i==j||i+j==n+1) cout<<j%10<<' '; else cout<<"  "; } cout<<'\n'; } return 0; }
