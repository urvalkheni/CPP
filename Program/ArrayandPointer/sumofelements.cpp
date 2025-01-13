#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int i=0;i<10;i++){
        sum += arr[i]; 
        cout<<arr[i]<<" added to sum"<<endl;
    }
    cout<<"The Sum of The arr elements is :: "<<sum<<endl;
    return 0;
}