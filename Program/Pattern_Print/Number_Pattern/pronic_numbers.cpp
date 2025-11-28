// Find Pronic numbers (product of two consecutive integers n*(n+1))
#include <iostream>
#include <cmath>
using namespace std;

bool isPronic(int n) {
    int root = sqrt(n);
    return root * (root + 1) == n;
}

int main() {
    int start, end;
    cout << "Enter range (start end) to find Pronic numbers: ";
    if(!(cin >> start >> end) || start < 0 || end < start) {
        cout << "Invalid input\n";
        return 1;
    }
    cout << "Pronic numbers between " << start << " and " << end << ":\n";
    for(int i = start; i <= end; i++) {
        if(isPronic(i)) {
            int root = sqrt(i);
            cout << i << " (" << root << "*" << (root+1) << ") ";
        }
    }
    cout << '\n';
    return 0;
}
