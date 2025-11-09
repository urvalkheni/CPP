#include <iostream>
using namespace std;

// Diamond and Star Pattern Collection

// Pattern 1: Diamond
void printDiamond(int n) {
    cout << "\n--- Diamond Pattern ---" << endl;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part
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

// Pattern 2: Hollow Diamond
void printHollowDiamond(int n) {
    cout << "\n--- Hollow Diamond ---" << endl;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 3: Butterfly
void printButterfly(int n) {
    cout << "\n--- Butterfly Pattern ---" << endl;
    // Upper part
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 4: Star Pyramid with Numbers
void printStarPyramidNumbers(int n) {
    cout << "\n--- Star Pyramid with Numbers ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 5: Pascal's Triangle
void printPascalTriangle(int n) {
    cout << "\n--- Pascal's Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

// Pattern 6: Sandglass (Hourglass)
void printSandglass(int n) {
    cout << "\n--- Sandglass Pattern ---" << endl;
    // Upper part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 7: Cross (X) with Stars
void printCross(int n) {
    cout << "\n--- Cross (X) Pattern ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 8: Heart
void printHeart(int n) {
    cout << "\n--- Heart Pattern ---" << endl;
    // Upper part - two curves
    for (int i = n / 2; i <= n; i += 2) {
        // Left curve
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Middle space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Right curve
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part - inverted pyramid
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 9: Arrow
void printArrow(int n) {
    cout << "\n--- Arrow Pattern ---" << endl;
    // Upper arrow
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower arrow
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 10: Zig-Zag with Numbers
void printZigZagNumbers(int n) {
    cout << "\n--- Zig-Zag Numbers ---" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
                cout << j << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    
    cout << "=== DIAMOND AND STAR PATTERNS ===" << endl;
    cout << "\n1. Diamond" << endl;
    cout << "2. Hollow Diamond" << endl;
    cout << "3. Butterfly" << endl;
    cout << "4. Star Pyramid with Numbers" << endl;
    cout << "5. Pascal's Triangle" << endl;
    cout << "6. Sandglass (Hourglass)" << endl;
    cout << "7. Cross (X)" << endl;
    cout << "8. Heart" << endl;
    cout << "9. Arrow" << endl;
    cout << "10. Zig-Zag Numbers" << endl;
    cout << "11. Show All Patterns" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    if (choice == 11) {
        n = 5;
        cout << "\nShowing all patterns with n=5:\n";
        printDiamond(n);
        printHollowDiamond(n);
        printButterfly(n);
        printStarPyramidNumbers(n);
        printPascalTriangle(n);
        printSandglass(n);
        printCross(2 * n + 1);
        printHeart(n);
        printArrow(n);
        printZigZagNumbers(10);
    } else {
        cout << "Enter size: ";
        cin >> n;
        
        switch(choice) {
            case 1:
                printDiamond(n);
                break;
            case 2:
                printHollowDiamond(n);
                break;
            case 3:
                printButterfly(n);
                break;
            case 4:
                printStarPyramidNumbers(n);
                break;
            case 5:
                printPascalTriangle(n);
                break;
            case 6:
                printSandglass(n);
                break;
            case 7:
                printCross(n);
                break;
            case 8:
                printHeart(n);
                break;
            case 9:
                printArrow(n);
                break;
            case 10:
                printZigZagNumbers(n);
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }
    }
    
    cout << "\n=== PATTERN PROPERTIES ===" << endl;
    cout << "✓ Diamond: Symmetric pattern" << endl;
    cout << "✓ Butterfly: Mirror effect" << endl;
    cout << "✓ Pascal's Triangle: Mathematical significance" << endl;
    cout << "✓ Heart: Creative design" << endl;
    
    return 0;
}
