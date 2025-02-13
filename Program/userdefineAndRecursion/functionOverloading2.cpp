#include<iostream>
using namespace std;

// Function overloading for divide function
float divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (a > b) ? ((float)a / b) : ((float)b / a);
}

bool divide(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

float divide(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int main() {
    int num1, num2, num3;
    float num4, num5, num6;
    
    cout << "This Is Function Overloading Program" << endl;
    cout << "Enter Two Numbers For Divide Function :: ";
    cin >> num1 >> num2;
    cout << "The Division Result is :: " << divide(num1, num2) << endl;
    
    cout << "Enter a Number to Check for Primality :: ";
    cin >> num3;
    cout << num3 << (divide(num3) ? " is Prime" : " is Not Prime") << endl;
    
    cout << "Enter Three Numbers to Find Average :: ";
    cin >> num4 >> num5 >> num6;
    cout << "The Average is :: " << divide(num4, num5, num6) << endl;
    
    return 0;
}
