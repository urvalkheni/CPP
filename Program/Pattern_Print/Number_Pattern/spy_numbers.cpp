// Find Spy numbers (sum of digits equals product of digits)
#include <iostream>
using namespace std;

bool isSpy(int n) {
    int sum = 0, product = 1;
    int temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }
    return sum == product;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Spy numbers: ";
    if(!(cin >> start >> end) || start < 0 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Spy numbers between " << start << " and " << end << ":\n";
    for(int i = start; i <= end; i++) {
        if(isSpy(i)) {
            cout << i << " ";
        }
    }
    cout << '\n';
    return 0;
}
