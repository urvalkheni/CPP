#include <iostream>
#include <vector>
using namespace std;

// Enhanced Hollow Pattern Collection
// Version 2.0 - Added advanced hollow patterns (diamond, butterfly, heart, hexagon)

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

// NEW Pattern 11: Hollow Diamond
void printHollowDiamond(int n) {
    cout << "\n--- Hollow Diamond ---" << endl;
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

// NEW Pattern 12: Hollow Butterfly
void printHollowButterfly(int n) {
    cout << "\n--- Hollow Butterfly ---" << endl;
    // Upper wings
    for (int i = 1; i <= n; i++) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        // Middle space
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        // Right wing
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    // Lower wings
    for (int i = n - 1; i >= 1; i--) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        // Middle space
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        // Right wing
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

// NEW Pattern 13: Hollow Heart
void printHollowHeart(int n) {
    cout << "\n--- Hollow Heart ---" << endl;
    // Upper part
    for (int i = n / 2; i < n; i += 2) {
        // Left spaces
        for (int j = 1; j < n - i; j += 2) cout << " ";
        // Left curve
        for (int j = 1; j < i + 1; j++) {
            if (j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        // Middle space
        for (int j = 1; j < n - i + 1; j++) cout << " ";
        // Right curve
        for (int j = 1; j < i + 1; j++) {
            if (j == 1 || j == i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    // Lower triangle
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) cout << " ";
        for (int j = 1; j < i * 2; j++) {
            if (j == 1 || j == i * 2 - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

// NEW Pattern 14: Hollow Hexagon
void printHollowHexagon(int n) {
    cout << "\n--- Hollow Hexagon ---" << endl;
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= n + 2 * (i - 1); j++) {
            if (j == 1 || j == n + 2 * (i - 1)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= n + 2 * (i - 1); j++) {
            if (j == 1 || j == n + 2 * (i - 1)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

// NEW Pattern 15: Hollow Zigzag
void printHollowZigzag(int rows, int cols) {
    cout << "\n--- Hollow Zigzag ---" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || 
                (i + j == rows + 1) || (i == j)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// NEW Pattern 16: Hollow Spiral Frame
void printHollowSpiral(int n) {
    cout << "\n--- Hollow Spiral Frame ---" << endl;
    if (n <= 0) {
        cout << "Size must be positive" << endl;
        return;
    }
    vector<vector<char>> grid(n, vector<char>(n, ' '));
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j) grid[top][j] = '*';
        for (int i = top; i <= bottom; ++i) grid[i][right] = '*';
        if (top < bottom) {
            for (int j = right; j >= left; --j) grid[bottom][j] = '*';
        }
        if (left < right) {
            for (int i = bottom; i >= top; --i) grid[i][left] = '*';
        }
        top += 2;
        left += 2;
        right -= 2;
        bottom -= 2;
    }
    for (const auto& row : grid) {
        for (char ch : row) {
            cout << ch << ' ';
        }
        cout << endl;
    }
}

// NEW Pattern 17: Hollow Double Pyramid
void printHollowDoublePyramid(int n) {
    cout << "\n--- Hollow Double Pyramid ---" << endl;
    if (n <= 0) {
        cout << "Height must be positive" << endl;
        return;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) cout << ' ';
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == n) cout << '*';
            else cout << ' ';
        }
        int gap = 2 * (n - i) + 1;
        for (int j = 0; j < gap; ++j) cout << ' ';
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == n) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
}

int main() {
    int choice, n, rows, cols;
    
    cout << "=== HOLLOW PATTERN COLLECTION (ENHANCED) ===" << endl;
    cout << "Version 2.0 - Now with 15 amazing patterns!" << endl;
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
    cout << "11. Hollow Diamond (NEW)" << endl;
    cout << "12. Hollow Butterfly (NEW)" << endl;
    cout << "13. Hollow Heart (NEW)" << endl;
    cout << "14. Hollow Hexagon (NEW)" << endl;
    cout << "15. Hollow Zigzag (NEW)" << endl;
    cout << "16. Hollow Spiral Frame (NEW)" << endl;
    cout << "17. Hollow Double Pyramid (NEW)" << endl;
    cout << "18. Show All Patterns" << endl;
    cout << "\nEnter choice (1-18): ";
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
            cout << "Enter size: ";
            cin >> n;
            printHollowDiamond(n);
            break;
            
        case 12:
            cout << "Enter size: ";
            cin >> n;
            printHollowButterfly(n);
            break;
            
        case 13:
            cout << "Enter size: ";
            cin >> n;
            printHollowHeart(n);
            break;
            
        case 14:
            cout << "Enter size: ";
            cin >> n;
            printHollowHexagon(n);
            break;
            
        case 15:
            cout << "Enter rows and cols: ";
            cin >> rows >> cols;
            printHollowZigzag(rows, cols);
            break;
            
        case 16:
            cout << "Enter size: ";
            cin >> n;
            printHollowSpiral(n);
            break;

        case 17:
            cout << "Enter height: ";
            cin >> n;
            printHollowDoublePyramid(n);
            break;
            
        case 18:
            cout << "\n--- Showing ALL Patterns (size=5) ---" << endl;
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
            printHollowDiamond(5);
            printHollowButterfly(5);
            printHollowHeart(6);
            printHollowHexagon(4);
            printHollowZigzag(7, 10);
            printHollowSpiral(7);
            printHollowDoublePyramid(4);
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== HOLLOW PATTERN PROPERTIES (ENHANCED) ===" << endl;
    cout << "✓ Prints only borders/edges" << endl;
    cout << "✓ Creates empty space inside" << endl;
    cout << "✓ More visually interesting than solid patterns" << endl;
    cout << "✓ Useful for frames and borders" << endl;
    cout << "✓ 17 unique patterns including spiral and double pyramid" << endl;
    cout << "✓ Great for decorative ASCII art" << endl;
    
    return 0;
}
