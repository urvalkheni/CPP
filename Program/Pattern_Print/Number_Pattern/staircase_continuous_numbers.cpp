#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; long long val=1; for(int i=1;i<=n;++i){ for(int j=1;j<=i;++j){ cout<<val++<<' '; } cout<<'\n'; } return 0; }
