#include <iostream>
using namespace std;

int binomial(int n, int k) {
    int res = 1;
    if (k > n - k) k = n - k;

    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int s = 0; s < n - i - 1; s++) cout << "  ";

        for (int j = 0; j <= i; j++) {
            cout << binomial(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}
