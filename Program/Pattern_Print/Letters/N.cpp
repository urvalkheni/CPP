#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 ||i==j||j==n)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}