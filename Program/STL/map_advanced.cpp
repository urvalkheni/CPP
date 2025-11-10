#include <iostream>
#include <map>
using namespace std;

// Map Advanced Operations
int main() {
    cout << "=== MAP ADVANCED OPERATIONS ===" << endl;
    
    // 1. Creating maps
    cout << "\n--- Creating Maps ---" << endl;
    map<int, string> m1;
    map<string, int> m2 = {{"apple", 5}, {"banana", 3}, {"cherry", 8}};
    
    cout << "m2: ";
    for (auto p : m2) {
        cout << "{" << p.first << ":" << p.second << "} ";
    }
    cout << endl;
    
    // 2. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    m1[1] = "One";
    m1[2] = "Two";
    m1.insert({3, "Three"});
    m1.insert(make_pair(4, "Four"));
    m1.emplace(5, "Five");
    
    cout << "m1: ";
    for (auto p : m1) {
        cout << "{" << p.first << ":" << p.second << "} ";
    }
    cout << endl;
    
    // 3. Access elements
    cout << "\n--- Access Elements ---" << endl;
    cout << "m1[2] = " << m1[2] << endl;
    cout << "m1.at(3) = " << m1.at(3) << endl;
    
    // 4. Find operation
    cout << "\n--- Find Operations ---" << endl;
    auto it = m1.find(3);
    if (it != m1.end()) {
        cout << "Key 3 found with value: " << it->second << endl;
    }
    
    if (m1.find(10) == m1.end()) {
        cout << "Key 10 not found" << endl;
    }
    
    // 5. Count operation
    cout << "\n--- Count Operation ---" << endl;
    cout << "Count of key 2: " << m1.count(2) << endl;
    cout << "Count of key 100: " << m1.count(100) << endl;
    
    // 6. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    cout << "Before erase: size = " << m1.size() << endl;
    
    m1.erase(2);  // Erase by key
    cout << "After erasing key 2: ";
    for (auto p : m1) {
        cout << "{" << p.first << ":" << p.second << "} ";
    }
    cout << endl;
    
    // 7. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "Forward iteration: ";
    for (auto it = m1.begin(); it != m1.end(); ++it) {
        cout << "{" << it->first << ":" << it->second << "} ";
    }
    cout << endl;
    
    cout << "Reverse iteration: ";
    for (auto it = m1.rbegin(); it != m1.rend(); ++it) {
        cout << "{" << it->first << ":" << it->second << "} ";
    }
    cout << endl;
    
    // 8. Lower and Upper bound
    cout << "\n--- Lower/Upper Bound ---" << endl;
    map<int, string> m3 = {{1, "a"}, {3, "c"}, {5, "e"}, {7, "g"}};
    
    auto lb = m3.lower_bound(4);
    cout << "Lower bound of 4: {" << lb->first << ":" << lb->second << "}" << endl;
    
    auto ub = m3.upper_bound(3);
    cout << "Upper bound of 3: {" << ub->first << ":" << ub->second << "}" << endl;
    
    // 9. Size and empty
    cout << "\n--- Size and Empty ---" << endl;
    cout << "Size: " << m1.size() << endl;
    cout << "Is empty: " << (m1.empty() ? "Yes" : "No") << endl;
    
    // 10. Swap maps
    cout << "\n--- Swap Maps ---" << endl;
    map<int, string> mA = {{1, "One"}, {2, "Two"}};
    map<int, string> mB = {{10, "Ten"}, {20, "Twenty"}};
    
    cout << "Before swap - mA[1]: " << mA[1] << ", mB[10]: " << mB[10] << endl;
    mA.swap(mB);
    cout << "After swap - mA[10]: " << mA[10] << ", mB[1]: " << mB[1] << endl;
    
    // 11. Frequency counter
    cout << "\n--- Practical: Frequency Counter ---" << endl;
    int arr[] = {1, 2, 3, 2, 1, 3, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    cout << "Frequency of elements:" << endl;
    for (auto p : freq) {
        cout << p.first << " appears " << p.second << " times" << endl;
    }
    
    // 12. Properties
    cout << "\n=== MAP PROPERTIES ===" << endl;
    cout << "✓ Stores key-value pairs" << endl;
    cout << "✓ Keys are unique and sorted" << endl;
    cout << "✓ Red-Black Tree implementation" << endl;
    cout << "✓ Search, insert, delete: O(log n)" << endl;
    cout << "✓ Ordered by key" << endl;
    
    return 0;
}
