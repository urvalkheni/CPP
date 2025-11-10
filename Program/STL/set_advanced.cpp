#include <iostream>
#include <set>
using namespace std;

// Set Advanced Operations
int main() {
    cout << "=== SET ADVANCED OPERATIONS ===" << endl;
    
    // 1. Creating sets
    cout << "\n--- Creating Sets ---" << endl;
    set<int> s1;
    set<int> s2 = {5, 2, 8, 1, 9, 3};
    set<string> s3 = {"apple", "banana", "cherry"};
    
    cout << "s2: ";
    for (int x : s2) cout << x << " ";
    cout << "\ns3: ";
    for (string s : s3) cout << s << " ";
    cout << endl;
    
    // 2. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    s1.insert(10);
    s1.insert(5);
    s1.insert(15);
    s1.insert(5);  // Duplicate, won't be inserted
    s1.emplace(20);
    
    cout << "s1 after inserts: ";
    for (int x : s1) cout << x << " ";
    cout << "\nSize: " << s1.size() << endl;
    
    // 3. Find operation
    cout << "\n--- Find Operations ---" << endl;
    if (s1.find(10) != s1.end()) {
        cout << "10 is present" << endl;
    }
    
    if (s1.find(100) == s1.end()) {
        cout << "100 is NOT present" << endl;
    }
    
    // 4. Count operation
    cout << "\n--- Count Operation ---" << endl;
    cout << "Count of 10: " << s1.count(10) << endl;
    cout << "Count of 100: " << s1.count(100) << endl;
    
    // 5. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    set<int> s4 = {1, 2, 3, 4, 5, 6, 7};
    
    cout << "Before erase: ";
    for (int x : s4) cout << x << " ";
    cout << endl;
    
    s4.erase(4);  // Erase by value
    cout << "After erasing 4: ";
    for (int x : s4) cout << x << " ";
    cout << endl;
    
    // 6. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "Forward: ";
    for (auto it = s4.begin(); it != s4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse: ";
    for (auto it = s4.rbegin(); it != s4.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 7. Lower and Upper bound
    cout << "\n--- Lower/Upper Bound ---" << endl;
    set<int> s5 = {1, 3, 5, 7, 9, 11};
    
    auto lb = s5.lower_bound(6);
    cout << "Lower bound of 6: " << *lb << endl;
    
    auto ub = s5.upper_bound(5);
    cout << "Upper bound of 5: " << *ub << endl;
    
    // 8. Set operations
    cout << "\n--- Set Operations ---" << endl;
    set<int> setA = {1, 2, 3, 4, 5};
    set<int> setB = {4, 5, 6, 7, 8};
    
    cout << "Set A: ";
    for (int x : setA) cout << x << " ";
    cout << "\nSet B: ";
    for (int x : setB) cout << x << " ";
    cout << endl;
    
    // Union
    set<int> unionSet;
    for (int x : setA) unionSet.insert(x);
    for (int x : setB) unionSet.insert(x);
    cout << "Union: ";
    for (int x : unionSet) cout << x << " ";
    cout << endl;
    
    // Intersection
    set<int> intersectionSet;
    for (int x : setA) {
        if (setB.find(x) != setB.end()) {
            intersectionSet.insert(x);
        }
    }
    cout << "Intersection: ";
    for (int x : intersectionSet) cout << x << " ";
    cout << endl;
    
    // 9. Size and empty
    cout << "\n--- Size and Empty ---" << endl;
    cout << "Size of s1: " << s1.size() << endl;
    cout << "Is s1 empty: " << (s1.empty() ? "Yes" : "No") << endl;
    
    s1.clear();
    cout << "After clear, size: " << s1.size() << endl;
    
    // 10. Swap sets
    cout << "\n--- Swap Sets ---" << endl;
    set<int> sA = {1, 2, 3};
    set<int> sB = {10, 20, 30};
    
    cout << "Before swap - sA: ";
    for (int x : sA) cout << x << " ";
    cout << endl;
    
    sA.swap(sB);
    cout << "After swap - sA: ";
    for (int x : sA) cout << x << " ";
    cout << endl;
    
    // 11. Remove duplicates
    cout << "\n--- Remove Duplicates ---" << endl;
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    set<int> unique(arr, arr + n);
    cout << "After removing duplicates: ";
    for (int x : unique) cout << x << " ";
    cout << endl;
    
    // 12. Properties
    cout << "\n=== SET PROPERTIES ===" << endl;
    cout << "✓ Stores unique elements" << endl;
    cout << "✓ Elements are sorted" << endl;
    cout << "✓ Red-Black Tree implementation" << endl;
    cout << "✓ Search, insert, delete: O(log n)" << endl;
    cout << "✓ No duplicate values" << endl;
    cout << "✓ Cannot modify elements directly" << endl;
    
    return 0;
}
