#include <iostream>
using namespace std;

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int num) {
    if (num == 0) {
        cout << "Hexadecimal: 0" << endl;
        return;
    }

    string hexValue = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
                       'A', 'B', 'C', 'D', 'E', 'F'};

    while (num > 0) {
        int remainder = num % 16;
        hexValue = hexChars[remainder] + hexValue;
        num /= 16;
    }

    cout << "Hexadecimal: " << hexValue << endl;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    if (!(cin >> decimalNumber)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    if (decimalNumber < 0) {
        cout << "Error: Please enter a positive number!" << endl;
        return 1;
    } else if (decimalNumber == 0) {
        cout << "Hexadecimal: 0" << endl;
    } else {
        decimalToHexadecimal(decimalNumber);
    }

    return 0;
}
