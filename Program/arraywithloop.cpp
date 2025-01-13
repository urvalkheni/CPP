#include<iostream>
using namespace std;

int main(){
    int arr[] = {23,45,67,69,86,97};
    cout<<"Using For Loop the elements are :: "<<endl;
    for(int i =0;i<5;i++){
        cout<<"The element"<<i<<" is "<<arr[i]<<endl;
    }
    cout<<endl;
    int j = 0;
    cout<<"Using While Loop the elements are :: "<<endl;
    while(j!=5){
        cout<<"The element"<<j<<" is "<<arr[j]<<endl;
        j++;
    }
    cout<<endl;
    int k =0;
    cout<<"Using Do While Loop the elements are :: "<<endl;
    do{
        cout<<"The element"<<k<<" is "<<arr[k]<<endl;
        k++;
    }while(k!=5);
    return 0;
}