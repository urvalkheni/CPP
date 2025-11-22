#include <iostream>
using namespace std;
int main(){ int n; if(!(cin>>n)||n<2) return 0; int size=2*n-1; for(int i=0;i<size;++i){ for(int j=0;j<size;++j){ int layer=min(min(i,size-1-i),min(j,size-1-j)); if(layer==0||layer==n-1) cout<<(n-layer)%10<<' '; else cout<<"  "; } cout<<'\n'; } return 0; }
