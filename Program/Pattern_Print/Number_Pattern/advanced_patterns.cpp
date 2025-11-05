#include <iostream>
using namespace std;

// Advanced Pattern 3: Hollow Pyramid with Stars and Numbers
void hollowPyramidMixed(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print pattern
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                if (j % 2 == 1) {
                    cout << "* ";
                } else {
                    cout << i << " ";
                }
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Hourglass Pattern
void hourglassPattern(int n) {
    // Upper inverted triangle
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    // Lower triangle
    for (int i = 2; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Zigzag Pattern
void zigzagPattern(int n) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            // Calculate position in zigzag
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Hollow Square with Diagonals
void hollowSquareWithDiagonals(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Border or diagonals
            if (i == 1 || i == n || j == 1 || j == n || i == j || i + j == n + 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Number Pyramid with Alternating Pattern
void numberPyramidAlternating(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Rhombus Pattern with Numbers
void rhombusPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print numbers
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== ADVANCED MIXED PATTERNS ===" << endl;
    cout << "Choose pattern type:" << endl;
    cout << "1. Hollow Pyramid (Stars & Numbers)" << endl;
    cout << "2. Hourglass Pattern" << endl;
    cout << "3. Zigzag Pattern" << endl;
    cout << "4. Hollow Square with Diagonals" << endl;
    cout << "5. Number Pyramid (Alternating)" << endl;
    cout << "6. Rhombus Pattern" << endl;
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
            hollowPyramidMixed(n);
            break;
        case 2:
            hourglassPattern(n);
            break;
        case 3:
            zigzagPattern(n);
            break;
        case 4:
            hollowSquareWithDiagonals(n);
            break;
        case 5:
            numberPyramidAlternating(n);
            break;
        case 6:
            rhombusPattern(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}