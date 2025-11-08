#include <iostream>
#include <cmath>
using namespace std;

// Counter for moves
int moveCount = 0;

// Enhanced Tower of Hanoi with move tracking
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: only one disk to move
    if (n == 1) {
        moveCount++;
        cout << "Move " << moveCount << ": Move disk 1 from " << source 
             << " to " << destination << endl;
        return;
    }
    
    // Move n-1 disks from source to auxiliary using destination
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Move the nth disk from source to destination
    moveCount++;
    cout << "Move " << moveCount << ": Move disk " << n << " from " << source 
         << " to " << destination << endl;
    
    // Move n-1 disks from auxiliary to destination using source
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

// Function to count total moves (2^n - 1)
int countMoves(int n) {
    return pow(2, n) - 1;
}

// Tower of Hanoi with state visualization
void towerOfHanoiWithVisualization(int n, char source, char destination, char auxiliary, int level = 0) {
    if (n == 1) {
        moveCount++;
        // Indent based on recursion level
        for(int i = 0; i < level; i++) cout << "  ";
        cout << "→ Move disk 1: " << source << " → " << destination << endl;
        return;
    }
    
    towerOfHanoiWithVisualization(n - 1, source, auxiliary, destination, level + 1);
    
    moveCount++;
    for(int i = 0; i < level; i++) cout << "  ";
    cout << "→ Move disk " << n << ": " << source << " → " << destination << endl;
    
    towerOfHanoiWithVisualization(n - 1, auxiliary, destination, source, level + 1);
}

// Display formula and complexity
void displayInfo(int n) {
    cout << "\n=== TOWER OF HANOI INFORMATION ===" << endl;
    cout << "Number of disks: " << n << endl;
    cout << "Formula: 2^n - 1 moves" << endl;
    cout << "Calculated moves: 2^" << n << " - 1 = " << countMoves(n) << endl;
    cout << "Time Complexity: O(2^n)" << endl;
    cout << "Space Complexity: O(n) - recursion stack" << endl;
}

int main() {
    int numDisks, choice;
    
    cout << "=== ENHANCED TOWER OF HANOI SOLVER ===" << endl;
    cout << "\nChoose display mode:" << endl;
    cout << "1. Standard moves" << endl;
    cout << "2. Visualization with recursion levels" << endl;
    cout << "3. Information only (no moves)" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;
    
    cout << "\nEnter the number of disks: ";
    cin >> numDisks;
    
    if (numDisks <= 0) {
        cout << "Invalid input! Number of disks must be positive." << endl;
        return 1;
    }
    
    if (numDisks > 10) {
        cout << "Warning: Large number of disks will generate many moves!" << endl;
        cout << "Estimated moves: " << countMoves(numDisks) << endl;
        cout << "Continue? (1=Yes, 0=No): ";
        int cont;
        cin >> cont;
        if (!cont) return 0;
    }
    
    // Display information
    displayInfo(numDisks);
    
    if (choice == 3) {
        cout << "\nNote: A = Source peg, B = Auxiliary peg, C = Destination peg" << endl;
        return 0;
    }
    
    cout << "\n=== SOLUTION ===" << endl;
    cout << "Moving " << numDisks << " disk(s) from A to C using B" << endl;
    cout << "A = Source peg, B = Auxiliary peg, C = Destination peg\n" << endl;
    
    moveCount = 0;
    
    if (choice == 1) {
        towerOfHanoi(numDisks, 'A', 'C', 'B');
    } else if (choice == 2) {
        cout << "(Indentation shows recursion depth)\n" << endl;
        towerOfHanoiWithVisualization(numDisks, 'A', 'C', 'B');
    }
    
    cout << "\n=== SUMMARY ===" << endl;
    cout << "Total moves executed: " << moveCount << endl;
    cout << "Expected moves: " << countMoves(numDisks) << endl;
    cout << "Puzzle solved successfully!" << endl;
    
    // Additional insights
    if (numDisks <= 7) {
        cout << "\n=== INSIGHT ===" << endl;
        cout << "Minimum moves for different disk counts:" << endl;
        for (int i = 1; i <= numDisks + 2 && i <= 10; i++) {
            cout << i << " disk(s): " << countMoves(i) << " moves" << endl;
        }
    }
    
    return 0;
}