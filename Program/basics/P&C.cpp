#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    cout << "Enter n :: ";
    cin >> n;
    cout << "Enter r :: ";
    cin >> r;
    
    if (n > r) {
        int ncr = factorial(n) / (factorial(r) * factorial(n - r));
        cout << "nCr = " << ncr << endl;
    } else {
        cout << "Please enter the value of n greater than r." << endl;
    }
    
    return 0;
}
