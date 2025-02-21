#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter Three Numbers :: "; 
    cin >> num1 >> num2 >> num3;

    cout << "Before swap:" << endl;
    cout << "Number 1 :: " << num1 << endl;
    cout << "Number 2 :: " << num2 << endl;
    cout << "Number 3 :: " << num3 << endl;

    // Swapping without using a temporary variable
    num1 = num1 + num2 + num3;
    num2 = num1 - (num2 + num3);
    num3 = num1 - (num2 + num3);
    num1 = num1 - (num2 + num3);

    cout << "After swap:" << endl;
    cout << "Number 1 :: " << num1 << endl;
    cout << "Number 2 :: " << num2 << endl;
    cout << "Number 3 :: " << num3 << endl;

    return 0;
}
