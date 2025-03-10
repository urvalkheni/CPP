#include<iostream>
#include<string>
using namespace std;
// OOPs - Classes and Objects

// C++ --> Intially Called --> C with classes by Strousstroup
// Class --> extension of structures (in C)
// structures had limitaions
//            - members are public
//            - no methods
// classes --> structures + more
// classes --> can have methods and propeties
// classes --> can make few members as private & few as public
// structures in c++ are typedefed
// you can decalre objects along with the class declaration
/* class Employee{
// class defination
 } urval,heet,krish; */
  // Nesting of member functions
  class binary{
    string s;
    public:
     void read(void);
     void chk_bin(void);
     void ones(void);
     void display(void);
  };
  void binary :: read(void){
    cout<<"Enter a Binary Number :: ";
    cin>>s;
  }
  void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }   
    cout<<"The Number is Binary"<<endl; 
  }
  void binary :: ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
       else {
            s.at(i)='0';
        }
    }    
  }
  void binary :: display (void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
  }
int main(){
    binary b;
    
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}