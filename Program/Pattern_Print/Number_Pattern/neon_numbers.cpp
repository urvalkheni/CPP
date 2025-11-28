// Find Neon numbers (sum of digits of square equals the number)
#include <iostream>
using namespace std;

int digitSum(long long n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isNeon(int n) {
    long long sq = (long long)n * n;
    return digitSum(sq) == n;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Neon numbers: ";
    if(!(cin >> start >> end) || start < 0 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Neon numbers between " << start << " and " << end << ":\n";
    for(int i = start; i <= end; i++) {
        if(isNeon(i)) {
            cout << i << " (square: " << (long long)i*i << ") ";
        }
    }
    cout << '\n';
    return 0;
}
