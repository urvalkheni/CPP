#include <iostream>
using namespace std;

// Function to perform basic Boolean operations
void booleanOperations(int a, int b, int c = -1) {
    cout << "\nBoolean Operations for given inputs:" << endl;
    cout << "A AND B: " << (a & b) << endl;
    cout << "A OR B: " << (a | b) << endl;
    cout << "A XOR B: " << (a ^ b) << endl;
    cout << "NOT A: " << (!a) << " | NOT B: " << (!b);
    cout << " | A NAND B: " << !(a & b) << endl;
    cout << "A NOR B: " << !(a | b) << endl;

    // If c is provided, perform three-variable operations
    if (c != -1) {
        cout << "A AND B AND C: " << (a & b & c) << endl;
        cout << "A OR B OR C: " << (a | b | c) << endl;
        cout << "A XOR B XOR C: " << (a ^ b ^ c) << endl;
    }
}

int main() {
    int choice, a, b, c;
    cout << "Boolean Algebra Calculator" << endl;
    cout << "1. Two-variable operations\n2. Three-variable operations\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter values of A and B (0 or 1): ";
        cin >> a >> b;
        booleanOperations(a, b);
    } else if (choice == 2) {
        cout << "Enter values of A, B, and C (0 or 1): ";
        cin >> a >> b >> c;
        booleanOperations(a, b, c);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
