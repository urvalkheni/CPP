#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "Swapped ints: " << x << ", " << y << endl;

    double a = 2.5, b = 3.7;
    swapValues(a, b);
    cout << "Swapped doubles: " << a << ", " << b << endl;

    vector<int> v = {5, 3, 7, 2, 1};
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted (desc): ";
    for (int n : v) cout << n << " ";
    cout << endl;
    return 0;
}
