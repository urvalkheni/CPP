#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter The First Number :: ";
    if (!(cin >> num1)) {
        cout << "Invalid input for first number." << endl;
        return 1;
    }

    cout << "Enter The Second Number :: ";
    if (!(cin >> num2)) {
        cout << "Invalid input for second number." << endl;
        return 1;
    }
    cout<<"Before Swapping you first number is "<<num1<<" and second number is "<<num2<<endl;
    if (num1 != num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
    cout<<"After Swapping you first number is "<<num1<<" and second number is "<<num2<<endl;
    return 0;
}