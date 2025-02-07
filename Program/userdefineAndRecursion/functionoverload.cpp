#include<iostream>
using namespace std;
/*Function overloading in C++ is a feature that 
allows multiple functions to have the same name 
but different parameters (number, type, or both). 
The compiler differentiates these functions based 
on their parameter list. This helps improve code 
readability and reusability.*/
int sum(int a,int b){
    return  a+b;
}
int sum(int a, int b,int c){
    return a+b+c;
}
int volume(double r,int h){
    return ((22.0/7.0) * r * r * h);
}
int volume(int a){
    return a * a * a;
}
int main(){
    cout<<"The sum of 3 and 6 is :: "<<sum(3,6)<<endl;
    cout<<"The Sum of 3,6 and 7 is :: "<<sum(3,6,7)<<endl;
    cout<<"The Volume of the Cylinder with radius 2 and hight 10 is :: "<<volume(2,10)<<endl;
    cout<<"The Volume of the Cube with length 8 is :: "<<volume(8)<<endl;
    return 0;
}