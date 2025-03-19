#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";
    cin>>n;
    if(n>=1 && n<=20){
    int a;
    for(int i=1;i<=n;i++){
        a=i;
        for(int k=1;k<=n;k++){
            if(k>=i)cout<<" ";
        }
        for(int j=1;j<=i;j++){
           cout<<a;
            a++;
        }
        a -= 2;
        for(int j=1;j<i;j++){
            cout<<a;
             a--;
         }
        cout<<endl;
    }}
    else cout<<"Please Enter Number Between 1 to 20";
    return 0;
}