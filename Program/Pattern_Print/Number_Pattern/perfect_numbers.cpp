// Perfect number checker and finder in a range
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if(n <= 1) return false;
    int sum = 1;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find perfect numbers: ";
    if(!(cin >> start >> end) || start < 1 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Perfect numbers between " << start << " and " << end << ":\n";
    int count = 0;
    for(int i = start; i <= end; i++) {
        if(isPerfect(i)) {
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
