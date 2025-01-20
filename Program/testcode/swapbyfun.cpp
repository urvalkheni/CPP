#include<iostream>
using namespace std;
void swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int num1,num2;
    cout<<"Enter The First Number :: ";
    cin>>num1;
    cout<<"Enter The Second Number :: ";
    cin>>num2;
    cout<<"Before swap The Number 1 is "<<num1<<endl<<" The Number 2 is "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"After swap The Number 1 is "<<num1<<endl<<" The Number 2 is "<<num2<<endl;
    return 0;
}