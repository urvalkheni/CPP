#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";
    cin>>n;
    if(n>=1 && n<=26){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k>=i)cout<<" ";
        }
        for(int j=1;j<=i;j++){
           cout<<char(j+64);  
        }
        for(int j=i-1;j!=0; j--){
            
            if(j<i)cout<<char(j+64); 
                     
         }
        cout<<endl;
    }
}
    else cout<<"Please Enter Number Between 1 to 26";
    return 0;
}