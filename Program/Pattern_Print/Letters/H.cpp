#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    int mid = n / 2;
    if(mid%2==0) mid = mid + 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1|| j==n ||i==mid){
                cout<<"H ";
            }
            else cout<<"  ";
    }
        cout<<endl;
    }
    return 0;
}