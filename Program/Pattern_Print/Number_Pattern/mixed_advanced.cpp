#include <iostream>
#include <cmath>
using namespace std;

// Program 4: Star Pyramid with Numbers on Edges
void starPyramidWithNumbers(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Print pattern
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << num << " ";
            } else if (i == n) {
                cout << num << " ";
            } else {
                cout << "* ";
            }
        }
        num++;
        cout << endl;
    }
}

// Alphabet Diamond
void alphabetDiamond(int n) {
    char ch = 'A';
    
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        char currentChar = ch;
        for (int j = 1; j <= i; j++) {
            cout << currentChar << " ";
            currentChar++;
        }
        currentChar -= 2;
        for (int j = 1; j < i; j++) {
            cout << currentChar << " ";
            currentChar--;
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        char currentChar = ch;
        for (int j = 1; j <= i; j++) {
            cout << currentChar << " ";
            currentChar++;
        }
        currentChar -= 2;
        for (int j = 1; j < i; j++) {
            cout << currentChar << " ";
            currentChar--;
        }
        cout << endl;
    }
}

// Number Wave Pattern
void numberWave(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (j % 2 == 1) {
                cout << (j - 1) * rows + i << "\t";
            } else {
                cout << j * rows - i + 1 << "\t";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== ADVANCED PATTERNS ===" << endl;
    cout << "1. Star Pyramid with Number Edges" << endl;
    cout << "2. Alphabet Diamond" << endl;
    cout << "3. Number Wave" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter size: ";
            cin >> n;
            starPyramidWithNumbers(n);
            break;
            
        case 2:
            cout << "Enter size: ";
            cin >> n;
            alphabetDiamond(n);
            break;
            
        case 3:
            {
                int rows, cols;
                cout << "Enter number of rows: ";
                cin >> rows;
                cout << "Enter number of columns: ";
                cin >> cols;
                numberWave(rows, cols);
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}