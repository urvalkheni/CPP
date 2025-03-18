#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :: ";cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j<<" ";
    //         // if(i==1 || j == ((n/2)+1))cout<<"* ";
    //         // else cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // cout<<j<<" ";
            if(i==1 || (i==n && j<=(n/2 +1)) || j == (n/2 +1) || (i==n-1&&j==1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}