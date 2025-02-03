#include <iostream>
using namespace std;

// Function to find GCD (used in LCM calculation)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // Prevents overflow
}

int main() {
    int num1, num2;
    
    // Taking input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Calculate and display LCM
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;
    
    return 0;
}
