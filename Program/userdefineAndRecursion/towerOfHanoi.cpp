#include <iostream>
using namespace std;

// Recursion Program 1: Tower of Hanoi
// Move n disks from source to destination using auxiliary peg
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: only one disk to move
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    
    // Move n-1 disks from source to auxiliary using destination
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    
    // Move n-1 disks from auxiliary to destination using source
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

// Function to count total moves
int countMoves(int n) {
    if (n == 1) return 1;
    return 2 * countMoves(n - 1) + 1;
}

int main() {
    int numDisks;
    
    cout << "=== TOWER OF HANOI PROBLEM ===" << endl;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    
    if (numDisks <= 0) {
        cout << "Invalid input! Number of disks must be positive." << endl;
        return 1;
    }
    
    cout << "\nSolution for " << numDisks << " disk(s):" << endl;
    cout << "Total moves required: " << countMoves(numDisks) << endl;
    cout << "\nStep-by-step moves:" << endl;
    
    towerOfHanoi(numDisks, 'A', 'C', 'B');
    // A = Source peg, B = Auxiliary peg, C = Destination peg
    
    cout << "\nPuzzle solved!" << endl;
    
    return 0;
}