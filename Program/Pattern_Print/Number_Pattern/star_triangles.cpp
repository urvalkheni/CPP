#include <iostream>
using namespace std;

// Star Triangle Patterns

// Pattern 1: Right Triangle
void printRightTriangle(int n) {
    cout << "\n--- Right Triangle ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2: Inverted Right Triangle
void printInvertedRightTriangle(int n) {
    cout << "\n--- Inverted Right Triangle ---" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3: Pyramid
void printPyramid(int n) {
    cout << "\n--- Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 4: Inverted Pyramid
void printInvertedPyramid(int n) {
    cout << "\n--- Inverted Pyramid ---" << endl;
    for (int i = n; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 5: Full Diamond
void printFullDiamond(int n) {
    cout << "\n--- Full Diamond ---" << endl;
    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower inverted pyramid
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 6: Right Pascal's Triangle
void printRightPascal(int n) {
    cout << "\n--- Right Pascal's Triangle ---" << endl;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 7: Left Triangle
void printLeftTriangle(int n) {
    cout << "\n--- Left Triangle ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 8: Inverted Left Triangle
void printInvertedLeftTriangle(int n) {
    cout << "\n--- Inverted Left Triangle ---" << endl;
    for (int i = n; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 9: Hollow Right Triangle
void printHollowRightTriangle(int n) {
    cout << "\n--- Hollow Right Triangle ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 10: Star Box
void printStarBox(int n) {
    cout << "\n--- Star Box ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    
    cout << "=== STAR TRIANGLE PATTERNS ===" << endl;
    cout << "\n1. Right Triangle" << endl;
    cout << "2. Inverted Right Triangle" << endl;
    cout << "3. Pyramid" << endl;
    cout << "4. Inverted Pyramid" << endl;
    cout << "5. Full Diamond" << endl;
    cout << "6. Right Pascal's Triangle" << endl;
    cout << "7. Left Triangle" << endl;
    cout << "8. Inverted Left Triangle" << endl;
    cout << "9. Hollow Right Triangle" << endl;
    cout << "10. Star Box" << endl;
    cout << "11. Show All Patterns" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    if (choice == 11) {
        n = 5;
        cout << "\nShowing all patterns with n=5:\n";
        printRightTriangle(n);
        printInvertedRightTriangle(n);
        printPyramid(n);
        printInvertedPyramid(n);
        printFullDiamond(n);
        printRightPascal(n);
        printLeftTriangle(n);
        printInvertedLeftTriangle(n);
        printHollowRightTriangle(n);
        printStarBox(n);
    } else {
        cout << "Enter size: ";
        cin >> n;
        
        switch(choice) {
            case 1:
                printRightTriangle(n);
                break;
            case 2:
                printInvertedRightTriangle(n);
                break;
            case 3:
                printPyramid(n);
                break;
            case 4:
                printInvertedPyramid(n);
                break;
            case 5:
                printFullDiamond(n);
                break;
            case 6:
                printRightPascal(n);
                break;
            case 7:
                printLeftTriangle(n);
                break;
            case 8:
                printInvertedLeftTriangle(n);
                break;
            case 9:
                printHollowRightTriangle(n);
                break;
            case 10:
                printStarBox(n);
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }
    }
    
    cout << "\n=== STAR PATTERN INFO ===" << endl;
    cout << "✓ Basic triangle patterns" << endl;
    cout << "✓ Pyramid and diamond shapes" << endl;
    cout << "✓ Hollow and solid variations" << endl;
    cout << "✓ Fundamental for pattern printing" << endl;
    
    return 0;
}
