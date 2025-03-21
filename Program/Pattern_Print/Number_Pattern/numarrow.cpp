#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n+1)cout<<i<<" ";
        }
        for(int j=n-1;j>=1;j--){
            if(i>j) cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
1
2 1
3 2 1
4 3 2 1



*/