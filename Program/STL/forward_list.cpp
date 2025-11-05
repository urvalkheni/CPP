#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;

// STL Program 2: Forward List - Singly linked list
int main() {
    cout << "=== STL FORWARD_LIST DEMONSTRATION ===" << endl;
    
    // 1. Creating forward_list
    forward_list<int> flist1;
    forward_list<int> flist2 = {1, 2, 3, 4, 5};
    
    // 2. Insert at beginning
    flist1.push_front(10);
    flist1.push_front(20);
    flist1.push_front(30);
    
    cout << "After push_front operations: ";
    for (int x : flist1) {
        cout << x << " ";
    }
    cout << endl;
    
    // 3. Insert after a position
    auto it = flist1.begin();
    flist1.insert_after(it, 25);
    
    cout << "After insert_after: ";
    for (int x : flist1) {
        cout << x << " ";
    }
    cout << endl;
    
    // 4. Emplace operations
    flist1.emplace_front(40);
    flist1.emplace_after(flist1.begin(), 35);
    
    cout << "After emplace operations: ";
    for (int x : flist1) {
        cout << x << " ";
    }
    cout << endl;
    
    // 5. Remove elements
    flist1.pop_front();
    cout << "After pop_front: ";
    for (int x : flist1) {
        cout << x << " ";
    }
    cout << endl;
    
    // 6. Remove specific value
    forward_list<int> flist3 = {1, 2, 3, 2, 4, 2, 5};
    cout << "\nOriginal flist3: ";
    for (int x : flist3) {
        cout << x << " ";
    }
    cout << endl;
    
    flist3.remove(2);
    cout << "After removing all 2s: ";
    for (int x : flist3) {
        cout << x << " ";
    }
    cout << endl;
    
    // 7. Remove if condition
    forward_list<int> flist4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "\nOriginal flist4: ";
    for (int x : flist4) {
        cout << x << " ";
    }
    cout << endl;
    
    flist4.remove_if([](int n) { return n % 2 == 0; });
    cout << "After removing even numbers: ";
    for (int x : flist4) {
        cout << x << " ";
    }
    cout << endl;
    
    // 8. Sorting
    forward_list<int> flist5 = {5, 2, 8, 1, 9, 3};
    cout << "\nBefore sorting: ";
    for (int x : flist5) {
        cout << x << " ";
    }
    cout << endl;
    
    flist5.sort();
    cout << "After sorting: ";
    for (int x : flist5) {
        cout << x << " ";
    }
    cout << endl;
    
    // 9. Reverse
    flist5.reverse();
    cout << "After reverse: ";
    for (int x : flist5) {
        cout << x << " ";
    }
    cout << endl;
    
    // 10. Unique - remove consecutive duplicates
    forward_list<int> flist6 = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    cout << "\nBefore unique: ";
    for (int x : flist6) {
        cout << x << " ";
    }
    cout << endl;
    
    flist6.unique();
    cout << "After unique: ";
    for (int x : flist6) {
        cout << x << " ";
    }
    cout << endl;
    
    // 11. Merge two sorted lists
    forward_list<int> list_a = {1, 3, 5, 7};
    forward_list<int> list_b = {2, 4, 6, 8};
    
    cout << "\nList A: ";
    for (int x : list_a) cout << x << " ";
    cout << "\nList B: ";
    for (int x : list_b) cout << x << " ";
    cout << endl;
    
    list_a.merge(list_b);
    cout << "After merging: ";
    for (int x : list_a) {
        cout << x << " ";
    }
    cout << endl;
    
    // 12. Check if empty and clear
    cout << "\nIs list_b empty after merge? " << (list_b.empty() ? "Yes" : "No") << endl;
    
    list_a.clear();
    cout << "Is list_a empty after clear? " << (list_a.empty() ? "Yes" : "No") << endl;
    
    return 0;
}