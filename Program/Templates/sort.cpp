#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];  // VLA: works in GCC, not standard in C++

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Corrected sort syntax
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}