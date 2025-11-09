#include <iostream>
#include <cmath>
using namespace std;

// GCD, LCM and Number Theory Operations using Recursion

// GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Check if number is prime (recursive)
bool isPrime(int n, int divisor = 2) {
    if (n <= 2) return (n == 2);
    if (n % divisor == 0) return false;
    if (divisor * divisor > n) return true;
    return isPrime(n, divisor + 1);
}

// Find nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Power function (a^b) using recursion
long long power(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    long long half = power(a, b / 2);
    if (b % 2 == 0) {
        return half * half;
    } else {
        return a * half * half;
    }
}

// Sum of digits
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// Product of digits
int productOfDigits(int n) {
    if (n < 10) return n;
    return (n % 10) * productOfDigits(n / 10);
}

// Count digits
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

// Check if number is perfect square
bool isPerfectSquare(int n, int i = 1) {
    if (i * i == n) return true;
    if (i * i > n) return false;
    return isPerfectSquare(n, i + 1);
}

// Find factorial
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Sum of natural numbers
int sumOfN(int n) {
    if (n == 0) return 0;
    return n + sumOfN(n - 1);
}

// Print all prime factors
void primeFactors(int n, int divisor = 2) {
    if (n <= 1) return;
    
    if (n % divisor == 0) {
        cout << divisor << " ";
        primeFactors(n / divisor, divisor);
    } else {
        primeFactors(n, divisor + 1);
    }
}

int main() {
    int choice;
    
    cout << "=== NUMBER THEORY OPERATIONS (RECURSION) ===" << endl;
    cout << "\n1. GCD (Greatest Common Divisor)" << endl;
    cout << "2. LCM (Least Common Multiple)" << endl;
    cout << "3. Check Prime Number" << endl;
    cout << "4. Fibonacci Number" << endl;
    cout << "5. Power (a^b)" << endl;
    cout << "6. Sum of Digits" << endl;
    cout << "7. Product of Digits" << endl;
    cout << "8. Count Digits" << endl;
    cout << "9. Perfect Square Check" << endl;
    cout << "10. Factorial" << endl;
    cout << "11. Sum of Natural Numbers" << endl;
    cout << "12. Prime Factors" << endl;
    cout << "13. Show All Examples" << endl;
    cout << "\nEnter choice (1-13): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
            break;
        }
        
        case 2: {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "LCM(" << a << ", " << b << ") = " << lcm(a, b) << endl;
            break;
        }
        
        case 3: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            if (isPrime(n)) {
                cout << n << " is a prime number." << endl;
            } else {
                cout << n << " is NOT a prime number." << endl;
            }
            break;
        }
        
        case 4: {
            int n;
            cout << "Enter n (position): ";
            cin >> n;
            cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
            
            cout << "First " << n << " Fibonacci numbers: ";
            for (int i = 0; i < n; i++) {
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            break;
        }
        
        case 5: {
            int a, b;
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << a << "^" << b << " = " << power(a, b) << endl;
            break;
        }
        
        case 6: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << "Sum of digits of " << n << " = " << sumOfDigits(n) << endl;
            break;
        }
        
        case 7: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << "Product of digits of " << n << " = " << productOfDigits(n) << endl;
            break;
        }
        
        case 8: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            int digits = (n == 0) ? 1 : countDigits(n);
            cout << "Number of digits in " << n << " = " << digits << endl;
            break;
        }
        
        case 9: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            if (isPerfectSquare(n)) {
                cout << n << " is a perfect square." << endl;
            } else {
                cout << n << " is NOT a perfect square." << endl;
            }
            break;
        }
        
        case 10: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << n << "! = " << factorial(n) << endl;
            break;
        }
        
        case 11: {
            int n;
            cout << "Enter n: ";
            cin >> n;
            cout << "Sum of first " << n << " natural numbers = " << sumOfN(n) << endl;
            break;
        }
        
        case 12: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << "Prime factors of " << n << ": ";
            primeFactors(n);
            cout << endl;
            break;
        }
        
        case 13: {
            cout << "\n--- All Examples ---" << endl;
            
            cout << "\nGCD(48, 18) = " << gcd(48, 18) << endl;
            cout << "LCM(12, 15) = " << lcm(12, 15) << endl;
            
            cout << "\nPrime check:" << endl;
            for (int i = 2; i <= 20; i++) {
                if (isPrime(i)) cout << i << " ";
            }
            cout << endl;
            
            cout << "\nFirst 10 Fibonacci: ";
            for (int i = 0; i < 10; i++) {
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            
            cout << "\n2^10 = " << power(2, 10) << endl;
            cout << "Sum of digits of 12345 = " << sumOfDigits(12345) << endl;
            cout << "Product of digits of 123 = " << productOfDigits(123) << endl;
            cout << "5! = " << factorial(5) << endl;
            cout << "Sum of first 100 natural numbers = " << sumOfN(100) << endl;
            
            cout << "\nPrime factors of 60: ";
            primeFactors(60);
            cout << endl;
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== NUMBER THEORY INFO ===" << endl;
    cout << "✓ All operations use recursion" << endl;
    cout << "✓ GCD: Euclidean algorithm O(log min(a,b))" << endl;
    cout << "✓ Power: Fast exponentiation O(log b)" << endl;
    cout << "✓ Prime check: O(√n) recursive divisions" << endl;
    
    return 0;
}
