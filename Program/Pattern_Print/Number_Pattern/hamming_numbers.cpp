// Generate Hamming numbers (numbers with only 2,3,5 as prime factors)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter how many Hamming numbers to generate: ";
    if(!(cin >> n) || n <= 0 || n > 100) {
        cout << "Invalid input (use 1-100)\n";
        return 1;
    }
    vector<long long> h(n);
    h[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    for(int i = 1; i < n; i++) {
        long long next2 = h[i2] * 2;
        long long next3 = h[i3] * 3;
        long long next5 = h[i5] * 5;
        h[i] = min({next2, next3, next5});
        if(h[i] == next2) i2++;
        if(h[i] == next3) i3++;
        if(h[i] == next5) i5++;
    }
    cout << "First " << n << " Hamming numbers:\n";
    for(int i = 0; i < n; i++) {
        cout << h[i] << ' ';
        if((i + 1) % 10 == 0) cout << '\n';
    }
    cout << '\n';
    return 0;
}
