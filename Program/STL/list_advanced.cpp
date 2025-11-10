#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// List Advanced Operations
int main() {
    cout << "=== LIST ADVANCED OPERATIONS ===" << endl;
    
    // 1. Creating lists
    cout << "\n--- Creating Lists ---" << endl;
    list<int> l1;
    list<int> l2 = {1, 2, 3, 4, 5};
    list<string> l3 = {"apple", "banana", "cherry"};
    
    cout << "l2: ";
    for (int x : l2) cout << x << " ";
    cout << "\nl3: ";
    for (string s : l3) cout << s << " ";
    cout << endl;
    
    // 2. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_front(5);
    l1.push_front(1);
    l1.emplace_back(30);
    l1.emplace_front(0);
    
    cout << "l1: ";
    for (int x : l1) cout << x << " ";
    cout << endl;
    
    // 3. Access front and back
    cout << "\n--- Access Elements ---" << endl;
    cout << "Front: " << l1.front() << endl;
    cout << "Back: " << l1.back() << endl;
    
    // 4. Pop operations
    cout << "\n--- Pop Operations ---" << endl;
    list<int> l4 = {1, 2, 3, 4, 5};
    
    cout << "Before pop: ";
    for (int x : l4) cout << x << " ";
    cout << endl;
    
    l4.pop_front();
    l4.pop_back();
    
    cout << "After pop_front and pop_back: ";
    for (int x : l4) cout << x << " ";
    cout << endl;
    
    // 5. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "Forward: ";
    for (auto it = l2.begin(); it != l2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse: ";
    for (auto it = l2.rbegin(); it != l2.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 6. Insert at position
    cout << "\n--- Insert at Position ---" << endl;
    list<int> l5 = {1, 2, 4, 5};
    
    cout << "Before insert: ";
    for (int x : l5) cout << x << " ";
    cout << endl;
    
    auto it = l5.begin();
    advance(it, 2);  // Move to position 2
    l5.insert(it, 3);
    
    cout << "After inserting 3 at position 2: ";
    for (int x : l5) cout << x << " ";
    cout << endl;
    
    // 7. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    list<int> l6 = {1, 2, 3, 4, 5, 6};
    
    auto it2 = l6.begin();
    advance(it2, 2);
    l6.erase(it2);
    
    cout << "After erasing element at position 2: ";
    for (int x : l6) cout << x << " ";
    cout << endl;
    
    // 8. Remove value
    cout << "\n--- Remove Value ---" << endl;
    list<int> l7 = {1, 2, 3, 2, 4, 2, 5};
    
    cout << "Before remove: ";
    for (int x : l7) cout << x << " ";
    cout << endl;
    
    l7.remove(2);
    
    cout << "After removing all 2s: ";
    for (int x : l7) cout << x << " ";
    cout << endl;
    
    // 9. Sort
    cout << "\n--- Sort ---" << endl;
    list<int> l8 = {5, 2, 8, 1, 9, 3};
    
    cout << "Before sort: ";
    for (int x : l8) cout << x << " ";
    cout << endl;
    
    l8.sort();
    
    cout << "After sort: ";
    for (int x : l8) cout << x << " ";
    cout << endl;
    
    // 10. Reverse
    cout << "\n--- Reverse ---" << endl;
    list<int> l9 = {1, 2, 3, 4, 5};
    
    cout << "Before reverse: ";
    for (int x : l9) cout << x << " ";
    cout << endl;
    
    l9.reverse();
    
    cout << "After reverse: ";
    for (int x : l9) cout << x << " ";
    cout << endl;
    
    // 11. Unique (remove consecutive duplicates)
    cout << "\n--- Unique ---" << endl;
    list<int> l10 = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};
    
    cout << "Before unique: ";
    for (int x : l10) cout << x << " ";
    cout << endl;
    
    l10.unique();
    
    cout << "After unique: ";
    for (int x : l10) cout << x << " ";
    cout << endl;
    
    // 12. Merge (merge two sorted lists)
    cout << "\n--- Merge ---" << endl;
    list<int> l11 = {1, 3, 5, 7};
    list<int> l12 = {2, 4, 6, 8};
    
    cout << "l11: ";
    for (int x : l11) cout << x << " ";
    cout << "\nl12: ";
    for (int x : l12) cout << x << " ";
    cout << endl;
    
    l11.merge(l12);
    
    cout << "After merging l12 into l11: ";
    for (int x : l11) cout << x << " ";
    cout << endl;
    
    // 13. Splice (transfer elements)
    cout << "\n--- Splice ---" << endl;
    list<int> l13 = {1, 2, 3};
    list<int> l14 = {10, 20, 30};
    
    auto it3 = l13.begin();
    advance(it3, 1);
    
    l13.splice(it3, l14);
    
    cout << "After splicing l14 into l13: ";
    for (int x : l13) cout << x << " ";
    cout << endl;
    
    // 14. Size and empty
    cout << "\n--- Size and Empty ---" << endl;
    cout << "Size of l1: " << l1.size() << endl;
    cout << "Is l1 empty: " << (l1.empty() ? "Yes" : "No") << endl;
    
    l1.clear();
    cout << "After clear, size: " << l1.size() << endl;
    
    // 15. Properties
    cout << "\n=== LIST PROPERTIES ===" << endl;
    cout << "✓ Doubly linked list" << endl;
    cout << "✓ Insert/delete at any position: O(1)" << endl;
    cout << "✓ No random access (use iterators)" << endl;
    cout << "✓ Efficient insertion/deletion" << endl;
    cout << "✓ More memory than vector (stores pointers)" << endl;
    cout << "✓ Bidirectional iteration" << endl;
    
    return 0;
}
