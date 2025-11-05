#include <iostream>
#include <string>
using namespace std;

// Recursion Program 2: Generate all binary strings of length n
void generateBinaryStrings(int n, string current = "") {
    // Base case: if length reaches n, print the string
    if (current.length() == n) {
        cout << current << endl;
        return;
    }
    
    // Recursive case: append '0' and '1' and recurse
    generateBinaryStrings(n, current + "0");
    generateBinaryStrings(n, current + "1");
}

// Function to count total binary strings
int countBinaryStrings(int n) {
    if (n == 0) return 1;
    return 2 * countBinaryStrings(n - 1);
}

// Generate binary strings without consecutive 1s
void generateBinaryNoConsecutiveOnes(int n, string current = "", char lastChar = '0') {
    // Base case
    if (current.length() == n) {
        cout << current << endl;
        return;
    }
    
    // Always can add '0'
    generateBinaryNoConsecutiveOnes(n, current + "0", '0');
    
    // Can add '1' only if last character was not '1'
    if (lastChar != '1') {
        generateBinaryNoConsecutiveOnes(n, current + "1", '1');
    }
}

int main() {
    int n, choice;
    
    cout << "=== BINARY STRING GENERATOR ===" << endl;
    cout << "Choose an option:" << endl;
    cout << "1. Generate all binary strings" << endl;
    cout << "2. Generate binary strings without consecutive 1s" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;
    
    cout << "Enter the length of binary strings: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid input! Length must be positive." << endl;
        return 1;
    }
    
    if (choice == 1) {
        cout << "\nAll binary strings of length " << n << ":" << endl;
        cout << "Total count: " << countBinaryStrings(n) << endl;
        cout << "Strings:" << endl;
        generateBinaryStrings(n);
    }
    else if (choice == 2) {
        cout << "\nBinary strings of length " << n << " without consecutive 1s:" << endl;
        generateBinaryNoConsecutiveOnes(n);
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}