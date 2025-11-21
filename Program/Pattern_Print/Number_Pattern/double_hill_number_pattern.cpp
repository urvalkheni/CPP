#include <iostream>
using namespace std;

int main(){
    int n; 
    if(!(cin>>n) || n<=0) return 0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j) cout<<j<<' ';
        for(int s=0;s<2*(n-i);++s) cout<<"  ";
        for(int j=1;j<=i;++j) cout<<j<<' ';
        cout<<'\n';
    }
    return 0;
}
