#include<iostream>
#include<fstream>
/*
The Ueful classes for working with files in c++ are :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived form fstreambase

In order work with files in C++, you will have to open it. Primarily there are 2 ways to open a file ::
1. using the Constructor
2. Using the member function open() of the class

*/
using namespace std;

int main(){
    string st = "Urval Kheni 777";
    string st2;
    //Opening Files using constructor and writing it
    ofstream out("sample.txt"); // write operation
    out<<st; 
    //Opening Files using Construcor and reading form it
    ifstream in("sample2.txt"); // read operation
   // in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}