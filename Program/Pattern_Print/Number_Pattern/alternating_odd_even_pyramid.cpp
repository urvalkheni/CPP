#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; for(int i=1;i<=n;++i){ for(int s=0;s<n-i;++s) cout<<"  "; int start = (i%2?1:2); for(int j=0;j<i;++j) cout<<(start+2*j)<<' '; for(int j=i-2;j>=0;--j) cout<<(start+2*j)<<' '; cout<<'\n'; } return 0; }
