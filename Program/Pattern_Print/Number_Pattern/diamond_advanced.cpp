#include <iostream>
using namespace std;

// Advanced Pattern 1: Hollow Diamond with Numbers
void hollowDiamondNumbers(int n) {
    // Upper half including middle
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Solid Diamond with Numbers
void solidDiamondNumbers(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== ADVANCED DIAMOND PATTERNS ===" << endl;
    cout << "Choose pattern type:" << endl;
    cout << "1. Hollow Diamond with Numbers" << endl;
    cout << "2. Solid Diamond with Numbers" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter the size (n): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid input! Size must be positive." << endl;
        return 1;
    }
    
    cout << endl;
    
    switch (choice) {
        case 1:
            hollowDiamondNumbers(n);
            break;
        case 2:
            solidDiamondNumbers(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}