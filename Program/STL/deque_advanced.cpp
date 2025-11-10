#include <iostream>
#include <deque>
using namespace std;

// Deque Advanced Operations
int main() {
    cout << "=== DEQUE ADVANCED OPERATIONS ===" << endl;
    
    // 1. Creating deques
    cout << "\n--- Creating Deques ---" << endl;
    deque<int> dq1;
    deque<int> dq2 = {1, 2, 3, 4, 5};
    deque<string> dq3 = {"apple", "banana", "cherry"};
    
    cout << "dq2: ";
    for (int x : dq2) cout << x << " ";
    cout << "\ndq3: ";
    for (string s : dq3) cout << s << " ";
    cout << endl;
    
    // 2. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    dq1.push_back(10);
    dq1.push_back(20);
    dq1.push_front(5);
    dq1.push_front(1);
    dq1.emplace_back(30);
    dq1.emplace_front(0);
    
    cout << "dq1: ";
    for (int x : dq1) cout << x << " ";
    cout << endl;
    
    // 3. Access elements
    cout << "\n--- Access Elements ---" << endl;
    cout << "Front: " << dq1.front() << endl;
    cout << "Back: " << dq1.back() << endl;
    cout << "Element at index 2: " << dq1[2] << endl;
    cout << "Element at index 3 (at): " << dq1.at(3) << endl;
    
    // 4. Pop operations
    cout << "\n--- Pop Operations ---" << endl;
    deque<int> dq4 = {1, 2, 3, 4, 5};
    
    cout << "Before pop: ";
    for (int x : dq4) cout << x << " ";
    cout << endl;
    
    dq4.pop_front();
    dq4.pop_back();
    
    cout << "After pop_front and pop_back: ";
    for (int x : dq4) cout << x << " ";
    cout << endl;
    
    // 5. Insert at position
    cout << "\n--- Insert at Position ---" << endl;
    deque<int> dq5 = {1, 2, 4, 5};
    
    cout << "Before insert: ";
    for (int x : dq5) cout << x << " ";
    cout << endl;
    
    dq5.insert(dq5.begin() + 2, 3);
    
    cout << "After inserting 3 at position 2: ";
    for (int x : dq5) cout << x << " ";
    cout << endl;
    
    // 6. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    deque<int> dq6 = {1, 2, 3, 4, 5, 6};
    
    cout << "Before erase: ";
    for (int x : dq6) cout << x << " ";
    cout << endl;
    
    dq6.erase(dq6.begin() + 2);
    
    cout << "After erasing element at position 2: ";
    for (int x : dq6) cout << x << " ";
    cout << endl;
    
    // Erase range
    dq6.erase(dq6.begin() + 1, dq6.begin() + 3);
    cout << "After erasing range [1,3): ";
    for (int x : dq6) cout << x << " ";
    cout << endl;
    
    // 7. Size and capacity
    cout << "\n--- Size and Empty ---" << endl;
    cout << "Size: " << dq1.size() << endl;
    cout << "Max size: " << dq1.max_size() << endl;
    cout << "Is empty: " << (dq1.empty() ? "Yes" : "No") << endl;
    
    // 8. Resize
    cout << "\n--- Resize ---" << endl;
    deque<int> dq7 = {1, 2, 3};
    
    cout << "Original size: " << dq7.size() << ", content: ";
    for (int x : dq7) cout << x << " ";
    cout << endl;
    
    dq7.resize(5, 10);
    cout << "After resize(5, 10): ";
    for (int x : dq7) cout << x << " ";
    cout << endl;
    
    // 9. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "Forward: ";
    for (auto it = dq2.begin(); it != dq2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse: ";
    for (auto it = dq2.rbegin(); it != dq2.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 10. Swap deques
    cout << "\n--- Swap Deques ---" << endl;
    deque<int> dqA = {1, 2, 3};
    deque<int> dqB = {10, 20, 30, 40};
    
    cout << "Before swap:" << endl;
    cout << "dqA: ";
    for (int x : dqA) cout << x << " ";
    cout << "\ndqB: ";
    for (int x : dqB) cout << x << " ";
    cout << endl;
    
    dqA.swap(dqB);
    
    cout << "After swap:" << endl;
    cout << "dqA: ";
    for (int x : dqA) cout << x << " ";
    cout << "\ndqB: ";
    for (int x : dqB) cout << x << " ";
    cout << endl;
    
    // 11. Clear
    cout << "\n--- Clear ---" << endl;
    deque<int> dq8 = {1, 2, 3, 4, 5};
    cout << "Size before clear: " << dq8.size() << endl;
    
    dq8.clear();
    cout << "Size after clear: " << dq8.size() << endl;
    cout << "Is empty: " << (dq8.empty() ? "Yes" : "No") << endl;
    
    // 12. Sliding window example
    cout << "\n--- Practical: Sliding Window Maximum ---" << endl;
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nWindow size: " << k << endl;
    cout << "Window maximums: ";
    
    deque<int> window;
    for (int i = 0; i < n; i++) {
        // Remove elements outside window
        while (!window.empty() && window.front() <= i - k) {
            window.pop_front();
        }
        
        // Remove smaller elements
        while (!window.empty() && arr[window.back()] < arr[i]) {
            window.pop_back();
        }
        
        window.push_back(i);
        
        // Print maximum for current window
        if (i >= k - 1) {
            cout << arr[window.front()] << " ";
        }
    }
    cout << endl;
    
    // 13. Properties
    cout << "\n=== DEQUE PROPERTIES ===" << endl;
    cout << "✓ Double-ended queue" << endl;
    cout << "✓ Insert/delete at both ends: O(1)" << endl;
    cout << "✓ Random access: O(1)" << endl;
    cout << "✓ Dynamic size" << endl;
    cout << "✓ Not contiguous memory (unlike vector)" << endl;
    cout << "✓ More flexible than vector or list" << endl;
    cout << "✓ Slightly slower than vector for iteration" << endl;
    
    return 0;
}
