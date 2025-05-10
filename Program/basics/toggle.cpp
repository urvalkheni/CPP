#include <iostream>
using namespace std;

void toggleBit(int &num, int position) {
    // XOR operation to toggle the bit at the given position
    num ^= (1 << position);
}

int main() {
    int num, position;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the bit position to toggle (starting from 0): ";
    cin >> position;

    // Show the number before toggling
    cout << "Number before toggling: " << num << " (Binary: ";
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << ")" << endl;

    // Toggle the specified bit
    toggleBit(num, position);

    // Show the number after toggling
    cout << "Number after toggling: " << num << " (Binary: ";
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << ")" << endl;

    return 0;
}
