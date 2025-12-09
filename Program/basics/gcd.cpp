#include <iostream>
#include <cstdlib>
using namespace std;

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0) {
        return 0;
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    // Taking input from user
    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input." << endl;
        return 1;
    }
    
    // Calculate and display GCD
    int result = gcd(num1, num2);
    if (result == 0) {
        cout << "GCD is undefined for both inputs as zero." << endl;
    } else {
        cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;
    }
    
    return 0;
}
