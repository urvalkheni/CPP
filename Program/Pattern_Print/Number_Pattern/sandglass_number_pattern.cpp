#include <iostream>
using namespace std;

int main(){
    int n; 
    if(!(cin>>n) || n<=0) return 0;
    // upper inverted triangle
    for(int i=n;i>=1;--i){
        for(int s=0;s<n-i;++s) cout<<"  ";
        for(int j=1;j<=2*i-1;++j) cout<<i%10<<' ';
        cout<<'\n';
    }
    // lower triangle
    for(int i=2;i<=n;++i){
        for(int s=0;s<n-i;++s) cout<<"  ";
        for(int j=1;j<=2*i-1;++j) cout<<i%10<<' ';
        cout<<'\n';
    }
    return 0;
}
