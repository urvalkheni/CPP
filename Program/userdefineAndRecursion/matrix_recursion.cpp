#include <iostream>
using namespace std;

// Matrix Operations using Recursion

const int MAX = 10;

// Print matrix
void printMatrix(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Sum of all elements (recursive)
int matrixSum(int mat[][MAX], int rows, int cols, int i = 0, int j = 0) {
    if (i >= rows) return 0;
    if (j >= cols) return matrixSum(mat, rows, cols, i + 1, 0);
    
    return mat[i][j] + matrixSum(mat, rows, cols, i, j + 1);
}

// Find maximum element (recursive)
int matrixMax(int mat[][MAX], int rows, int cols, int i = 0, int j = 0, int maxVal = INT_MIN) {
    if (i >= rows) return maxVal;
    if (j >= cols) return matrixMax(mat, rows, cols, i + 1, 0, maxVal);
    
    maxVal = max(maxVal, mat[i][j]);
    return matrixMax(mat, rows, cols, i, j + 1, maxVal);
}

// Find minimum element (recursive)
int matrixMin(int mat[][MAX], int rows, int cols, int i = 0, int j = 0, int minVal = INT_MAX) {
    if (i >= rows) return minVal;
    if (j >= cols) return matrixMin(mat, rows, cols, i + 1, 0, minVal);
    
    minVal = min(minVal, mat[i][j]);
    return matrixMin(mat, rows, cols, i, j + 1, minVal);
}

// Check if element exists (recursive)
bool matrixSearch(int mat[][MAX], int rows, int cols, int target, int i = 0, int j = 0) {
    if (i >= rows) return false;
    if (j >= cols) return matrixSearch(mat, rows, cols, target, i + 1, 0);
    
    if (mat[i][j] == target) return true;
    return matrixSearch(mat, rows, cols, target, i, j + 1);
}

// Count occurrences of element (recursive)
int countOccurrences(int mat[][MAX], int rows, int cols, int target, int i = 0, int j = 0) {
    if (i >= rows) return 0;
    if (j >= cols) return countOccurrences(mat, rows, cols, target, i + 1, 0);
    
    int count = (mat[i][j] == target) ? 1 : 0;
    return count + countOccurrences(mat, rows, cols, target, i, j + 1);
}

// Transpose matrix (recursive helper)
void transposeHelper(int mat[][MAX], int trans[][MAX], int rows, int cols, int i = 0, int j = 0) {
    if (i >= rows) return;
    if (j >= cols) {
        transposeHelper(mat, trans, rows, cols, i + 1, 0);
        return;
    }
    
    trans[j][i] = mat[i][j];
    transposeHelper(mat, trans, rows, cols, i, j + 1);
}

// Diagonal sum (recursive)
int diagonalSum(int mat[][MAX], int n, int i = 0) {
    if (i >= n) return 0;
    return mat[i][i] + diagonalSum(mat, n, i + 1);
}

// Secondary diagonal sum (recursive)
int secondaryDiagonalSum(int mat[][MAX], int n, int i = 0) {
    if (i >= n) return 0;
    return mat[i][n - 1 - i] + secondaryDiagonalSum(mat, n, i + 1);
}

// Check if matrix is symmetric (recursive)
bool isSymmetric(int mat[][MAX], int n, int i = 0, int j = 0) {
    if (i >= n) return true;
    if (j >= n) return isSymmetric(mat, n, i + 1, 0);
    
    if (mat[i][j] != mat[j][i]) return false;
    return isSymmetric(mat, n, i, j + 1);
}

// Row sum (recursive)
int rowSum(int mat[][MAX], int cols, int row, int j = 0) {
    if (j >= cols) return 0;
    return mat[row][j] + rowSum(mat, cols, row, j + 1);
}

// Column sum (recursive)
int colSum(int mat[][MAX], int rows, int col, int i = 0) {
    if (i >= rows) return 0;
    return mat[i][col] + colSum(mat, rows, col, i + 1);
}

int main() {
    int choice;
    
    cout << "=== MATRIX OPERATIONS (RECURSION) ===" << endl;
    cout << "\n1. Sum of All Elements" << endl;
    cout << "2. Find Maximum Element" << endl;
    cout << "3. Find Minimum Element" << endl;
    cout << "4. Search Element" << endl;
    cout << "5. Count Occurrences" << endl;
    cout << "6. Transpose Matrix" << endl;
    cout << "7. Diagonal Sum (Primary)" << endl;
    cout << "8. Diagonal Sum (Secondary)" << endl;
    cout << "9. Check Symmetric Matrix" << endl;
    cout << "10. Row Sum" << endl;
    cout << "11. Column Sum" << endl;
    cout << "12. Show All Examples" << endl;
    cout << "\nEnter choice (1-12): ";
    cin >> choice;
    
    // Sample matrix
    int mat[MAX][MAX] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int rows = 4, cols = 4;
    
    cout << "\nMatrix:" << endl;
    printMatrix(mat, rows, cols);
    
    switch(choice) {
        case 1:
            cout << "\nSum of all elements: " << matrixSum(mat, rows, cols) << endl;
            break;
            
        case 2:
            cout << "\nMaximum element: " << matrixMax(mat, rows, cols) << endl;
            break;
            
        case 3:
            cout << "\nMinimum element: " << matrixMin(mat, rows, cols) << endl;
            break;
            
        case 4: {
            int target;
            cout << "\nEnter element to search: ";
            cin >> target;
            if (matrixSearch(mat, rows, cols, target)) {
                cout << target << " found in matrix" << endl;
            } else {
                cout << target << " NOT found in matrix" << endl;
            }
            break;
        }
        
        case 5: {
            int target;
            cout << "\nEnter element to count: ";
            cin >> target;
            cout << "Occurrences of " << target << ": " << countOccurrences(mat, rows, cols, target) << endl;
            break;
        }
        
        case 6: {
            int trans[MAX][MAX] = {0};
            transposeHelper(mat, trans, rows, cols);
            cout << "\nTransposed Matrix:" << endl;
            printMatrix(trans, cols, rows);
            break;
        }
        
        case 7:
            cout << "\nPrimary diagonal sum: " << diagonalSum(mat, rows) << endl;
            break;
            
        case 8:
            cout << "\nSecondary diagonal sum: " << secondaryDiagonalSum(mat, rows) << endl;
            break;
            
        case 9: {
            int symMat[MAX][MAX] = {
                {1, 2, 3},
                {2, 4, 5},
                {3, 5, 6}
            };
            cout << "\nTest Matrix:" << endl;
            printMatrix(symMat, 3, 3);
            if (isSymmetric(symMat, 3)) {
                cout << "Matrix is symmetric" << endl;
            } else {
                cout << "Matrix is NOT symmetric" << endl;
            }
            break;
        }
        
        case 10: {
            int row;
            cout << "\nEnter row number (0-" << rows-1 << "): ";
            cin >> row;
            if (row >= 0 && row < rows) {
                cout << "Sum of row " << row << ": " << rowSum(mat, cols, row) << endl;
            }
            break;
        }
        
        case 11: {
            int col;
            cout << "\nEnter column number (0-" << cols-1 << "): ";
            cin >> col;
            if (col >= 0 && col < cols) {
                cout << "Sum of column " << col << ": " << colSum(mat, rows, col) << endl;
            }
            break;
        }
        
        case 12: {
            cout << "\n--- All Examples ---" << endl;
            cout << "\nSum of elements: " << matrixSum(mat, rows, cols) << endl;
            cout << "Maximum element: " << matrixMax(mat, rows, cols) << endl;
            cout << "Minimum element: " << matrixMin(mat, rows, cols) << endl;
            cout << "Search 7: " << (matrixSearch(mat, rows, cols, 7) ? "Found" : "Not Found") << endl;
            cout << "Count of 10: " << countOccurrences(mat, rows, cols, 10) << endl;
            cout << "Primary diagonal sum: " << diagonalSum(mat, rows) << endl;
            cout << "Secondary diagonal sum: " << secondaryDiagonalSum(mat, rows) << endl;
            cout << "Row 0 sum: " << rowSum(mat, cols, 0) << endl;
            cout << "Column 0 sum: " << colSum(mat, rows, 0) << endl;
            
            int trans[MAX][MAX] = {0};
            transposeHelper(mat, trans, rows, cols);
            cout << "\nTranspose:" << endl;
            printMatrix(trans, cols, rows);
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== MATRIX RECURSION INFO ===" << endl;
    cout << "✓ All operations use recursion" << endl;
    cout << "✓ 2D traversal: row by row, column by column" << endl;
    cout << "✓ Base case: when indices exceed bounds" << endl;
    cout << "✓ Time complexity: O(rows * cols)" << endl;
    
    return 0;
}
