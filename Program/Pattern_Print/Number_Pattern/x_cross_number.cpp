#include <iostream>
using namespace std;

int main(){
    int n; 
    if(!(cin>>n) || n<=0) return 0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(i==j || i+j==n+1) cout<<(i%10)<<' ';
            else cout<<"  ";
        }
        cout<<'\n';
    }
    return 0;
}
