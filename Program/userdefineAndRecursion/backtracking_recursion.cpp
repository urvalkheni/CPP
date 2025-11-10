#include <iostream>
using namespace std;

// Backtracking Algorithms using Recursion

// N-Queens Problem
bool isSafe(int board[][10], int row, int col, int n) {
    // Check column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) return false;
    }
    
    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }
    
    // Check upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) return false;
    }
    
    return true;
}

bool solveNQueens(int board[][10], int row, int n) {
    if (row >= n) return true;
    
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1;
            
            if (solveNQueens(board, row + 1, n)) {
                return true;
            }
            
            board[row][col] = 0;  // Backtrack
        }
    }
    
    return false;
}

void printBoard(int board[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
}

// Rat in a Maze
bool isSafeMaze(int maze[][10], int x, int y, int n, bool visited[][10]) {
    return (x >= 0 && x < n && y >= 0 && y < n && 
            maze[x][y] == 1 && !visited[x][y]);
}

bool solveMaze(int maze[][10], int x, int y, int n, int sol[][10], bool visited[][10]) {
    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;
        return true;
    }
    
    if (isSafeMaze(maze, x, y, n, visited)) {
        sol[x][y] = 1;
        visited[x][y] = true;
        
        // Move right
        if (solveMaze(maze, x, y + 1, n, sol, visited)) return true;
        
        // Move down
        if (solveMaze(maze, x + 1, y, n, sol, visited)) return true;
        
        // Move left
        if (solveMaze(maze, x, y - 1, n, sol, visited)) return true;
        
        // Move up
        if (solveMaze(maze, x - 1, y, n, sol, visited)) return true;
        
        // Backtrack
        sol[x][y] = 0;
        visited[x][y] = false;
        return false;
    }
    
    return false;
}

// Subset Sum Problem
void findSubsets(int arr[], int n, int index, int sum, int target, int subset[], int subsetSize) {
    if (sum == target) {
        cout << "{ ";
        for (int i = 0; i < subsetSize; i++) {
            cout << subset[i] << " ";
        }
        cout << "}" << endl;
        return;
    }
    
    if (index >= n || sum > target) return;
    
    // Include current element
    subset[subsetSize] = arr[index];
    findSubsets(arr, n, index + 1, sum + arr[index], target, subset, subsetSize + 1);
    
    // Exclude current element
    findSubsets(arr, n, index + 1, sum, target, subset, subsetSize);
}

// Generate all permutations
void generatePermutations(int arr[], int n, int index) {
    if (index == n - 1) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = index; i < n; i++) {
        swap(arr[index], arr[i]);
        generatePermutations(arr, n, index + 1);
        swap(arr[index], arr[i]);  // Backtrack
    }
}

// Sudoku Solver
bool isSafeSudoku(int grid[][9], int row, int col, int num) {
    // Check row
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num) return false;
    }
    
    // Check column
    for (int x = 0; x < 9; x++) {
        if (grid[x][col] == num) return false;
    }
    
    // Check 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) return false;
        }
    }
    
    return true;
}

bool solveSudoku(int grid[][9]) {
    int row, col;
    bool isEmpty = false;
    
    // Find empty cell
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) break;
    }
    
    if (!isEmpty) return true;
    
    // Try digits 1-9
    for (int num = 1; num <= 9; num++) {
        if (isSafeSudoku(grid, row, col, num)) {
            grid[row][col] = num;
            
            if (solveSudoku(grid)) return true;
            
            grid[row][col] = 0;  // Backtrack
        }
    }
    
    return false;
}

int main() {
    int choice;
    
    cout << "=== BACKTRACKING ALGORITHMS ===" << endl;
    cout << "\n1. N-Queens Problem" << endl;
    cout << "2. Rat in a Maze" << endl;
    cout << "3. Subset Sum Problem" << endl;
    cout << "4. Generate Permutations" << endl;
    cout << "5. Sudoku Solver (4x4 demo)" << endl;
    cout << "\nEnter choice (1-5): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            int n;
            cout << "Enter n for N-Queens: ";
            cin >> n;
            
            int board[10][10] = {0};
            
            if (solveNQueens(board, 0, n)) {
                cout << "\nSolution for " << n << "-Queens:\n";
                printBoard(board, n);
            } else {
                cout << "No solution exists!" << endl;
            }
            break;
        }
        
        case 2: {
            int n = 4;
            int maze[10][10] = {
                {1, 1, 0, 0},
                {1, 1, 1, 0},
                {0, 1, 1, 1},
                {0, 0, 1, 1}
            };
            
            int sol[10][10] = {0};
            bool visited[10][10] = {false};
            
            cout << "\nMaze (1=path, 0=wall):" << endl;
            printBoard(maze, n);
            
            if (solveMaze(maze, 0, 0, n, sol, visited)) {
                cout << "\nSolution path:" << endl;
                printBoard(sol, n);
            } else {
                cout << "No solution exists!" << endl;
            }
            break;
        }
        
        case 3: {
            int arr[] = {3, 34, 4, 12, 5, 2};
            int n = sizeof(arr) / sizeof(arr[0]);
            int target = 9;
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << "\nTarget sum: " << target << endl;
            cout << "\nSubsets with sum " << target << ":" << endl;
            
            int subset[100];
            findSubsets(arr, n, 0, 0, target, subset, 0);
            break;
        }
        
        case 4: {
            int arr[] = {1, 2, 3, 4};
            int n = sizeof(arr) / sizeof(arr[0]);
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << "\n\nAll permutations:" << endl;
            
            generatePermutations(arr, n, 0);
            break;
        }
        
        case 5: {
            int grid[9][9] = {
                {5, 3, 0, 0, 7, 0, 0, 0, 0},
                {6, 0, 0, 1, 9, 5, 0, 0, 0},
                {0, 9, 8, 0, 0, 0, 0, 6, 0},
                {8, 0, 0, 0, 6, 0, 0, 0, 3},
                {4, 0, 0, 8, 0, 3, 0, 0, 1},
                {7, 0, 0, 0, 2, 0, 0, 0, 6},
                {0, 6, 0, 0, 0, 0, 2, 8, 0},
                {0, 0, 0, 4, 1, 9, 0, 0, 5},
                {0, 0, 0, 0, 8, 0, 0, 7, 9}
            };
            
            cout << "Solving Sudoku...\n";
            if (solveSudoku(grid)) {
                cout << "Solved Sudoku (first 4x4):" << endl;
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        cout << grid[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "No solution exists!" << endl;
            }
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== BACKTRACKING INFO ===" << endl;
    cout << "✓ Try all possibilities recursively" << endl;
    cout << "✓ Backtrack when solution is invalid" << endl;
    cout << "✓ Used in constraint satisfaction problems" << endl;
    cout << "✓ N-Queens, Sudoku, Maze solving" << endl;
    cout << "✓ Exponential time complexity" << endl;
    
    return 0;
}
