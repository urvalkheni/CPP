#include <iostream>
using namespace std;

int main(){
    int n; 
    if(!(cin>>n) || n<=0) return 0;
    // upper wings
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j) cout<<j%10<<' ';
        for(int s=0;s<2*(n-i);++s) cout<<"  ";
        for(int j=i;j>=1;--j) cout<<j%10<<' ';
        cout<<'\n';
    }
    // lower wings
    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;++j) cout<<j%10<<' ';
        for(int s=0;s<2*(n-i);++s) cout<<"  ";
        for(int j=i;j>=1;--j) cout<<j%10<<' ';
        cout<<'\n';
    }
    return 0;
}
