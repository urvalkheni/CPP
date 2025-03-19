#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(((i==1 || i==n-1 )&& j!=n) || ((j==1 || j==n-1) && i!=n) || (i==j && i>=(n/2)+1)){
                
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}