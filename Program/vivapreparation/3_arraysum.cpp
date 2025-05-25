#include <iostream>
using namespace std;

int recursiveSum(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << "Sum: " << recursiveSum(arr, n) << endl;
    return 0;
}
