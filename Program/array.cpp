#include<iostream>
using namespace std;

int main(){
    //these are the two ways to decalre and intilize the array
    int arr1[] = {90,69,43,23,16};
    int arr2[4];
    arr2[0] = 3435;
    arr2[1] = 232 ;
    arr2[2] = 777;
    arr2[3] = 999;
    cout<<"The Values of Array 1 is"<<endl;
    cout<<"arr1[0] :: "<<arr1[0]<<endl;
    cout<<"arr1[1] :: "<<arr1[1]<<endl;
    cout<<"arr1[2] :: "<<arr1[2]<<endl;
    cout<<"arr1[3] :: "<<arr1[3]<<endl;
    cout<<"arr1[4] :: "<<arr1[4]<<endl;
    cout<<"The Values of Array 2 is"<<endl;
    cout<<"arr2[0] :: "<<arr2[0]<<endl;
    cout<<"arr2[1] :: "<<arr2[1]<<endl;
    cout<<"arr2[2] :: "<<arr2[2]<<endl;
    cout<<"arr2[3] :: "<<arr2[3]<<endl;
    
    return 0;
}