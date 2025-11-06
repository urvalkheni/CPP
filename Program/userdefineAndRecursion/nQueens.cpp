#include <iostream>
using namespace std;

// Program 10: N-Queens Problem using Backtracking Recursion
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

void printBoard(int board[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int solutionCount = 0;

bool solveNQueens(int board[][10], int row, int n, bool findAll) {
    // Base case: All queens are placed
    if (row == n) {
        solutionCount++;
        cout << "Solution " << solutionCount << ":" << endl;
        printBoard(board, n);
        return !findAll; // Return true if we want only one solution
    }
    
    bool foundSolution = false;
    
    // Try placing queen in all columns of current row
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            // Place queen
            board[row][col] = 1;
            
            // Recursively place rest of the queens
            if (solveNQueens(board, row + 1, n, findAll)) {
                if (!findAll) return true;
                foundSolution = true;
            }
            
            // Backtrack: Remove queen
            board[row][col] = 0;
        }
    }
    
    return foundSolution;
}

int main() {
    int n, choice;
    
    cout << "=== N-QUEENS PROBLEM ===" << endl;
    cout << "Enter the value of N (4-10): ";
    cin >> n;
    
    if (n < 4 || n > 10) {
        cout << "Please enter N between 4 and 10!" << endl;
        return 1;
    }
    
    cout << "\n1. Find one solution" << endl;
    cout << "2. Find all solutions" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    int board[10][10] = {0};
    solutionCount = 0;
    
    cout << "\nSolving " << n << "-Queens problem..." << endl << endl;
    
    if (choice == 1) {
        if (solveNQueens(board, 0, n, false)) {
            cout << "Solution found!" << endl;
        } else {
            cout << "No solution exists!" << endl;
        }
    } else {
        solveNQueens(board, 0, n, true);
        cout << "Total solutions found: " << solutionCount << endl;
    }
    
    return 0;
}