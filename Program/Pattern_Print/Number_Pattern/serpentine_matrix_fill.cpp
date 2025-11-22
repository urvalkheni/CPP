#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; int val=1; for(int i=0;i<n;++i){ if(i%2==0){ for(int j=0;j<n;++j) cout<<val++<<' '; } else { int start=val+n-1; for(int j=0;j<n;++j) cout<<(start-j)<<' '; val+=n; } cout<<'\n'; } return 0; }
