// Find Harshad numbers (numbers divisible by sum of their digits)
#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isHarshad(int n) {
    if(n == 0) return false;
    return n % digitSum(n) == 0;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Harshad numbers: ";
    if(!(cin >> start >> end) || start < 1 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Harshad numbers between " << start << " and " << end << ":\n";
    int count = 0;
    for(int i = start; i <= end; i++) {
        if(isHarshad(i)) {
            cout << i << " ";
            count++;
            if(count % 15 == 0) cout << '\n';
        }
    }
    cout << "\nTotal: " << count << '\n';
    return 0;
}
