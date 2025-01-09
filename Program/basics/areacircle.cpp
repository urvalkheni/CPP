#include<iostream>
using namespace std;
#define PI (22.0/7.0)
int main(){
    int radius;
    float area;
    cout<<"Enter The Radius of Circle :: ";
    cin>>radius;
    area = PI * radius * radius;
    cout<<"The Area of the circle is :: "<<area<<endl;
    return 0;
}