#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i % 2 == 1)  
            cout << "* ";
        else if (i<=((n/2)+1) && j == 1)  
            cout << "* ";
        else if (i>=((n/2)+1) && j == n)  
            cout << "* ";
        else
            cout << "  ";  
    }
    cout<<endl;
}
    return 0;
}


