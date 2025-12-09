#include <iostream>
using namespace std;

void toggleBit(int &num, int position) {
    // XOR operation to toggle the bit at the given position
    num ^= (1 << position);
}

int main() {
    int num, position;

    cout << "Enter a number: ";
    if (!(cin >> num)) {
        cout << "Invalid number input." << endl;
        return 1;
    }

    cout << "Enter the bit position to toggle (starting from 0): ";
    if (!(cin >> position)) {
        cout << "Invalid position input." << endl;
        return 1;
    }

    if (position < 0 || position >= 31) {
        cout << "Bit position must be between 0 and 30." << endl;
        return 1;
    }

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
