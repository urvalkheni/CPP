#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1){
                cout<<"X ";
            }
            else cout<<"  ";
    }
        cout<<endl;
    }
    return 0;
}