#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainList(){
    cout << "=== ENHANCED LIST OPERATIONS ===" << endl;
    
    // 1. Basic operations
    cout << "\n--- Building List ---" << endl;
    list<int> ls;

    ls.push_back(2);      // {2}
    ls.emplace_back(4);   // {2, 4}
    ls.push_front(5);     // {5, 2, 4}
    ls.emplace_front(10); // {10, 5, 2, 4}
    ls.push_back(8);      // {10, 5, 2, 4, 8}
    
    cout << "List elements: ";
    for(int x : ls) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size: " << ls.size() << endl;
    
    // 2. Front and back access
    cout << "\n--- Accessing Elements ---" << endl;
    cout << "Front element: " << ls.front() << endl;
    cout << "Back element: " << ls.back() << endl;
    
    // 3. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "Forward iteration: ";
    for(auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse iteration: ";
    for(auto it = ls.rbegin(); it != ls.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 4. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    auto insertIt = ls.begin();
    ++insertIt;  // Move to second position
    ls.insert(insertIt, 99);
    
    cout << "After inserting 99 at position 1: ";
    for(int x : ls) cout << x << " ";
    cout << endl;
    
    // 5. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    auto eraseIt = ls.begin();
    ++eraseIt;
    ls.erase(eraseIt);
    
    cout << "After erasing second element: ";
    for(int x : ls) cout << x << " ";
    cout << endl;
    
    // 6. Pop operations
    cout << "\n--- Pop Operations ---" << endl;
    ls.pop_front();
    cout << "After pop_front: ";
    for(int x : ls) cout << x << " ";
    cout << endl;
    
    ls.pop_back();
    cout << "After pop_back: ";
    for(int x : ls) cout << x << " ";
    cout << endl;
    
    // 7. Sorting
    cout << "\n--- Sorting ---" << endl;
    list<int> ls2 = {5, 2, 8, 1, 9, 3, 7};
    cout << "Before sort: ";
    for(int x : ls2) cout << x << " ";
    cout << endl;
    
    ls2.sort();
    cout << "After sort: ";
    for(int x : ls2) cout << x << " ";
    cout << endl;
    
    // 8. Reverse
    cout << "\n--- Reverse ---" << endl;
    ls2.reverse();
    cout << "After reverse: ";
    for(int x : ls2) cout << x << " ";
    cout << endl;
    
    // 9. Remove and remove_if
    cout << "\n--- Remove Operations ---" << endl;
    list<int> ls3 = {1, 2, 3, 2, 4, 2, 5};
    cout << "Before removing 2: ";
    for(int x : ls3) cout << x << " ";
    cout << endl;
    
    ls3.remove(2);
    cout << "After removing all 2s: ";
    for(int x : ls3) cout << x << " ";
    cout << endl;
    
    list<int> ls4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ls4.remove_if([](int n) { return n % 2 == 0; });
    cout << "After removing even numbers: ";
    for(int x : ls4) cout << x << " ";
    cout << endl;
    
    // 10. Unique
    cout << "\n--- Unique ---" << endl;
    list<int> ls5 = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    cout << "Before unique: ";
    for(int x : ls5) cout << x << " ";
    cout << endl;
    
    ls5.unique();
    cout << "After unique: ";
    for(int x : ls5) cout << x << " ";
    cout << endl;
    
    // 11. Merge
    cout << "\n--- Merge ---" << endl;
    list<int> l1 = {1, 3, 5, 7};
    list<int> l2 = {2, 4, 6, 8};
    cout << "List 1: ";
    for(int x : l1) cout << x << " ";
    cout << endl;
    cout << "List 2: ";
    for(int x : l2) cout << x << " ";
    cout << endl;
    
    l1.merge(l2);
    cout << "After merge: ";
    for(int x : l1) cout << x << " ";
    cout << endl;
    
    // 12. Swap and clear
    cout << "\n--- Swap and Clear ---" << endl;
    list<int> listA = {1, 2, 3};
    list<int> listB = {10, 20, 30};
    
    cout << "Before swap - listA size: " << listA.size() << ", listB size: " << listB.size() << endl;
    listA.swap(listB);
    cout << "After swap - listA size: " << listA.size() << ", listB size: " << listB.size() << endl;
    
    cout << "Is listA empty: " << (listA.empty() ? "Yes" : "No") << endl;
    listA.clear();
    cout << "After clear, is empty: " << (listA.empty() ? "Yes" : "No") << endl;
    
    // 13. List properties
    cout << "\n--- List Properties ---" << endl;
    cout << "1. Doubly linked list" << endl;
    cout << "2. Fast insertion/deletion at any position O(1)" << endl;
    cout << "3. No random access (no operator[])" << endl;
    cout << "4. Bidirectional iteration" << endl;
    cout << "5. Dynamic size" << endl;
}

int main(){
    explainList();
    return 0;
}