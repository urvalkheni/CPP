#include<iostream>
using namespace std;

// Calculate factorial using recursion
long long factorial(int a){
    if(a == 0 || a == 1){
        // Base case: 0! and 1! is 1
        return 1;
    }
    return a * factorial(a - 1);
}

// Display factorial calculation step by step
void displayFactorialSteps(int n) {
    cout << n << "! = ";
    for(int i = n; i >= 1; i--) {
        cout << i;
        if(i > 1) cout << " x ";
    }
    cout << " = " << factorial(n) << endl;
}

// Calculate factorial iteratively for comparison
long long factorialIterative(int n) {
    long long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Calculate double factorial (n!!)
long long doubleFactorial(int n) {
    if(n <= 0) return 1;
    if(n == 1 || n == 2) return n;
    return n * doubleFactorial(n - 2);
}

int main(){
    int choice, n;
    
    cout << "=== ENHANCED FACTORIAL CALCULATOR ===" << endl;
    cout << "\n1. Calculate Factorial" << endl;
    cout << "2. Display Factorial with Steps" << endl;
    cout << "3. Compare Recursive vs Iterative" << endl;
    cout << "4. Calculate Double Factorial (n!!)" << endl;
    cout << "5. Factorial Table" << endl;
    cout << "\nEnter choice: ";
    
    if(!(cin >> choice) || choice < 1 || choice > 5) {
        cout << "Invalid choice!" << endl;
        return 1;
    }
    
    switch(choice) {
        case 1:
            cout << "Enter the number to find factorial: ";
            cin >> n;
            if(n < 0) {
                cout << "Factorial is not defined for negative numbers!" << endl;
            } else if(n > 20) {
                cout << "Number too large! May cause overflow." << endl;
            } else {
                cout << "The factorial of " << n << " is " << factorial(n) << endl;
            }
            break;
            
        case 2:
            cout << "Enter the number: ";
            cin >> n;
            if(n < 0) {
                cout << "Factorial is not defined for negative numbers!" << endl;
            } else if(n > 20) {
                cout << "Number too large!" << endl;
            } else {
                displayFactorialSteps(n);
            }
            break;
            
        case 3:
            cout << "Enter the number: ";
            cin >> n;
            if(n < 0) {
                cout << "Factorial is not defined for negative numbers!" << endl;
            } else if(n > 20) {
                cout << "Number too large!" << endl;
            } else {
                cout << "Recursive result: " << factorial(n) << endl;
                cout << "Iterative result: " << factorialIterative(n) << endl;
                cout << "Both methods give the same result!" << endl;
            }
            break;
            
        case 4:
            cout << "Enter the number for double factorial: ";
            cin >> n;
            if(n < 0) {
                cout << "Double factorial is not defined for negative numbers!" << endl;
            } else {
                cout << n << "!! = " << doubleFactorial(n) << endl;
                cout << "Note: n!! = n * (n-2) * (n-4) * ..." << endl;
            }
            break;
            
        case 5:
            cout << "Enter the limit for factorial table: ";
            cin >> n;
            if(n < 0) {
                cout << "Invalid input!" << endl;
            } else if(n > 20) {
                cout << "Limit too large! Showing up to 20." << endl;
                n = 20;
            }
            cout << "\n=== Factorial Table ===" << endl;
            cout << "n\tn!" << endl;
            cout << "---\t-------" << endl;
            for(int i = 0; i <= n; i++) {
                cout << i << "\t" << factorial(i) << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}