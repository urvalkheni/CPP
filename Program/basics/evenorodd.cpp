#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number :: ";

    if (!(cin >> num)) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    if (num == 0) {
        cout << "0 is Even." << endl;
    } else if (num & 1) {
        cout << num << " is Odd." << endl;
    } else {
        cout << num << " is Even." << endl;
    }

    return 0;
}
