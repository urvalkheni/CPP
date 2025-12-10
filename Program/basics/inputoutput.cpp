#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter The Number 1 :: "; // here << is Insertion Operator
    if (!(cin>>num1)) {  // here >> is Extraction Operator
        cout<<"Invalid input for number 1."<<endl;
        return 1;
    }
    cout<<"Enter The Number 2 :: "; // here << is Insertion Operator
    if (!(cin>>num2)) {  // here >> is Extraction Operator
        cout<<"Invalid input for number 2."<<endl;
        return 1;
    }
    cout<<"So the sum is :: " << num1+num2<<endl;
    return 0;
}