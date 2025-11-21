#include <iostream>
using namespace std;

int main() {
    int n; 
    if (!(cin >> n) || n <= 0) return 0;
    long long a = 0, b = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << b << ' ';
            long long c = a + b;
            a = b; b = c;
        }
        cout << '\n';
    }
    return 0;
}
