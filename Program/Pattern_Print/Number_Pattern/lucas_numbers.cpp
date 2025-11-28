// Generate Lucas numbers sequence (similar to Fibonacci but starts 2,1)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of Lucas numbers to generate: ";
    if(!(cin >> n) || n <= 0) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "First " << n << " Lucas numbers:\n";
    long long a = 2, b = 1;
    if(n >= 1) cout << a;
    if(n >= 2) cout << ' ' << b;
    for(int i = 3; i <= n; i++) {
        long long c = a + b;
        cout << ' ' << c;
        a = b;
        b = c;
    }
    cout << '\n';
    return 0;
}
