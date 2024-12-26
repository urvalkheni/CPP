#include<iostream>
using namespace std;
//Here glo is global variable and it is accesseble anywhere in the whole code
int glo = 7;
int main(){
    //Here all are local Variables which is locally declared in the main function which is accesseble only in main function
    int a = 3;
    float b = 6;
    char c = 'U';
    bool condition = true;
    cout <<"The Value of a is "<<a;
    cout <<"\nThe Value of b is "<<b;
    cout <<"\nThe Value of c is "<<c;
    cout <<"\nThe condition is "<<condition;
    cout <<"\nThe Value of glo is "<<glo;
    return 0;
}