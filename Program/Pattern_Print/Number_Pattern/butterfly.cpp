#include <iostream>
using namespace std;

// Star Butterfly Pattern
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

// Number Butterfly Pattern
void printButterflyNumberPattern(int n) {
    int num = 1;
    // Upper half
    for (int i = 1; i <= n; i++) {
        int val = num;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << "  ";
        }
        val = num;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }
        num++;
        cout << endl;
    }
    
    // Lower half
    num = n;
    for (int i = n; i >= 1; i--) {
        int val = num;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << "  ";
        }
        val = num;
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }
        num--;
        cout << endl;
    }
}

// Alphabet Butterfly Pattern
void printButterflyAlphabetPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << "  ";
        }
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << "  ";
        }
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// Hollow Butterfly Pattern
void printHollowButterflyPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            if(j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== ENHANCED BUTTERFLY PATTERNS ===" << endl;
    cout << "\n1. Star Butterfly Pattern" << endl;
    cout << "2. Number Butterfly Pattern" << endl;
    cout << "3. Alphabet Butterfly Pattern" << endl;
    cout << "4. Hollow Butterfly Pattern" << endl;
    cout << "\nEnter choice: ";
    cin >> choice;
    
    cout << "Enter the number of rows: ";
    cin >> n;
    
    if(n <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << endl;
    
    switch(choice) {
        case 1:
            printButterflyStarPattern(n);
            break;
        case 2:
            printButterflyNumberPattern(n);
            break;
        case 3:
            printButterflyAlphabetPattern(n);
            break;
        case 4:
            printHollowButterflyPattern(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
