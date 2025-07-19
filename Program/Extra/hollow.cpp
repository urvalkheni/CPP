#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
