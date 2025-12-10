#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    if (!(cin >> num)) {
        cout << "Invalid input." << endl;
        return 1;
    }
    
    if (num < 0) {
        cout << "Note: Reversing a negative number reverses only digits." << endl;
    }
    
    int reversedNum = reverseNumber(abs(num));
    cout << "Reversed number: " << (num < 0 ? -reversedNum : reversedNum) << endl;
    
    return 0;
}

