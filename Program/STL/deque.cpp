#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    cout << "=== ENHANCED DEQUE OPERATIONS ===" << endl;
    
    // 1. Basic operations
    cout << "\n--- Building Deque ---" << endl;
    deque<int> dq;

    dq.push_back(2);      // {2}
    dq.emplace_back(4);   // {2, 4}
    dq.push_front(5);     // {5, 2, 4}
    dq.emplace_front(10); // {10, 5, 2, 4}
    dq.push_back(8);      // {10, 5, 2, 4, 8}
    
    cout << "Deque elements: ";
    for(int x : dq) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size: " << dq.size() << endl;
    
    // 2. Access elements
    cout << "\n--- Accessing Elements ---" << endl;
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    cout << "Element at index 2: " << dq[2] << endl;
    cout << "Element at index 2 (using at): " << dq.at(2) << endl;
    
    // 3. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "Forward iteration: ";
    for(auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse iteration: ";
    for(auto it = dq.rbegin(); it != dq.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 4. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    auto insertIt = dq.begin();
    ++insertIt;
    ++insertIt;  // Move to index 2
    dq.insert(insertIt, 99);
    
    cout << "After inserting 99 at index 2: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Insert multiple elements
    dq.insert(dq.begin(), 2, 100);
    cout << "After inserting two 100s at beginning: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // 5. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    dq.erase(dq.begin());
    cout << "After erasing first element: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Erase range
    auto eraseStart = dq.begin();
    auto eraseEnd = dq.begin();
    ++eraseEnd;
    ++eraseEnd;
    dq.erase(eraseStart, eraseEnd);
    cout << "After erasing first two elements: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // 6. Pop operations
    cout << "\n--- Pop Operations ---" << endl;
    deque<int> dq2 = {1, 2, 3, 4, 5};
    cout << "Original: ";
    for(int x : dq2) cout << x << " ";
    cout << endl;
    
    dq2.pop_front();
    cout << "After pop_front: ";
    for(int x : dq2) cout << x << " ";
    cout << endl;
    
    dq2.pop_back();
    cout << "After pop_back: ";
    for(int x : dq2) cout << x << " ";
    cout << endl;
    
    // 7. Resize and assign
    cout << "\n--- Resize and Assign ---" << endl;
    deque<int> dq3(5, 10);  // {10, 10, 10, 10, 10}
    cout << "Deque with 5 elements = 10: ";
    for(int x : dq3) cout << x << " ";
    cout << endl;
    
    dq3.resize(8, 20);
    cout << "After resize to 8 (new elements = 20): ";
    for(int x : dq3) cout << x << " ";
    cout << endl;
    
    dq3.assign(4, 50);
    cout << "After assign 4 elements = 50: ";
    for(int x : dq3) cout << x << " ";
    cout << endl;
    
    // 8. Swap
    cout << "\n--- Swap Operation ---" << endl;
    deque<int> dqA = {1, 2, 3};
    deque<int> dqB = {10, 20, 30, 40};
    
    cout << "Before swap - dqA size: " << dqA.size() << ", dqB size: " << dqB.size() << endl;
    dqA.swap(dqB);
    cout << "After swap - dqA size: " << dqA.size() << ", dqB size: " << dqB.size() << endl;
    
    cout << "dqA: ";
    for(int x : dqA) cout << x << " ";
    cout << endl;
    
    // 9. Empty and clear
    cout << "\n--- Empty and Clear ---" << endl;
    cout << "Is dqA empty: " << (dqA.empty() ? "Yes" : "No") << endl;
    cout << "Size before clear: " << dqA.size() << endl;
    
    dqA.clear();
    cout << "Size after clear: " << dqA.size() << endl;
    cout << "Is dqA empty: " << (dqA.empty() ? "Yes" : "No") << endl;
    
    // 10. Practical example - Sliding window
    cout << "\n--- Practical Example: Sliding Window ---" << endl;
    deque<int> window;
    int arr[] = {1, 3, 5, 7, 9, 11};
    int windowSize = 3;
    
    cout << "Array: ";
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    cout << "\nWindow size: " << windowSize << endl;
    
    for(int i = 0; i < 6; i++) {
        if(window.size() == windowSize) {
            window.pop_front();
        }
        window.push_back(arr[i]);
        
        if(window.size() == windowSize) {
            cout << "Window: ";
            for(int x : window) cout << x << " ";
            cout << endl;
        }
    }
    
    // 11. Deque properties
    cout << "\n--- Deque Properties ---" << endl;
    cout << "1. Double-ended queue" << endl;
    cout << "2. Fast insertion/deletion at both ends O(1)" << endl;
    cout << "3. Random access with operator[] O(1)" << endl;
    cout << "4. Dynamic size" << endl;
    cout << "5. Not contiguous in memory (unlike vector)" << endl;
}

int main(){
    explainDeque();
    return 0;
}