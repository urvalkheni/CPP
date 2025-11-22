#include <iostream>
using namespace std;
int main(){ int r,c,d; if(!(cin>>r>>c>>d)||r<=0||c<=0) return 0; int start=1; for(int i=0;i<r;++i){ int val=start+i*d; for(int j=0;j<c;++j){ cout<<val+j*d<<' '; } cout<<'\n'; } return 0; }
