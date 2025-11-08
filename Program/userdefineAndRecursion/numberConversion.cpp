#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Enhanced Number Conversion with Recursion

// Function to convert decimal to binary
void decimalToBinary(int n) {
    if (n == 0) return;
    decimalToBinary(n / 2);
    cout << n % 2;
}

// Function to convert decimal to octal
void decimalToOctal(int n) {
    if (n == 0) return;
    decimalToOctal(n / 8);
    cout << n % 8;
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int n) {
    if (n == 0) return;
    decimalToHexadecimal(n / 16);
    int remainder = n % 16;
    if (remainder < 10) {
        cout << remainder;
    } else {
        cout << char('A' + remainder - 10);
    }
}

// Reverse conversion: Binary to Decimal
int binaryToDecimal(string binary, int index = 0) {
    if (index == binary.length()) return 0;
    int digit = binary[index] - '0';
    int power = binary.length() - index - 1;
    return digit * (1 << power) + binaryToDecimal(binary, index + 1);
}

// Octal to Decimal
int octalToDecimal(int octal) {
    if (octal == 0) return 0;
    return (octal % 10) + 8 * octalToDecimal(octal / 10);
}

// Hex to Decimal
int hexToDecimal(string hex, int index = 0) {
    if (index == hex.length()) return 0;
    int digit;
    if (hex[index] >= '0' && hex[index] <= '9') {
        digit = hex[index] - '0';
    } else {
        digit = hex[index] - 'A' + 10;
    }
    int power = hex.length() - index - 1;
    int base = 1;
    for (int i = 0; i < power; i++) base *= 16;
    return digit * base + hexToDecimal(hex, index + 1);
}

// Function to print number in all bases
void printInAllBases(int n) {
    cout << "\n--- Number in All Bases ---" << endl;
    cout << "Decimal: " << n << endl;
    
    cout << "Binary:  ";
    if (n == 0) {
        cout << "0";
    } else {
        decimalToBinary(n);
    }
    cout << endl;
    
    cout << "Octal:   ";
    if (n == 0) {
        cout << "0";
    } else {
        decimalToOctal(n);
    }
    cout << endl;
    
    cout << "Hex:     ";
    if (n == 0) {
        cout << "0";
    } else {
        decimalToHexadecimal(n);
    }
    cout << endl;
}
    } else {
        decimalToOctal(n);
    }
    cout << endl;
    
    cout << "Hexadecimal: ";
    if (n == 0) {
        cout << "0";
    } else {
        decimalToHexadecimal(n);
    }
    cout << endl;
}

// Recursive function to reverse a number
int reverseNumber(int n, int reversed = 0) {
    if (n == 0) return reversed;
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// Recursive function to count digits
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int number, choice;
    
    cout << "=== NUMBER CONVERSION & MANIPULATION ===" << endl;
    cout << "\nChoose an operation:" << endl;
    cout << "1. Convert to Binary, Octal, and Hexadecimal" << endl;
    cout << "2. Reverse a number" << endl;
    cout << "3. Sum of digits" << endl;
    cout << "4. Count digits" << endl;
    cout << "5. All operations" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter a positive number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    switch (choice) {
        case 1:
            printInAllBases(number);
            break;
            
        case 2:
            cout << "\nOriginal number: " << number << endl;
            cout << "Reversed number: " << reverseNumber(number) << endl;
            break;
            
        case 3:
            cout << "\nNumber: " << number << endl;
            cout << "Sum of digits: " << sumOfDigits(number) << endl;
            break;
            
        case 4:
            cout << "\nNumber: " << number << endl;
            if (number == 0) {
                cout << "Number of digits: 1" << endl;
            } else {
                cout << "Number of digits: " << countDigits(number) << endl;
            }
            break;
            
        case 5:
            cout << "\n=== ALL OPERATIONS ===" << endl;
            printInAllBases(number);
            cout << "\nReversed number: " << reverseNumber(number) << endl;
            cout << "Sum of digits: " << sumOfDigits(number) << endl;
            if (number == 0) {
                cout << "Number of digits: 1" << endl;
            } else {
                cout << "Number of digits: " << countDigits(number) << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}