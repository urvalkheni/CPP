#include <iostream>
#include <cstdlib>
using namespace std;

// Function to find GCD (used in LCM calculation)
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;
    
    // Taking input from user
    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input." << endl;
        return 1;
    }
    
    // Calculate and display LCM
    int result = lcm(num1, num2);
    if (result == 0) {
        cout << "LCM is 0 because at least one input is 0." << endl;
    } else {
        cout << "LCM of " << num1 << " and " << num2 << " is " << result << endl;
    }
    
    return 0;
}
