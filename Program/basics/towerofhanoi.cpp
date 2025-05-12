#include <iostream>
using namespace std;

// Function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary); // Move n-1 disks to auxiliary
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination); // Move n-1 disks to destination
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    cout << "\nSteps to solve Tower of Hanoi for " << n << " disks:\n\n";
    towerOfHanoi(n, 'A', 'B', 'C'); // A = Source, B = Auxiliary, C = Destination
    return 0;
}
