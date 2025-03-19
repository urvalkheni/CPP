#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n|| j==1|| j==n ){
                if((i==n && j==1) || (i==n && j==n))cout<<"  ";
                else cout<<"U ";
            }
            else cout<<"  ";
    }
        cout<<endl;
    }
    return 0;
}