#include <iostream>
using namespace std;

// Advanced Pattern 2: Pascal's Triangle
void pascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        
        // Calculate and print values
        int value = 1;
        for (int j = 0; j <= i; j++) {
            cout << value << "   ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

// Pascal's Triangle with Colors (using symbols)
void pascalTriangleColored(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        
        // Calculate and print values with symbols
        int value = 1;
        for (int j = 0; j <= i; j++) {
            if (value % 2 == 0) {
                cout << "[" << value << "] ";
            } else {
                cout << "(" << value << ") ";
            }
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

// Pascal's Triangle - Even/Odd pattern
void pascalTriangleEvenOdd(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        
        // Calculate and print E for even, O for odd
        int value = 1;
        for (int j = 0; j <= i; j++) {
            if (value % 2 == 0) {
                cout << "E   ";
            } else {
                cout << "O   ";
            }
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

// Floyd's Triangle
void floydsTriangle(int n) {
    int number = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

// Inverted Pascal's Triangle
void invertedPascalTriangle(int n) {
    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        
        // Calculate and print values
        int value = 1;
        for (int j = 0; j <= i; j++) {
            cout << value << "   ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== PASCAL'S TRIANGLE & ADVANCED NUMBER PATTERNS ===" << endl;
    cout << "Choose pattern type:" << endl;
    cout << "1. Pascal's Triangle" << endl;
    cout << "2. Pascal's Triangle (Even/Odd marked)" << endl;
    cout << "3. Pascal's Triangle (Colored with symbols)" << endl;
    cout << "4. Floyd's Triangle" << endl;
    cout << "5. Inverted Pascal's Triangle" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter the number of rows: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid input! Number of rows must be positive." << endl;
        return 1;
    }
    
    cout << endl;
    
    switch (choice) {
        case 1:
            pascalTriangle(n);
            break;
        case 2:
            pascalTriangleEvenOdd(n);
            break;
        case 3:
            pascalTriangleColored(n);
            break;
        case 4:
            floydsTriangle(n);
            break;
        case 5:
            invertedPascalTriangle(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}