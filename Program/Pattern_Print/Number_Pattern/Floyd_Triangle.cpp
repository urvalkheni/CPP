#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";
    cin>>n;
    int static a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){cout<<a<<" ";
            a++;}
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}