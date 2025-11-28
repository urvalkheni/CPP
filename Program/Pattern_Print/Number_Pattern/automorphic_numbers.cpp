// Find Automorphic numbers (numbers whose square ends with the number itself)
#include <iostream>
#include <cmath>
using namespace std;

bool isAutomorphic(int n) {
    long long sq = (long long)n * n;
    int temp = n;
    while(temp > 0) {
        if(sq % 10 != temp % 10) return false;
        sq /= 10;
        temp /= 10;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Automorphic numbers: ";
    if(!(cin >> start >> end) || start < 0 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Automorphic numbers between " << start << " and " << end << ":\n";
    for(int i = start; i <= end; i++) {
        if(isAutomorphic(i)) {
            cout << i << " (square: " << (long long)i*i << ") ";
        }
    }
    cout << '\n';
    return 0;
}
