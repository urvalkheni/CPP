#include <iostream>
#include <bitset>

using namespace std;

void printBinary(int num) {
    cout << bitset<8>(num) << " (" << num << ")";
}

int main() {
    int a, b;

    // Taking input
    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    if (a < 0 || b < 0) {
        cout << "Bitwise operations work best with non-negative numbers." << endl;
    }

    // Bitwise AND
    int andResult = a & b;
    cout << "\nBitwise AND (&) Result: ";
    printBinary(a);
    cout << " & ";
    printBinary(b);
    cout << " = ";
    printBinary(andResult);
    
    // Bitwise OR
    int orResult = a | b;
    cout << "\nBitwise OR (|) Result:  ";
    printBinary(a);
    cout << " | ";
    printBinary(b);
    cout << " = ";
    printBinary(orResult);

    return 0;
}
