#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
        if(i==7) break; // with the use of break when i=7 it will stop the loop
    }
    return 0;
}