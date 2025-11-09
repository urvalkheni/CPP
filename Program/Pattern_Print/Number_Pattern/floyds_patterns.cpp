#include <iostream>
using namespace std;

// Floyd's Triangle Pattern Collection

// Pattern 1: Standard Floyd's Triangle
void printFloydTriangle(int n) {
    cout << "\n--- Floyd's Triangle ---" << endl;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 2: Floyd's Triangle with 0 and 1
void printFloydBinary(int n) {
    cout << "\n--- Floyd's Triangle (Binary) ---" << endl;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num % 2 << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 3: Floyd's Triangle Reverse
void printFloydReverse(int n) {
    cout << "\n--- Floyd's Triangle (Reverse) ---" << endl;
    int total = (n * (n + 1)) / 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << total << " ";
            total--;
        }
        cout << endl;
    }
}

// Pattern 4: Floyd's with Alphabet
void printFloydAlphabet(int n) {
    cout << "\n--- Floyd's Triangle (Alphabet) ---" << endl;
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

// Pattern 5: Floyd's with Even Numbers
void printFloydEven(int n) {
    cout << "\n--- Floyd's Triangle (Even Numbers) ---" << endl;
    int num = 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }
}

// Pattern 6: Floyd's with Odd Numbers
void printFloydOdd(int n) {
    cout << "\n--- Floyd's Triangle (Odd Numbers) ---" << endl;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }
}

// Pattern 7: Floyd's with Squares
void printFloydSquares(int n) {
    cout << "\n--- Floyd's Triangle (Squares) ---" << endl;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num * num << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 8: Floyd's Inverted
void printFloydInverted(int n) {
    cout << "\n--- Floyd's Triangle (Inverted) ---" << endl;
    int num = 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 9: Floyd's with Alternating Signs
void printFloydSigned(int n) {
    cout << "\n--- Floyd's Triangle (Signed) ---" << endl;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (num % 2 == 1) {
                cout << "+" << num << " ";
            } else {
                cout << "-" << num << " ";
            }
            num++;
        }
        cout << endl;
    }
}

// Pattern 10: Floyd's with Row Number
void printFloydRowMultiple(int n) {
    cout << "\n--- Floyd's Triangle (Row Multiples) ---" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    
    cout << "=== FLOYD'S TRIANGLE PATTERNS ===" << endl;
    cout << "\n1. Standard Floyd's Triangle" << endl;
    cout << "2. Floyd's with Binary (0,1)" << endl;
    cout << "3. Floyd's Reverse" << endl;
    cout << "4. Floyd's with Alphabet" << endl;
    cout << "5. Floyd's with Even Numbers" << endl;
    cout << "6. Floyd's with Odd Numbers" << endl;
    cout << "7. Floyd's with Squares" << endl;
    cout << "8. Floyd's Inverted" << endl;
    cout << "9. Floyd's with Signed Numbers" << endl;
    cout << "10. Floyd's Row Multiples" << endl;
    cout << "11. Show All Patterns" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    if (choice == 11) {
        n = 5;
        cout << "\nShowing all patterns with n=5:\n";
        printFloydTriangle(n);
        printFloydBinary(n);
        printFloydReverse(n);
        printFloydAlphabet(n);
        printFloydEven(n);
        printFloydOdd(n);
        printFloydSquares(n);
        printFloydInverted(n);
        printFloydSigned(n);
        printFloydRowMultiple(n);
    } else {
        cout << "Enter number of rows: ";
        cin >> n;
        
        switch(choice) {
            case 1:
                printFloydTriangle(n);
                break;
            case 2:
                printFloydBinary(n);
                break;
            case 3:
                printFloydReverse(n);
                break;
            case 4:
                printFloydAlphabet(n);
                break;
            case 5:
                printFloydEven(n);
                break;
            case 6:
                printFloydOdd(n);
                break;
            case 7:
                printFloydSquares(n);
                break;
            case 8:
                printFloydInverted(n);
                break;
            case 9:
                printFloydSigned(n);
                break;
            case 10:
                printFloydRowMultiple(n);
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }
    }
    
    cout << "\n=== FLOYD'S TRIANGLE INFO ===" << endl;
    cout << "✓ Named after Robert Floyd" << endl;
    cout << "✓ Row i contains i numbers" << endl;
    cout << "✓ Total numbers in n rows: n(n+1)/2" << endl;
    cout << "✓ Used for understanding number patterns" << endl;
    
    return 0;
}
