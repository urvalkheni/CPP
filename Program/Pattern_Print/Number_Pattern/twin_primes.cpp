// Find Twin primes (prime pairs with difference of 2)
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Twin primes: ";
    if(!(cin >> start >> end) || start < 2 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Twin prime pairs between " << start << " and " << end << ":\n";
    int count = 0;
    for(int i = start; i <= end - 2; i++) {
        if(isPrime(i) && isPrime(i + 2)) {
            cout << "(" << i << ", " << (i + 2) << ") ";
            count++;
            if(count % 5 == 0) cout << '\n';
        }
    }
    cout << "\nTotal pairs: " << count << '\n';
    return 0;
}
