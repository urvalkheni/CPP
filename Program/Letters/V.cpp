#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*2;j++){
            if(i==j)cout<<"*";
            else if(i+j==(n*2)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}