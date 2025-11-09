#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Vector Advanced Operations and Algorithms
int main() {
    cout << "=== VECTOR ADVANCED OPERATIONS ===" << endl;
    
    // 1. Vector Initialization Methods
    cout << "\n--- Vector Initialization ---" << endl;
    vector<int> v1;                          // Empty
    vector<int> v2(5);                       // Size 5, default values
    vector<int> v3(5, 10);                   // Size 5, all 10s
    vector<int> v4 = {1, 2, 3, 4, 5};       // Initializer list
    vector<int> v5(v4.begin(), v4.end());    // Copy from another
    
    cout << "v3: ";
    for (int x : v3) cout << x << " ";
    cout << "\nv4: ";
    for (int x : v4) cout << x << " ";
    cout << endl;
    
    // 2. Capacity Operations
    cout << "\n--- Capacity Operations ---" << endl;
    vector<int> vec;
    cout << "Initial capacity: " << vec.capacity() << endl;
    
    vec.push_back(1);
    cout << "After 1 push, capacity: " << vec.capacity() << endl;
    
    vec.reserve(20);
    cout << "After reserve(20), capacity: " << vec.capacity() << endl;
    
    vec.shrink_to_fit();
    cout << "After shrink_to_fit, capacity: " << vec.capacity() << endl;
    
    // 3. Insert Operations
    cout << "\n--- Insert Operations ---" << endl;
    vector<int> v6 = {1, 2, 5, 6};
    cout << "Before insert: ";
    for (int x : v6) cout << x << " ";
    cout << endl;
    
    v6.insert(v6.begin() + 2, 3);           // Insert at position
    v6.insert(v6.begin() + 3, 2, 4);        // Insert 2 copies of 4
    
    cout << "After insert: ";
    for (int x : v6) cout << x << " ";
    cout << endl;
    
    // 4. Erase Operations
    cout << "\n--- Erase Operations ---" << endl;
    vector<int> v7 = {1, 2, 3, 4, 5, 6, 7, 8};
    
    v7.erase(v7.begin() + 2);               // Erase single element
    cout << "After erase at index 2: ";
    for (int x : v7) cout << x << " ";
    cout << endl;
    
    v7.erase(v7.begin() + 1, v7.begin() + 4); // Erase range
    cout << "After erase range [1,4): ";
    for (int x : v7) cout << x << " ";
    cout << endl;
    
    // 5. Algorithms - Sort
    cout << "\n--- Sorting ---" << endl;
    vector<int> v8 = {5, 2, 8, 1, 9, 3, 7};
    
    cout << "Before sort: ";
    for (int x : v8) cout << x << " ";
    cout << endl;
    
    sort(v8.begin(), v8.end());             // Ascending
    cout << "After sort (asc): ";
    for (int x : v8) cout << x << " ";
    cout << endl;
    
    sort(v8.begin(), v8.end(), greater<int>()); // Descending
    cout << "After sort (desc): ";
    for (int x : v8) cout << x << " ";
    cout << endl;
    
    // 6. Binary Search
    cout << "\n--- Binary Search ---" << endl;
    vector<int> v9 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    if (binary_search(v9.begin(), v9.end(), 5)) {
        cout << "5 found in vector" << endl;
    }
    
    auto it = lower_bound(v9.begin(), v9.end(), 5);
    cout << "Lower bound of 5: index " << (it - v9.begin()) << endl;
    
    auto it2 = upper_bound(v9.begin(), v9.end(), 5);
    cout << "Upper bound of 5: index " << (it2 - v9.begin()) << endl;
    
    // 7. Reverse
    cout << "\n--- Reverse ---" << endl;
    vector<int> v10 = {1, 2, 3, 4, 5};
    
    cout << "Before reverse: ";
    for (int x : v10) cout << x << " ";
    cout << endl;
    
    reverse(v10.begin(), v10.end());
    cout << "After reverse: ";
    for (int x : v10) cout << x << " ";
    cout << endl;
    
    // 8. Find Min/Max
    cout << "\n--- Min/Max Element ---" << endl;
    vector<int> v11 = {3, 1, 4, 1, 5, 9, 2, 6};
    
    auto minIt = min_element(v11.begin(), v11.end());
    auto maxIt = max_element(v11.begin(), v11.end());
    
    cout << "Min element: " << *minIt << " at index " << (minIt - v11.begin()) << endl;
    cout << "Max element: " << *maxIt << " at index " << (maxIt - v11.begin()) << endl;
    
    // 9. Count and Find
    cout << "\n--- Count and Find ---" << endl;
    vector<int> v12 = {1, 2, 3, 2, 4, 2, 5};
    
    int cnt = count(v12.begin(), v12.end(), 2);
    cout << "Count of 2: " << cnt << endl;
    
    auto findIt = find(v12.begin(), v12.end(), 4);
    if (findIt != v12.end()) {
        cout << "4 found at index: " << (findIt - v12.begin()) << endl;
    }
    
    // 10. Accumulate (Sum)
    cout << "\n--- Accumulate ---" << endl;
    vector<int> v13 = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int x : v13) sum += x;
    cout << "Sum of elements: " << sum << endl;
    
    // 11. Unique (Remove duplicates)
    cout << "\n--- Remove Duplicates ---" << endl;
    vector<int> v14 = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    
    cout << "Before unique: ";
    for (int x : v14) cout << x << " ";
    cout << endl;
    
    auto last = unique(v14.begin(), v14.end());
    v14.erase(last, v14.end());
    
    cout << "After unique: ";
    for (int x : v14) cout << x << " ";
    cout << endl;
    
    // 12. Rotate
    cout << "\n--- Rotate ---" << endl;
    vector<int> v15 = {1, 2, 3, 4, 5};
    
    cout << "Before rotate: ";
    for (int x : v15) cout << x << " ";
    cout << endl;
    
    rotate(v15.begin(), v15.begin() + 2, v15.end());
    cout << "After rotate by 2: ";
    for (int x : v15) cout << x << " ";
    cout << endl;
    
    // 13. Fill
    cout << "\n--- Fill ---" << endl;
    vector<int> v16(5);
    fill(v16.begin(), v16.end(), 7);
    
    cout << "After fill(7): ";
    for (int x : v16) cout << x << " ";
    cout << endl;
    
    // 14. 2D Vector
    cout << "\n--- 2D Vector ---" << endl;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "2D Vector (Matrix):" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    // 15. Clear and Empty
    cout << "\n--- Clear and Empty ---" << endl;
    vector<int> v17 = {1, 2, 3, 4, 5};
    cout << "Size before clear: " << v17.size() << endl;
    cout << "Is empty: " << (v17.empty() ? "Yes" : "No") << endl;
    
    v17.clear();
    cout << "Size after clear: " << v17.size() << endl;
    cout << "Is empty: " << (v17.empty() ? "Yes" : "No") << endl;
    
    // 16. Properties
    cout << "\n--- Vector Properties ---" << endl;
    cout << "1. Dynamic array - grows automatically" << endl;
    cout << "2. Random access - O(1)" << endl;
    cout << "3. Insert/Delete at end - O(1) amortized" << endl;
    cout << "4. Insert/Delete at middle - O(n)" << endl;
    cout << "5. Contiguous memory storage" << endl;
    cout << "6. push_back(), pop_back(), insert(), erase()" << endl;
    cout << "7. Works with STL algorithms" << endl;
    
    return 0;
}
