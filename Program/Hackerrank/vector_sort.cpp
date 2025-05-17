#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

int main() {
    int n;
    cin >> n; // Read number of integers

    vector<int> v;

    // Read integers and push into vector
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // Sort the vector
    sort(v.begin(), v.end());

    // Print the sorted elements
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}
