#include <iostream>
using namespace std;

// Hollow Pattern Collection

// Pattern 1: Hollow Square
void printHollowSquare(int n) {
    cout << "\n--- Hollow Square ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 2: Hollow Rectangle
void printHollowRectangle(int rows, int cols) {
    cout << "\n--- Hollow Rectangle ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 3: Hollow Pyramid
void printHollowPyramid(int n) {
    cout << "\n--- Hollow Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 4: Hollow Inverted Pyramid
void printHollowInvertedPyramid(int n) {
    cout << "\n--- Hollow Inverted Pyramid ---" << endl;
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 5: Hollow Rhombus
void printHollowRhombus(int n) {
    cout << "\n--- Hollow Rhombus ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print stars and spaces
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 6: Hollow Hour Glass
void printHollowHourGlass(int n) {
    cout << "\n--- Hollow Hour Glass ---" << endl;
    // Upper part (inverted pyramid)
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower part (pyramid)
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 7: Hollow X Pattern
void printHollowX(int n) {
    cout << "\n--- Hollow X Pattern ---" << endl;
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

// Pattern 8: Hollow Plus (+)
void printHollowPlus(int n) {
    cout << "\n--- Hollow Plus Pattern ---" << endl;
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 9: Hollow Parallelogram
void printHollowParallelogram(int n) {
    cout << "\n--- Hollow Parallelogram ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 10: Hollow Circle (approximate)
void printHollowCircle(int radius) {
    cout << "\n--- Hollow Circle (Approximate) ---" << endl;
    int diameter = 2 * radius;
    for (int i = 0; i <= diameter; i++) {
        for (int j = 0; j <= diameter; j++) {
            int distance = (i - radius) * (i - radius) + (j - radius) * (j - radius);
            int radiusSquared = radius * radius;
            
            if (distance >= radiusSquared - radius && distance <= radiusSquared + radius) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int choice, n, rows, cols;
    
    cout << "=== HOLLOW PATTERN COLLECTION ===" << endl;
    cout << "\n1. Hollow Square" << endl;
    cout << "2. Hollow Rectangle" << endl;
    cout << "3. Hollow Pyramid" << endl;
    cout << "4. Hollow Inverted Pyramid" << endl;
    cout << "5. Hollow Rhombus" << endl;
    cout << "6. Hollow Hour Glass" << endl;
    cout << "7. Hollow X Pattern" << endl;
    cout << "8. Hollow Plus (+)" << endl;
    cout << "9. Hollow Parallelogram" << endl;
    cout << "10. Hollow Circle" << endl;
    cout << "11. Show All Patterns" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter size: ";
            cin >> n;
            printHollowSquare(n);
            break;
            
        case 2:
            cout << "Enter rows and columns: ";
            cin >> rows >> cols;
            printHollowRectangle(rows, cols);
            break;
            
        case 3:
            cout << "Enter height: ";
            cin >> n;
            printHollowPyramid(n);
            break;
            
        case 4:
            cout << "Enter height: ";
            cin >> n;
            printHollowInvertedPyramid(n);
            break;
            
        case 5:
            cout << "Enter size: ";
            cin >> n;
            printHollowRhombus(n);
            break;
            
        case 6:
            cout << "Enter size: ";
            cin >> n;
            printHollowHourGlass(n);
            break;
            
        case 7:
            cout << "Enter size (odd): ";
            cin >> n;
            printHollowX(n);
            break;
            
        case 8:
            cout << "Enter size (odd): ";
            cin >> n;
            printHollowPlus(n);
            break;
            
        case 9:
            cout << "Enter size: ";
            cin >> n;
            printHollowParallelogram(n);
            break;
            
        case 10:
            cout << "Enter radius: ";
            cin >> n;
            printHollowCircle(n);
            break;
            
        case 11:
            printHollowSquare(6);
            printHollowRectangle(5, 8);
            printHollowPyramid(6);
            printHollowInvertedPyramid(6);
            printHollowRhombus(6);
            printHollowHourGlass(5);
            printHollowX(7);
            printHollowPlus(7);
            printHollowParallelogram(6);
            printHollowCircle(6);
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== HOLLOW PATTERN PROPERTIES ===" << endl;
    cout << "✓ Prints only borders/edges" << endl;
    cout << "✓ Creates empty space inside" << endl;
    cout << "✓ More visually interesting than solid patterns" << endl;
    cout << "✓ Useful for frames and borders" << endl;
    
    return 0;
}
