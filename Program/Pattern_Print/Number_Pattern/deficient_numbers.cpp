// Find Deficient numbers (sum of proper divisors < number itself)
#include <iostream>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 1;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

bool isDeficient(int n) {
    if(n <= 1) return false;
    return sumOfDivisors(n) < n;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Deficient numbers: ";
    if(!(cin >> start >> end) || start < 1 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Deficient numbers between " << start << " and " << end << ":\n";
    int count = 0;
    for(int i = start; i <= end; i++) {
        if(isDeficient(i)) {
            cout << i << " ";
            count++;
            if(count % 15 == 0) cout << '\n';
        }
    }
    cout << "\nTotal: " << count << '\n';
    return 0;
}
