// Find all Armstrong numbers in a given range
#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Armstrong numbers: ";
    if(!(cin >> start >> end) || start < 0 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Armstrong numbers between " << start << " and " << end << ":\n";
    int count = 0;
    for(int i = start; i <= end; i++) {
        if(isArmstrong(i)) {
            cout << i << ' ';
            count++;
        }
    }
    if(count == 0) {
        cout << "None found";
    }
    cout << '\n';
    return 0;
}
