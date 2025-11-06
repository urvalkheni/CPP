#include <iostream>
using namespace std;

// Program 8: Spiral Matrix Pattern
void spiralMatrix(int n) {
    int matrix[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;
    
    while (top <= bottom && left <= right) {
        // Fill top row
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;
        
        // Fill right column
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        // Fill bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }
        
        // Fill left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }
    
    // Print matrix
    cout << "Spiral Matrix (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Diagonal Pattern
void diagonalPattern(int n) {
    cout << "Diagonal Pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                cout << i << " ";
            } else if (i + j == n + 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Cross Pattern
void crossPattern(int n) {
    if (n % 2 == 0) n++; // Make it odd
    int mid = n / 2;
    
    cout << "Cross Pattern:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid || i == j || i + j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== MATRIX PATTERNS ===" << endl;
    cout << "1. Spiral Matrix" << endl;
    cout << "2. Diagonal Pattern" << endl;
    cout << "3. Cross Pattern" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter size: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    
    cout << endl;
    
    switch (choice) {
        case 1:
            spiralMatrix(n);
            break;
        case 2:
            diagonalPattern(n);
            break;
        case 3:
            crossPattern(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}