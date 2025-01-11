#include<iostream>
using namespace std;
int main(){
    int option;
    cout<<"Enter The Number :: ";
    cin>>option;
    switch(option){
        case 1:
        cout<<"Hello Guys...!"<<endl;
        break;
        case 2:
        cout<<"Hyyy Bruhhh...!"<<endl;
        default:
        cout<<"(INVALID INPUT...!) select between 1 or 2"<<endl;
    }
     return 0;
}