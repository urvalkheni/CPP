#include <iostream>
#include <cmath>
using namespace std;

// Program 7: Advanced Mathematical Operations using Recursion

// GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Power function (a^b)
long long power(int a, int b) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        long long half = power(a, b / 2);
        return half * half;
    }
    return a * power(a, b - 1);
}

// Check if number is prime (helper function)
bool isPrimeHelper(int n, int divisor) {
    if (n <= 2) return (n == 2);
    if (divisor * divisor > n) return true;
    if (n % divisor == 0) return false;
    return isPrimeHelper(n, divisor + 1);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    return isPrimeHelper(n, 2);
}

// Nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Factorial
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Sum of natural numbers
int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}

// Product of digits
int productOfDigits(int n) {
    if (n == 0) return 1;
    return (n % 10) * productOfDigits(n / 10);
}

// Check if number is perfect number
int sumOfDivisors(int n, int i) {
    if (i > n / 2) return 0;
    if (n % i == 0) return i + sumOfDivisors(n, i + 1);
    return sumOfDivisors(n, i + 1);
}

bool isPerfectNumber(int n) {
    return sumOfDivisors(n, 1) == n;
}

int main() {
    int choice, num, num2;
    
    cout << "=== ADVANCED MATHEMATICAL OPERATIONS ===" << endl;
    cout << "\n1. GCD (Greatest Common Divisor)" << endl;
    cout << "2. LCM (Least Common Multiple)" << endl;
    cout << "3. Power (a^b)" << endl;
    cout << "4. Check Prime Number" << endl;
    cout << "5. Fibonacci Number" << endl;
    cout << "6. Factorial" << endl;
    cout << "7. Sum of Natural Numbers" << endl;
    cout << "8. Product of Digits" << endl;
    cout << "9. Perfect Number Check" << endl;
    cout << "\nEnter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num >> num2;
            cout << "GCD of " << num << " and " << num2 << " is: " << gcd(num, num2) << endl;
            break;
            
        case 2:
            cout << "Enter two numbers: ";
            cin >> num >> num2;
            cout << "LCM of " << num << " and " << num2 << " is: " << lcm(num, num2) << endl;
            break;
            
        case 3:
            cout << "Enter base and exponent: ";
            cin >> num >> num2;
            cout << num << "^" << num2 << " = " << power(num, num2) << endl;
            break;
            
        case 4:
            cout << "Enter a number: ";
            cin >> num;
            if (isPrime(num)) {
                cout << num << " is a prime number." << endl;
            } else {
                cout << num << " is not a prime number." << endl;
            }
            break;
            
        case 5:
            cout << "Enter n (for nth Fibonacci): ";
            cin >> num;
            cout << "Fibonacci(" << num << ") = " << fibonacci(num) << endl;
            cout << "\nFirst " << num << " Fibonacci numbers: ";
            for (int i = 0; i < num; i++) {
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            break;
            
        case 6:
            cout << "Enter a number: ";
            cin >> num;
            cout << "Factorial of " << num << " = " << factorial(num) << endl;
            break;
            
        case 7:
            cout << "Enter n: ";
            cin >> num;
            cout << "Sum of first " << num << " natural numbers = " << sumNatural(num) << endl;
            break;
            
        case 8:
            cout << "Enter a number: ";
            cin >> num;
            cout << "Product of digits of " << num << " = " << productOfDigits(num) << endl;
            break;
            
        case 9:
            cout << "Enter a number: ";
            cin >> num;
            if (isPerfectNumber(num)) {
                cout << num << " is a perfect number." << endl;
                cout << "Divisors: ";
                for (int i = 1; i <= num / 2; i++) {
                    if (num % i == 0) cout << i << " ";
                }
                cout << endl;
            } else {
                cout << num << " is not a perfect number." << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}