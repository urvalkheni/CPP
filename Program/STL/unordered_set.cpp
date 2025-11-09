#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// Unordered Set Operations
int main() {
    cout << "=== UNORDERED_SET OPERATIONS ===" << endl;
    
    // 1. Creating unordered sets
    cout << "\n--- Creating Unordered Sets ---" << endl;
    unordered_set<int> us1;
    unordered_set<int> us2 = {10, 20, 30, 40, 50};
    unordered_set<string> us3 = {"apple", "banana", "cherry"};
    
    cout << "us2: ";
    for (int x : us2) cout << x << " ";
    cout << "\nus3: ";
    for (string s : us3) cout << s << " ";
    cout << endl;
    
    // 2. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    us1.insert(5);
    us1.insert(10);
    us1.insert(15);
    us1.insert(10);  // Duplicate, won't be inserted
    us1.emplace(20);
    
    cout << "us1 after inserts: ";
    for (int x : us1) cout << x << " ";
    cout << "\nSize: " << us1.size() << endl;
    
    // 3. Find operation
    cout << "\n--- Find Operations ---" << endl;
    if (us1.find(10) != us1.end()) {
        cout << "10 is present in us1" << endl;
    } else {
        cout << "10 is NOT present in us1" << endl;
    }
    
    if (us1.find(25) != us1.end()) {
        cout << "25 is present in us1" << endl;
    } else {
        cout << "25 is NOT present in us1" << endl;
    }
    
    // 4. Count operation
    cout << "\n--- Count Operations ---" << endl;
    cout << "Count of 10: " << us1.count(10) << endl;
    cout << "Count of 100: " << us1.count(100) << endl;
    
    // 5. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    unordered_set<int> us4 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << "Before erase: ";
    for (int x : us4) cout << x << " ";
    cout << endl;
    
    us4.erase(5);  // Erase by value
    cout << "After erasing 5: ";
    for (int x : us4) cout << x << " ";
    cout << endl;
    
    // Erase by iterator
    auto it = us4.find(3);
    if (it != us4.end()) {
        us4.erase(it);
        cout << "After erasing 3: ";
        for (int x : us4) cout << x << " ";
        cout << endl;
    }
    
    // 6. Size and empty
    cout << "\n--- Size and Empty ---" << endl;
    cout << "Size of us4: " << us4.size() << endl;
    cout << "Is us4 empty: " << (us4.empty() ? "Yes" : "No") << endl;
    
    us4.clear();
    cout << "After clear, size: " << us4.size() << endl;
    cout << "Is us4 empty: " << (us4.empty() ? "Yes" : "No") << endl;
    
    // 7. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    unordered_set<int> us5 = {100, 200, 300, 400, 500};
    
    cout << "Iteration: ";
    for (auto it = us5.begin(); it != us5.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 8. Practical example - Remove duplicates
    cout << "\n--- Practical Example: Remove Duplicates ---" << endl;
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    unordered_set<int> unique(arr, arr + n);
    cout << "After removing duplicates: ";
    for (int x : unique) cout << x << " ";
    cout << "\nOriginal count: " << n << ", Unique count: " << unique.size() << endl;
    
    // 9. Set operations using algorithms
    cout << "\n--- Set Operations ---" << endl;
    unordered_set<int> setA = {1, 2, 3, 4, 5};
    unordered_set<int> setB = {4, 5, 6, 7, 8};
    
    cout << "Set A: ";
    for (int x : setA) cout << x << " ";
    cout << "\nSet B: ";
    for (int x : setB) cout << x << " ";
    cout << endl;
    
    // Union
    unordered_set<int> unionSet = setA;
    for (int x : setB) {
        unionSet.insert(x);
    }
    cout << "Union (A ∪ B): ";
    for (int x : unionSet) cout << x << " ";
    cout << endl;
    
    // Intersection
    unordered_set<int> intersectionSet;
    for (int x : setA) {
        if (setB.find(x) != setB.end()) {
            intersectionSet.insert(x);
        }
    }
    cout << "Intersection (A ∩ B): ";
    for (int x : intersectionSet) cout << x << " ";
    cout << endl;
    
    // Difference
    unordered_set<int> differenceSet;
    for (int x : setA) {
        if (setB.find(x) == setB.end()) {
            differenceSet.insert(x);
        }
    }
    cout << "Difference (A - B): ";
    for (int x : differenceSet) cout << x << " ";
    cout << endl;
    
    // 10. Bucket information
    cout << "\n--- Bucket Information ---" << endl;
    cout << "Bucket count: " << us2.bucket_count() << endl;
    cout << "Load factor: " << us2.load_factor() << endl;
    cout << "Max load factor: " << us2.max_load_factor() << endl;
    
    // 11. Reserve
    unordered_set<int> us6;
    us6.reserve(100);
    cout << "\nAfter reserve(100), bucket count: " << us6.bucket_count() << endl;
    
    // 12. Membership check
    cout << "\n--- Membership Check ---" << endl;
    unordered_set<string> validUsers = {"admin", "user1", "user2", "guest"};
    string checkUser = "user1";
    
    if (validUsers.count(checkUser)) {
        cout << checkUser << " is a valid user" << endl;
    } else {
        cout << checkUser << " is NOT a valid user" << endl;
    }
    
    // 13. Properties
    cout << "\n--- Unordered Set Properties ---" << endl;
    cout << "1. No duplicate elements" << endl;
    cout << "2. Hash table based implementation" << endl;
    cout << "3. Average O(1) for insert, erase, find" << endl;
    cout << "4. No specific order of elements" << endl;
    cout << "5. Faster than set for single element operations" << endl;
    cout << "6. Cannot store duplicate values" << endl;
    
    return 0;
}
