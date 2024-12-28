#include<iostream>
int main(){
    int a = 5, b = 2;
    //Following are arithmetic operators //
    //you can also use cout and endl without std:: just by "using namesapce std" //
    std::cout<<"Following are arithmetic operators"<<std::endl;
    std::cout <<"The sum of a and b is :: "<<a+b <<std::endl;
    std::cout <<"The subtraction of a and b is :: "<<a-b <<std::endl;
    std::cout <<"The multiplication a and b is :: "<<a*b <<std::endl;
    std::cout <<"The division of a and b is :: "<<a/b <<std::endl;
    std::cout <<"The modlues of a and b is :: "<<a%b <<std::endl<<std::endl;
    //Following are assigment operator //
    // int var =3;
    //following are comparison opereator//
    std::cout<<"Following are comparison opereator"<<std::endl;
    std::cout <<"The sum of a==b is :: "<<(a==b )<<std::endl;
    std::cout <<"The sum of a<b is :: "<<(a<=b )<<std::endl;
    std::cout <<"The sum of a>b is :: "<<(a>b )<<std::endl;
    std::cout <<"The sum of a<=b is :: "<<(a<=b )<<std::endl;
    std::cout <<"The sum of a<=b is :: "<<(a>=b )<<std::endl;
    std::cout <<"The sum of a!=b is :: "<<(a!=b )<<std::endl<<std::endl;
   //following are logical opereator//
   std::cout<<"Foloowing are logical opereator"<<std::endl;
    std::cout <<"The answer of ((a==b) && (a<b)) is :: "<<((a==b) && (a<b))<<std::endl;
    std::cout <<"The answer of ((a==b) || (a>b)) is :: "<<((a==b) || (a>b))<<std::endl;
    std::cout <<"The answer of (!(a==b)) is :: "<<(!(a==b))<<std::endl;




}