#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);

    // Read vector elements
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int pos;
    cin >> pos; // 1-based position to erase
    v.erase(v.begin() + (pos - 1));

    int a, b;
    cin >> a >> b; // 1-based range
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    // Output size
    cout << v.size() << endl;

    // Output remaining elements
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
