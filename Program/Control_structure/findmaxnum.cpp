#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter The First Number :: ";
    cin >> num1;
    cout << "Enter The Second Number :: ";
    cin >> num2;
    cout << "Enter The Third Number :: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "The Maximum Number is: " << num1 << " between " << num1 << ", " << num2 << " and " << num3 << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "The Maximum Number is: " << num2 << " between " << num1 << ", " << num2 << " and " << num3 << endl;
    } else if(num3 > num1 && num2 < num3){
        cout << "The Maximum Number is: " << num3 << " between " << num1 << ", " << num2 << " and " << num3 << endl;
    } else {
        cout<<"All three numbers are equal."<<endl;
    }

    return 0;
}
