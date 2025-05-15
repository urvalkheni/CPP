#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream uout("sample.txt");
    string name;
    cout<<"Enter Your name :: ";
    getline(cin,name);
    uout<<"My name is " + name;

    uout.close();

    ifstream uin("sample.txt");
    string yourname;
    getline(uin,yourname);
    cout<<yourname;
    uin.close();
    return 0;
}