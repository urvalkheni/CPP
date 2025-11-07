#include <iostream>
using namespace std;

// Solid Diamond Pattern
void printDiamondPattern(int n) {
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Hollow Diamond Pattern
void printHollowDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Number Diamond Pattern
void printNumberDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

// Alphabet Diamond Pattern
void printAlphabetDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}

// Increasing Number Diamond
void printIncreasingNumberDiamond(int n) {
    int num = 1;
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    
    // Lower half
    num--;
    for (int i = n - 1; i >= 1; i--) {
        num--;
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, choice;
    
    cout << "=== ENHANCED DIAMOND PATTERNS ===" << endl;
    cout << "\n1. Solid Diamond (Stars)" << endl;
    cout << "2. Hollow Diamond" << endl;
    cout << "3. Number Diamond" << endl;
    cout << "4. Alphabet Diamond" << endl;
    cout << "5. Increasing Number Diamond" << endl;
    cout << "\nEnter choice: ";
    cin >> choice;
    
    cout << "Enter the number of rows (n): ";
    cin >> n;
    
    if(n <= 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << endl;
    
    switch(choice) {
        case 1:
            printDiamondPattern(n);
            break;
        case 2:
            printHollowDiamond(n);
            break;
        case 3:
            printNumberDiamond(n);
            break;
        case 4:
            printAlphabetDiamond(n);
            break;
        case 5:
            printIncreasingNumberDiamond(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
