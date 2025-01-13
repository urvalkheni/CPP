#include<iostream>
using namespace std;

int main(){
    int arr[5] = {23,45,66,78,90};
    int *ptr = arr; // thie name means the first index is the address of whole array so don't need to use & 
    cout<<"So The Element by Pointer is "<<endl;
    cout<<"arr[0] by *ptr :: "<<*ptr<<endl;
    cout<<"arr[1] by *(ptr+1) :: "<<*(ptr+1)<<endl;
    cout<<"arr[2] by *(ptr+2) :: "<<*(ptr+2)<<endl;
    cout<<"arr[3] by *(ptr+3) :: "<<*(ptr+3)<<endl;
    cout<<"arr[4] by *(ptr+4) :: "<<*(ptr+4)<<endl;
    //little fun with the elements
    cout<<*(++ptr)<<endl;
    cout<<*(--ptr)<<endl;
    cout<<*(--ptr)<<endl; // here in output you get random garbage value cuz arr[-1] doesn't exsist so it will take any random value
    *ptr++;
    cout<<*(ptr+5)<<endl; // here also you get any random garbage value cuz arr[5] does't exsist it will only have 0 to 4  
    return 0;
}