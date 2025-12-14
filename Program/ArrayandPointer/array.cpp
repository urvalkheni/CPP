#include<iostream>
using namespace std;

int main(){
    cout << "=== Array Demonstration ==="<<endl<<endl;
    
    //these are the two ways to declare and initialize the array
    int arr1[] = {90,69,43,23,16};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[4];
    arr2[0] = 3435;
    arr2[1] = 232;
    arr2[2] = 777;
    arr2[3] = 999;
    int size2 = 4;
    
    // Display array 1 using loop
    cout<<"The Values of Array 1 (size="<<size1<<"):"<<endl;
    for(int i = 0; i < size1; i++) {
        cout<<"arr1["<<i<<"] :: "<<arr1[i]<<endl;
    }
    
    // Display array 2 using loop
    cout<<"\nThe Values of Array 2 (size="<<size2<<"):"<<endl;
    for(int i = 0; i < size2; i++) {
        cout<<"arr2["<<i<<"] :: "<<arr2[i]<<endl;
    }
    
    // Find max, min, and sum
    int max1 = arr1[0], min1 = arr1[0], sum1 = 0;
    for(int i = 0; i < size1; i++) {
        if(arr1[i] > max1) max1 = arr1[i];
        if(arr1[i] < min1) min1 = arr1[i];
        sum1 += arr1[i];
    }
    
    cout<<"\n=== Array 1 Statistics ==="<<endl;
    cout<<"Max: "<<max1<<" | Min: "<<min1<<" | Sum: "<<sum1<<" | Avg: "<<(float)sum1/size1<<endl;
    
    return 0;
}