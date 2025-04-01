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
class Binary{
    string s;
    void chk_bin(void);
    public :
    void read(void);
    void ones(void);
    void display(void);

};
void Binary :: read(void){
     cout<<"Enter a Binary Number :: ";
     cin>>s;
}
void Binary :: chk_bin(void){
     for(int i=0;i<s.length();i++){
      if(s.at(i) != '0' && s.at(i) !='1') cout<<"Incorrect Binary Format"<<endl;
     }
}
void Binary :: ones(void){
  for(int i=0;i<s.length();i++){
    if(s.at(i) == '0'){
      s.at(i) = '1';
    }
    else if(s.at(i) == '1'){
      s.at(i) = '0';
    } 
   }
}
void Binary :: display(void){
  cout<<"Displaying Your Binary number :: ";
  for(int i=0;i<s.length();i++){
    cout<<s.at(i); 
}
cout<<endl;
}
int main(){
    Binary b;
    b.read();
    // b.chk_bin(); can't use directly
    b.display();
    b.ones();
    b.display();
  return 0;
}