#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string contant;
    ofstream uout;
    uout.open("sample2.txt");
    cout<<"Enter The contant :: ";
    getline(cin,contant);
    uout<<contant;
    uout<<"\n So this is your conatant huuuh...?";
    uout.close();
    ifstream uin;
    string st;
    uin.open("sample.txt");
    // getline(uin,st);
    // cout<<st;
    while(uin.eof()==0){
        getline(uin,st);
        cout<<st<<endl;
    }
    uin.close();

    return 0;
}