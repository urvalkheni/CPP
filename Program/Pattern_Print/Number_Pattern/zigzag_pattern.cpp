#include <iostream>
#include <vector>
using namespace std;

// Enhanced Zigzag/Wave Pattern Program

// Pattern 1: Zigzag with Stars
void printZigzagStars(int rows, int cols) {
    cout << "\n--- Zigzag Star Pattern ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((j == 0 && i % 4 == 2) ||
                (j == 1 && (i % 4 == 1 || i % 4 == 3)) ||
                (j == 2 && (i % 4 == 0 || i % 4 == 2)) ||
                (j == 3 && (i % 4 == 1 || i % 4 == 3)) ||
                (j == 4 && i % 4 == 0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 2: Wave Pattern with Numbers
void printWaveNumbers(int n) {
    cout << "\n--- Wave Number Pattern ---" << endl;
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                // Even column: top to bottom
                cout << (j * n + i + 1) << "\t";
            } else {
                // Odd column: bottom to top
                cout << ((j + 1) * n - i) << "\t";
            }
        }
        cout << endl;
    }
}

// Pattern 3: Sine Wave Pattern
void printSineWave(int amplitude, int length) {
    cout << "\n--- Sine Wave Pattern ---" << endl;
    for (int i = -amplitude; i <= amplitude; i++) {
        for (int j = 0; j < length; j++) {
            int wave = (int)(amplitude * sin(j * 0.5));
            if (i == wave) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 4: Diagonal Zigzag
void printDiagonalZigzag(int n) {
    cout << "\n--- Diagonal Zigzag Pattern ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = i + j;
            if (sum % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 5: Horizontal Wave
void printHorizontalWave(int rows, int width) {
    cout << "\n--- Horizontal Wave Pattern ---" << endl;
    for (int i = 0; i < rows; i++) {
        int spaces = (i % 4 == 0 || i % 4 == 3) ? 0 :
                     (i % 4 == 1) ? 3 :
                     (i % 4 == 2) ? 6 : 0;
        
        for (int s = 0; s < spaces; s++) cout << " ";
        
        for (int j = 0; j < width; j++) {
            cout << "~";
        }
        cout << endl;
    }
}

// Pattern 6: Complex Zigzag Matrix
void printZigzagMatrix(int n) {
    cout << "\n--- Zigzag Matrix Pattern ---" << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    int num = 1;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Left to right
            for (int j = 0; j < n; j++) {
                matrix[i][j] = num++;
            }
        } else {
            // Right to left
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = num++;
            }
        }
    }
    
    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Pattern 7: Alphabet Zigzag
void printAlphabetZigzag(int rows) {
    cout << "\n--- Alphabet Zigzag Pattern ---" << endl;
    char ch = 'A';
    for (int i = 0; i < rows; i++) {
        int spaces = (i % 3 == 0) ? 0 :
                     (i % 3 == 1) ? 3 :
                     6;
        
        for (int s = 0; s < spaces; s++) cout << " ";
        
        for (int j = 0; j < 5; j++) {
            cout << ch << " ";
            ch++;
            if (ch > 'Z') ch = 'A';
        }
        cout << endl;
    }
}

int main() {
    int choice, rows, cols;
    
    cout << "=== ENHANCED ZIGZAG/WAVE PATTERNS ===" << endl;
    cout << "\n1. Zigzag Star Pattern" << endl;
    cout << "2. Wave Number Pattern" << endl;
    cout << "3. Diagonal Zigzag" << endl;
    cout << "4. Horizontal Wave" << endl;
    cout << "5. Zigzag Matrix" << endl;
    cout << "6. Alphabet Zigzag" << endl;
    cout << "7. Show All Patterns" << endl;
    cout << "\nEnter choice (1-7): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter rows: ";
            cin >> rows;
            printZigzagStars(rows, 5);
            break;
            
        case 2:
            cout << "Enter size: ";
            cin >> rows;
            printWaveNumbers(rows);
            break;
            
        case 3:
            cout << "Enter size: ";
            cin >> rows;
            printDiagonalZigzag(rows);
            break;
            
        case 4:
            cout << "Enter rows and width: ";
            cin >> rows >> cols;
            printHorizontalWave(rows, cols);
            break;
            
        case 5:
            cout << "Enter matrix size: ";
            cin >> rows;
            printZigzagMatrix(rows);
            break;
            
        case 6:
            cout << "Enter rows: ";
            cin >> rows;
            printAlphabetZigzag(rows);
            break;
            
        case 7:
            printZigzagStars(12, 5);
            printWaveNumbers(4);
            printDiagonalZigzag(6);
            printHorizontalWave(8, 10);
            printZigzagMatrix(5);
            printAlphabetZigzag(9);
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== PATTERN PROPERTIES ===" << endl;
    cout << "✓ Zigzag patterns create wave-like effects" << endl;
    cout << "✓ Useful for visual effects and matrix traversal" << endl;
    cout << "✓ Can be applied with numbers, letters, or symbols" << endl;
    cout << "✓ Common in data structure problems" << endl;
    
    return 0;
}
