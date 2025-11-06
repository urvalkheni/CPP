#include <iostream>
using namespace std;

// Program 11: Heart Pattern
void heartPattern(int n) {
    // Upper part of heart
    for (int i = n / 2; i <= n; i += 2) {
        // Left spaces
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }
        
        // Left part of heart
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Middle spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Right part of heart
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part of heart (inverted triangle)
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

// Hollow Heart Pattern
void hollowHeartPattern(int n) {
    // Upper part
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            if (j == 1 || j == (i * 2) - 1 || i == 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== HEART PATTERNS ===" << endl;
    cout << "1. Solid Heart" << endl;
    cout << "2. Hollow Heart" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter size (recommended 6-10): ";
    cin >> n;
    
    if (n < 4) {
        cout << "Size should be at least 4!" << endl;
        return 1;
    }
    
    cout << endl;
    
    if (choice == 1) {
        heartPattern(n);
    } else if (choice == 2) {
        hollowHeartPattern(n);
    } else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}