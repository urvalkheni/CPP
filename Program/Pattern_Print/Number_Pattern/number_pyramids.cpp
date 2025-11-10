#include <iostream>
using namespace std;

// Number Pyramid Patterns

// Pattern 1: Number Pyramid
void printNumberPyramid(int n) {
    cout << "\n--- Number Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 2: Reverse Number Pyramid
void printReverseNumberPyramid(int n) {
    cout << "\n--- Reverse Number Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Numbers (reverse)
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 3: Number Diamond
void printNumberDiamond(int n) {
    cout << "\n--- Number Diamond ---" << endl;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 4: Palindrome Number Pyramid
void printPalindromeNumber(int n) {
    cout << "\n--- Palindrome Number Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Ascending
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Descending
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 5: Number Triangle (Same number in row)
void printSameNumberRow(int n) {
    cout << "\n--- Same Number Row ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// Pattern 6: Continuous Number Triangle
void printContinuousNumber(int n) {
    cout << "\n--- Continuous Number Triangle ---" << endl;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 7: Number Square
void printNumberSquare(int n) {
    cout << "\n--- Number Square ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 8: Inverted Number Pyramid
void printInvertedNumberPyramid(int n) {
    cout << "\n--- Inverted Number Pyramid ---" << endl;
    for (int i = n; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 9: Number X Pattern
void printNumberX(int n) {
    cout << "\n--- Number X Pattern ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 10: Number Border Square
void printNumberBorderSquare(int n) {
    cout << "\n--- Number Border Square ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print distance from edge
            int minDist = min(min(i, j), min(n - i + 1, n - j + 1));
            cout << minDist << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    
    cout << "=== NUMBER PYRAMID PATTERNS ===" << endl;
    cout << "\n1. Number Pyramid" << endl;
    cout << "2. Reverse Number Pyramid" << endl;
    cout << "3. Number Diamond" << endl;
    cout << "4. Palindrome Number Pyramid" << endl;
    cout << "5. Same Number Row" << endl;
    cout << "6. Continuous Number Triangle" << endl;
    cout << "7. Number Square" << endl;
    cout << "8. Inverted Number Pyramid" << endl;
    cout << "9. Number X Pattern" << endl;
    cout << "10. Number Border Square" << endl;
    cout << "11. Show All Patterns" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    if (choice == 11) {
        n = 5;
        cout << "\nShowing all patterns with n=5:\n";
        printNumberPyramid(n);
        printReverseNumberPyramid(n);
        printNumberDiamond(n);
        printPalindromeNumber(n);
        printSameNumberRow(n);
        printContinuousNumber(n);
        printNumberSquare(n);
        printInvertedNumberPyramid(n);
        printNumberX(n);
        printNumberBorderSquare(n);
    } else {
        cout << "Enter size: ";
        cin >> n;
        
        switch(choice) {
            case 1:
                printNumberPyramid(n);
                break;
            case 2:
                printReverseNumberPyramid(n);
                break;
            case 3:
                printNumberDiamond(n);
                break;
            case 4:
                printPalindromeNumber(n);
                break;
            case 5:
                printSameNumberRow(n);
                break;
            case 6:
                printContinuousNumber(n);
                break;
            case 7:
                printNumberSquare(n);
                break;
            case 8:
                printInvertedNumberPyramid(n);
                break;
            case 9:
                printNumberX(n);
                break;
            case 10:
                printNumberBorderSquare(n);
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }
    }
    
    cout << "\n=== NUMBER PATTERN INFO ===" << endl;
    cout << "✓ Various pyramid styles with numbers" << endl;
    cout << "✓ Palindrome and diamond patterns" << endl;
    cout << "✓ Sequential and row-based numbering" << endl;
    cout << "✓ Great for loop practice" << endl;
    
    return 0;
}
