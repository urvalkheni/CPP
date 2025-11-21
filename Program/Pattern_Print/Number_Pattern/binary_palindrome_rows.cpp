#include <iostream>
using namespace std;

int main(){
    int n; 
    if(!(cin>>n) || n<=0) return 0;
    for(int i=1;i<=n;++i){
        for(int s=0;s<n-i;++s) cout<<"  ";
        for(int p=1;p<=2*i-1;++p){
            int val = (p%2==1)?1:0;
            cout<<val<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
