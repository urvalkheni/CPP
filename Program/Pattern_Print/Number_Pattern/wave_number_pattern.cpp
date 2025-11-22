#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<=0) return 0; for(int i=1;i<=3;++i){ for(int j=1;j<=n;++j){ if(i==2 && j%2==0) cout<<j%10<<' '; else if((i+j)%4==0) cout<<j%10<<' '; else cout<<"  "; } cout<<'\n'; } return 0; }
