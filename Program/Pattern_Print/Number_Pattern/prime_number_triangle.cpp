#include <iostream>
using namespace std;
bool isPrime(int x){ if(x<2) return false; for(int i=2;i*i<=x;++i) if(x%i==0) return false; return true; }
int main(){ int n; if(!(cin>>n)||n<=0) return 0; int num=2; for(int i=1;i<=n;++i){ for(int j=1;j<=i;++j){ while(!isPrime(num)) ++num; cout<<num<<' '; ++num; } cout<<'\n'; } return 0; }
