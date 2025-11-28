// Find Kaprekar numbers in a given range
// A Kaprekar number is where n^2 split into two parts and added equals n
#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int n) {
    if(n == 1) return true;
    long long sq = (long long)n * n;
    int digits = 0;
    long long temp = sq;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    for(int i = 1; i < digits; i++) {
        long long divisor = pow(10, i);
        long long right = sq % divisor;
        long long left = sq / divisor;
        if(right > 0 && left + right == n) return true;
    }
    return false;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Kaprekar numbers: ";
    if(!(cin >> start >> end) || start < 1 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Kaprekar numbers between " << start << " and " << end << ":\n";
    for(int i = start; i <= end; i++) {
        if(isKaprekar(i)) {
            cout << i << " ";
        }
    }
    cout << '\n';
    return 0;
}
