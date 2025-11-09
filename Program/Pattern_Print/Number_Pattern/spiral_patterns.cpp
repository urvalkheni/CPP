#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Spiral Patterns Collection

// Pattern 1: Clockwise Spiral
void printClockwiseSpiral(int n) {
    cout << "\n--- Clockwise Spiral ---" << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

// Pattern 2: Counter-Clockwise Spiral
void printCounterClockwiseSpiral(int n) {
    cout << "\n--- Counter-Clockwise Spiral ---" << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        // Fill left column
        for (int i = top; i <= bottom; i++) {
            matrix[i][left] = num++;
        }
        left++;
        
        // Fill bottom row
        if (left <= right) {
            for (int i = left; i <= right; i++) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }
        
        // Fill right column
        if (top <= bottom) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][right] = num++;
            }
            right--;
        }
        
        // Fill top row
        if (left <= right) {
            for (int i = right; i >= left; i--) {
                matrix[top][i] = num++;
            }
            top++;
        }
    }
    
    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

// Pattern 3: Spiral from Center
void printCenterSpiral(int n) {
    cout << "\n--- Spiral from Center ---" << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    int num = n * n;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (num > 0) {
        // Fill top row
        for (int i = left; i <= right && num > 0; i++) {
            matrix[top][i] = num--;
        }
        top++;
        
        // Fill right column
        for (int i = top; i <= bottom && num > 0; i++) {
            matrix[i][right] = num--;
        }
        right--;
        
        // Fill bottom row
        for (int i = right; i >= left && num > 0; i--) {
            matrix[bottom][i] = num--;
        }
        bottom--;
        
        // Fill left column
        for (int i = bottom; i >= top && num > 0; i--) {
            matrix[i][left] = num--;
        }
        left++;
    }
    
    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

// Pattern 4: Diagonal Spiral
void printDiagonalSpiral(int n) {
    cout << "\n--- Diagonal Spiral ---" << endl;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int min_dist = min(min(i, j), min(n - 1 - i, n - 1 - j));
            int val = min_dist + 1;
            cout << setw(3) << val << " ";
        }
        cout << endl;
    }
}

// Pattern 5: Rectangular Spiral
void printRectangularSpiral(int rows, int cols) {
    cout << "\n--- Rectangular Spiral ---" << endl;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    int num = 1;
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }
    
    // Print matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

// Pattern 6: Fibonacci Spiral
void printFibonacciSpiral(int n) {
    cout << "\n--- Fibonacci Spiral ---" << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    int fib1 = 1, fib2 = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = fib1;
            int temp = fib1 + fib2;
            fib1 = fib2;
            fib2 = temp;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = fib1;
            int temp = fib1 + fib2;
            fib1 = fib2;
            fib2 = temp;
        }
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = fib1;
                int temp = fib1 + fib2;
                fib1 = fib2;
                fib2 = temp;
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = fib1;
                int temp = fib1 + fib2;
                fib1 = fib2;
                fib2 = temp;
            }
            left++;
        }
    }
    
    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(6) << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    int choice, n, rows, cols;
    
    cout << "=== SPIRAL PATTERNS COLLECTION ===" << endl;
    cout << "\n1. Clockwise Spiral" << endl;
    cout << "2. Counter-Clockwise Spiral" << endl;
    cout << "3. Spiral from Center (Reverse)" << endl;
    cout << "4. Diagonal Spiral" << endl;
    cout << "5. Rectangular Spiral" << endl;
    cout << "6. Fibonacci Spiral" << endl;
    cout << "7. Show All Patterns" << endl;
    cout << "\nEnter choice (1-7): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter size: ";
            cin >> n;
            printClockwiseSpiral(n);
            break;
            
        case 2:
            cout << "Enter size: ";
            cin >> n;
            printCounterClockwiseSpiral(n);
            break;
            
        case 3:
            cout << "Enter size: ";
            cin >> n;
            printCenterSpiral(n);
            break;
            
        case 4:
            cout << "Enter size: ";
            cin >> n;
            printDiagonalSpiral(n);
            break;
            
        case 5:
            cout << "Enter rows and columns: ";
            cin >> rows >> cols;
            printRectangularSpiral(rows, cols);
            break;
            
        case 6:
            cout << "Enter size: ";
            cin >> n;
            printFibonacciSpiral(n);
            break;
            
        case 7:
            printClockwiseSpiral(5);
            printCounterClockwiseSpiral(5);
            printCenterSpiral(5);
            printDiagonalSpiral(6);
            printRectangularSpiral(4, 6);
            printFibonacciSpiral(5);
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== SPIRAL PROPERTIES ===" << endl;
    cout << "✓ Fills matrix in spiral order" << endl;
    cout << "✓ Common in matrix traversal problems" << endl;
    cout << "✓ Used in image processing and graphics" << endl;
    cout << "✓ Time complexity: O(n²)" << endl;
    
    return 0;
}
