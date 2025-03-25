#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n || j==n || i+j==n+1 ) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            if(i==n || j==1 || i==j ) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n || i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i+j==n+1) cout<<"* ";
            else cout<<"  ";
        }
        
        cout<<endl;
    }
    
    
    return 0;
}