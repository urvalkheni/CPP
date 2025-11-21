#include <iostream>
using namespace std;

int main() {
    int n; 
    if (!(cin >> n) || n <= 0) return 0;
    int size = 2 * n - 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int top = i, left = j, bottom = size - 1 - i, right = size - 1 - j;
            int layer = min(min(top, bottom), min(left, right));
            cout << (n - layer) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
