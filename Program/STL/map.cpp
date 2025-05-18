#include <iostream>
#include <map>
using namespace std;

void explainMap() {
    cout << "===== map<int, int> =====" << endl;

    map<int, int> mpp1;

    // Insertions
    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});

    // Iteration
    for (auto it : mpp1) {
        cout << it.first << " => " << it.second << endl;
    }

    // Accessing elements (with auto-insertion)
    cout << "Access mpp1[1]: " << mpp1[1] << endl; // Already exists
    cout << "Access mpp1[5]: " << mpp1[5] << endl; // Not present; inserted with 0

    cout << "After accessing mpp1[5]:" << endl;
    for (auto it : mpp1) {
        cout << it.first << " => " << it.second << endl;
    }

    cout << "\n===== map<pair<int, int>, int> =====" << endl;

    map<pair<int, int>, int> mpp2;

    // Insertions
    mpp2[{1, 2}] = 100;
    mpp2[{2, 4}] = 200;
    mpp2[{3, 1}] = 300;

    // Iteration
    for (auto it : mpp2) {
        cout << "(" << it.first.first << ", " << it.first.second << ") => " << it.second << endl;
    }

    // Accessing a key
    cout << "Access mpp2[{2,4}]: " << mpp2[{2, 4}] << endl;
}

int main() {
    explainMap();
    return 0;
}
