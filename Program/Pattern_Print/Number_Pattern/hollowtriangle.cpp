#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    cout<<endl<<"Upper Left Hollow::"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || i==1 || i+j==n+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"Lower Left Hollow::"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || i==n || i==j) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"Lower Right Hollow::"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n || i==n || i+j==n+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"Upper Right Hollow::"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==n || i==j) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}