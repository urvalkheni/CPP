#include<iostream>
using namespace std;

int main(){
     for(int i=1;i<=10;i++){
        if(i==5) continue; // with the use of continue when i=5 it will skip the particuler part of the loop
        cout<<i<<endl;
    }
    return 0;
}