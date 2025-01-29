#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0, temp = num;
    while (temp) {
        temp /= 10;
        digits++;
    }
    temp = originalNum;
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == originalNum;
}

// Function to check if a number is a Perfect number
bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) sum += i;
    }
    return sum == num && num != 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPrime(num))
        cout << num << " is a Prime number.\n";
    else
        cout << num << " is not a Prime number.\n";
    
    if (isArmstrong(num))
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";
    
    if (isPerfect(num))
        cout << num << " is a Perfect number.\n";
    else
        cout << num << " is not a Perfect number.\n";
    
    return 0;
}