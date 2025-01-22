#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
// this will not cnage the value of your number cuz it's use call by value
// void swap(int a,int b){
//     int temp = b;
//     b = a ;
//     a = temp;
// }
void swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
     int num1,num2;
    cout<<"Enter The First Number :: ";cin>>num1;
    cout<<"Enter The Second Number :: ";cin>>num2;
    cout<<"The Sum of Number 1 and Number 2 is :: "<<sum(num1,num2)<<endl;
    cout<<"The Value of Number 1 is :: "<<num1<<" and The Value of Number 2 is :: "<<num2<<endl;
    swap(num1,num2);
    cout<<"The Value of Number 1 is :: "<<num1<<" and The Value of Number 2 is :: "<<num2<<endl;    
    return 0;
}