#include <iostream>
using namespace std;

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    int octal[100], i = 0;

    while (decimal != 0) {
        octal[i] = decimal % 8;  // Store remainder
        decimal /= 8;
        i++;
    }

    // Print octal number in reverse order
    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << octal[j];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        decimalToOctal(decimal);
    }

    return 0;
}
