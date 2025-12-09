#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter Two Numbers :: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    cout << "Before swap Number 1 is  :: " << num1 << endl << "Before swap Number 2 is :: " << num2 << endl;

    if (num1 != num2) {
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }

    cout << "After swap Number 1 is  :: " << num1 << endl << "After swap Number 2 is :: " << num2 << endl;
    return 0;
}