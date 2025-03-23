#include <iostream>
using namespace std;

void printButterflyStarPattern(int n) {
    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Left side of the butterfly
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Space in between
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << " ";
        }
        // Right side of the butterfly
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the pattern
    for (int i = n; i >= 1; i--) {
        // Left side of the butterfly
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Space in between
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << " ";
        }
        // Right side of the butterfly
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    printButterflyStarPattern(n);

    return 0;
}
