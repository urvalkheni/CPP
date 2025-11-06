#include <iostream>
using namespace std;

// Program 3: Hollow Hexagon Pattern
void hollowHexagon(int n) {
    // Upper part (including middle)
    for (int i = 1; i <= n; i++) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print pattern
        for (int j = 1; j <= n + 2 * (i - 1); j++) {
            if (j == 1 || j == n + 2 * (i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Middle parallel lines
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= 3 * n - 2; j++) {
            if (j == 1 || j == 3 * n - 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Print pattern
        for (int j = 1; j <= n + 2 * (i - 1); j++) {
            if (j == 1 || j == n + 2 * (i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Solid Hexagon
void solidHexagon(int n) {
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n + 2 * (i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Middle parallel lines
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= 3 * n - 2; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n + 2 * (i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== HEXAGON PATTERNS ===" << endl;
    cout << "1. Hollow Hexagon" << endl;
    cout << "2. Solid Hexagon" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter size: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Size must be at least 2!" << endl;
        return 1;
    }
    
    cout << endl;
    
    if (choice == 1) {
        hollowHexagon(n);
    } else if (choice == 2) {
        solidHexagon(n);
    } else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}