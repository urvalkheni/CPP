#include<iostream>
#include<vector>
using namespace std;

// Basic Fibonacci using recursion
int fibo(int n){
    if(n == 1 || n == 2) return 1;
    int num = fibo(n - 1) + fibo(n - 2);
    return num;
}

// Optimized Fibonacci using memoization
vector<long long> memo(100, -1);
long long fiboMemo(int n) {
    if(n <= 2) return 1;
    if(memo[n] != -1) return memo[n];
    memo[n] = fiboMemo(n - 1) + fiboMemo(n - 2);
    return memo[n];
}

// Iterative Fibonacci
long long fiboIterative(int n) {
    if(n <= 2) return 1;
    long long a = 1, b = 1, c;
    for(int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Print Fibonacci series
void printFiboSeries(int n) {
    cout << "Fibonacci series up to " << n << " terms:" << endl;
    for(int i = 1; i <= n; i++) {
        cout << fiboIterative(i);
        if(i < n) cout << ", ";
    }
    cout << endl;
}

// Check if a number is in Fibonacci sequence
bool isFibonacci(int num) {
    int a = 1, b = 1, c = 1;
    if(num == 1) return true;
    while(c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    return (c == num);
}

// Sum of first n Fibonacci numbers
long long sumFibonacci(int n) {
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += fiboIterative(i);
    }
    return sum;
}

int main(){
    int choice, n;
    
    cout << "=== ENHANCED FIBONACCI CALCULATOR ===" << endl;
    cout << "\n1. Find nth Fibonacci number (Basic Recursion)" << endl;
    cout << "2. Find nth Fibonacci number (Optimized)" << endl;
    cout << "3. Print Fibonacci Series" << endl;
    cout << "4. Compare Recursive vs Iterative" << endl;
    cout << "5. Check if number is Fibonacci" << endl;
    cout << "6. Sum of first n Fibonacci numbers" << endl;
    cout << "7. Fibonacci Table" << endl;
    cout << "\nEnter choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter the number: ";
            cin >> n;
            if(n <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else if(n > 40) {
                cout << "Number too large for basic recursion! Use option 2." << endl;
            } else {
                cout << "The " << n << "th Fibonacci term is: " << fibo(n) << endl;
            }
            break;
            
        case 2:
            cout << "Enter the number: ";
            cin >> n;
            if(n <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else if(n > 90) {
                cout << "Number too large! May cause overflow." << endl;
            } else {
                cout << "The " << n << "th Fibonacci term is: " << fiboMemo(n) << endl;
            }
            break;
            
        case 3:
            cout << "Enter how many terms: ";
            cin >> n;
            if(n <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else {
                printFiboSeries(n);
            }
            break;
            
        case 4:
            cout << "Enter the number: ";
            cin >> n;
            if(n <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else if(n > 40) {
                cout << "Using only iterative for large numbers" << endl;
                cout << "Iterative result: " << fiboIterative(n) << endl;
            } else {
                cout << "Recursive result: " << fibo(n) << endl;
                cout << "Iterative result: " << fiboIterative(n) << endl;
                cout << "Both give the same result!" << endl;
            }
            break;
            
        case 5:
            cout << "Enter a number to check: ";
            cin >> n;
            if(isFibonacci(n)) {
                cout << n << " is a Fibonacci number!" << endl;
            } else {
                cout << n << " is NOT a Fibonacci number." << endl;
            }
            break;
            
        case 6:
            cout << "Enter n: ";
            cin >> n;
            if(n <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else {
                cout << "Sum of first " << n << " Fibonacci numbers: " << sumFibonacci(n) << endl;
            }
            break;
            
        case 7:
            cout << "Enter the limit: ";
            cin >> n;
            if(n <= 0) {
                cout << "Please enter a positive number!" << endl;
            } else if(n > 30) {
                cout << "Limit too large! Showing up to 30." << endl;
                n = 30;
            }
            cout << "\n=== Fibonacci Table ===" << endl;
            cout << "n\tF(n)" << endl;
            cout << "---\t-----" << endl;
            for(int i = 1; i <= n; i++) {
                cout << i << "\t" << fiboIterative(i) << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
