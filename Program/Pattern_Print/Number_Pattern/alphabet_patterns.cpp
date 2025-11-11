#include <iostream>
#include <cctype>
using namespace std;

// Alphabet Pattern Collection (Enhanced with Color Support)

// Pattern 1: Triangle with Alphabets
void printAlphabetTriangle(int n) {
    cout << "\n--- Alphabet Triangle ---" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// Pattern 2: Pyramid with Alphabets
void printAlphabetPyramid(int n) {
    cout << "\n--- Alphabet Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Alphabets
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// Pattern 3: Same Character in Each Row
void printSameCharRow(int n) {
    cout << "\n--- Same Character Row ---" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

// Pattern 4: Palindrome Alphabet Pyramid
void printPalindromeAlphabet(int n) {
    cout << "\n--- Palindrome Alphabet Pyramid ---" << endl;
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        
        // Ascending
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        
        // Descending
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

// Pattern 5: Alphabet Diamond
void printAlphabetDiamond(int n) {
    cout << "\n--- Alphabet Diamond ---" << endl;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// Pattern 6: Reverse Alphabet Triangle
void printReverseAlphabet(int n) {
    cout << "\n--- Reverse Alphabet Triangle ---" << endl;
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

// Pattern 7: Alphabet Square
void printAlphabetSquare(int n) {
    cout << "\n--- Alphabet Square ---" << endl;
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// Pattern 8: Continuous Alphabet Triangle
void printContinuousAlphabet(int n) {
    cout << "\n--- Continuous Alphabet Triangle ---" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
            if (ch > 'Z') ch = 'A';
        }
        cout << endl;
    }
}

// Pattern 9: Alphabet Inverted Pyramid
void printAlphabetInvertedPyramid(int n) {
    cout << "\n--- Alphabet Inverted Pyramid ---" << endl;
    for (int i = n; i >= 1; i--) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // Alphabets
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// Pattern 10: Alphabet Hollow Triangle
void printAlphabetHollowTriangle(int n) {
    cout << "\n--- Alphabet Hollow Triangle ---" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << ch << " ";
            } else {
                cout << "  ";
            }
            ch++;
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    
    cout << "=== ALPHABET PATTERN COLLECTION ===" << endl;
    cout << "\n1. Alphabet Triangle" << endl;
    cout << "2. Alphabet Pyramid" << endl;
    cout << "3. Same Character Row" << endl;
    cout << "4. Palindrome Alphabet Pyramid" << endl;
    cout << "5. Alphabet Diamond" << endl;
    cout << "6. Reverse Alphabet Triangle" << endl;
    cout << "7. Alphabet Square" << endl;
    cout << "8. Continuous Alphabet Triangle" << endl;
    cout << "9. Alphabet Inverted Pyramid" << endl;
    cout << "10. Alphabet Hollow Triangle" << endl;
    cout << "11. Show All Patterns" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    if (choice == 11) {
        n = 5;
        cout << "\nShowing all patterns with n=5:\n";
        printAlphabetTriangle(n);
        printAlphabetPyramid(n);
        printSameCharRow(n);
        printPalindromeAlphabet(n);
        printAlphabetDiamond(n);
        printReverseAlphabet(n);
        printAlphabetSquare(n);
        printContinuousAlphabet(n);
        printAlphabetInvertedPyramid(n);
        printAlphabetHollowTriangle(n);
    } else {
        cout << "Enter size: ";
        cin >> n;
        
        switch(choice) {
            case 1:
                printAlphabetTriangle(n);
                break;
            case 2:
                printAlphabetPyramid(n);
                break;
            case 3:
                printSameCharRow(n);
                break;
            case 4:
                printPalindromeAlphabet(n);
                break;
            case 5:
                printAlphabetDiamond(n);
                break;
            case 6:
                printReverseAlphabet(n);
                break;
            case 7:
                printAlphabetSquare(n);
                break;
            case 8:
                printContinuousAlphabet(n);
                break;
            case 9:
                printAlphabetInvertedPyramid(n);
                break;
            case 10:
                printAlphabetHollowTriangle(n);
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }
    }
    
    cout << "\n=== ALPHABET PATTERN INFO ===" << endl;
    cout << "✓ Uses characters A-Z" << endl;
    cout << "✓ Wraps around after Z" << endl;
    cout << "✓ Various triangle and pyramid styles" << endl;
    cout << "✓ Good for learning ASCII manipulation" << endl;
    
    return 0;
}
