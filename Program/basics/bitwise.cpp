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
    cin >> a >> b;

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
