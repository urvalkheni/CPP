#include <iostream>
using namespace std;

int main(){
    int n; 
    if(!(cin>>n) || n<=0) return 0;
    for(int i=1;i<=n;++i){
        int val = (i%2); // start with 1 on odd rows, 0 on even
        for(int j=1;j<=i;++j){
            cout<<val<<' ';
            val ^= 1;
        }
        cout<<'\n';
    }
    return 0;
}
