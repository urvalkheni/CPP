#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        // Print descending numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Print ascending numbers
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
