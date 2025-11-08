#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;

// Enhanced Forward List Operations
int main() {
    cout << "=== ENHANCED FORWARD_LIST OPERATIONS ===" << endl;
    
    // 1. Creating forward lists
    cout << "\n--- Creating Forward Lists ---" << endl;
    forward_list<int> fl1 = {10, 20, 30, 40, 50};
    forward_list<int> fl2(5, 100);  // 5 elements with value 100
    forward_list<int> fl3;
    
    cout << "fl1: ";
    for (int x : fl1) cout << x << " ";
    cout << "\nfl2: ";
    for (int x : fl2) cout << x << " ";
    cout << endl;
    
    // 2. push_front and emplace_front
    cout << "\n--- Push Front Operations ---" << endl;
    fl3.push_front(5);
    fl3.push_front(4);
    fl3.emplace_front(3);
    fl3.push_front(2);
    fl3.push_front(1);
    
    cout << "fl3 after push_front operations: ";
    for (int x : fl3) cout << x << " ";
    cout << endl;
    
    // 3. pop_front
    cout << "\n--- Pop Front Operation ---" << endl;
    fl3.pop_front();
    cout << "fl3 after pop_front: ";
    for (int x : fl3) cout << x << " ";
    cout << endl;
    
    // 4. insert_after and emplace_after
    cout << "\n--- Insert After Operations ---" << endl;
    auto it = fl3.begin();
    fl3.insert_after(it, 99);  // Insert after first element
    
    cout << "After inserting 99 after first element: ";
    for (int x : fl3) cout << x << " ";
    cout << endl;
    
    // Insert multiple elements
    it = fl3.begin();
    ++it;  // Move to second position
    fl3.insert_after(it, {77, 88});
    
    cout << "After inserting {77, 88}: ";
    for (int x : fl3) cout << x << " ";
    cout << endl;
    
    // 5. erase_after
    cout << "\n--- Erase After Operations ---" << endl;
    forward_list<int> fl4 = {1, 2, 3, 4, 5, 6, 7, 8};
    
    cout << "fl4 before erase: ";
    for (int x : fl4) cout << x << " ";
    cout << endl;
    
    auto eraseIt = fl4.begin();
    fl4.erase_after(eraseIt);  // Erase element after first
    
    cout << "After erasing element after first: ";
    for (int x : fl4) cout << x << " ";
    cout << endl;
    
    // 6. remove and remove_if
    cout << "\n--- Remove Operations ---" << endl;
    forward_list<int> fl5 = {1, 2, 3, 2, 4, 2, 5};
    
    cout << "Before remove(2): ";
    for (int x : fl5) cout << x << " ";
    cout << endl;
    
    fl5.remove(2);
    cout << "After remove(2): ";
    for (int x : fl5) cout << x << " ";
    cout << endl;
    
    forward_list<int> fl6 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    fl6.remove_if([](int n) { return n % 2 == 0; });
    
    cout << "After remove_if(even): ";
    for (int x : fl6) cout << x << " ";
    cout << endl;
    
    // 7. sort
    cout << "\n--- Sort Operations ---" << endl;
    forward_list<int> fl7 = {5, 2, 8, 1, 9, 3};
    
    cout << "Before sort: ";
    for (int x : fl7) cout << x << " ";
    cout << endl;
    
    fl7.sort();
    cout << "After sort (ascending): ";
    for (int x : fl7) cout << x << " ";
    cout << endl;
    
    fl7.sort(greater<int>());
    cout << "After sort (descending): ";
    for (int x : fl7) cout << x << " ";
    cout << endl;
    
    // 8. reverse
    cout << "\n--- Reverse Operation ---" << endl;
    forward_list<int> fl8 = {1, 2, 3, 4, 5};
    
    cout << "Before reverse: ";
    for (int x : fl8) cout << x << " ";
    cout << endl;
    
    fl8.reverse();
    cout << "After reverse: ";
    for (int x : fl8) cout << x << " ";
    cout << endl;
    
    // 9. unique
    cout << "\n--- Unique Operation ---" << endl;
    forward_list<int> fl9 = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};
    
    cout << "Before unique: ";
    for (int x : fl9) cout << x << " ";
    cout << endl;
    
    fl9.unique();
    cout << "After unique: ";
    for (int x : fl9) cout << x << " ";
    cout << endl;
    
    // 10. merge
    cout << "\n--- Merge Operation ---" << endl;
    forward_list<int> flA = {1, 3, 5, 7};
    forward_list<int> flB = {2, 4, 6, 8};
    
    cout << "flA: ";
    for (int x : flA) cout << x << " ";
    cout << "\nflB: ";
    for (int x : flB) cout << x << " ";
    cout << endl;
    
    flA.merge(flB);
    cout << "After merge: ";
    for (int x : flA) cout << x << " ";
    cout << "\nflB is now: ";
    for (int x : flB) cout << x << " ";
    cout << "(empty)" << endl;
    
    // 11. splice_after
    cout << "\n--- Splice After Operation ---" << endl;
    forward_list<int> flC = {1, 2, 3};
    forward_list<int> flD = {10, 20, 30};
    
    cout << "flC: ";
    for (int x : flC) cout << x << " ";
    cout << "\nflD: ";
    for (int x : flD) cout << x << " ";
    cout << endl;
    
    auto spliceIt = flC.begin();
    flC.splice_after(spliceIt, flD);
    
    cout << "After splice_after: ";
    for (int x : flC) cout << x << " ";
    cout << endl;
    
    // 12. assign
    cout << "\n--- Assign Operation ---" << endl;
    forward_list<int> flE;
    flE.assign(5, 42);
    
    cout << "After assign(5, 42): ";
    for (int x : flE) cout << x << " ";
    cout << endl;
    
    // 13. clear and empty
    cout << "\n--- Clear and Empty ---" << endl;
    cout << "Is flE empty? " << (flE.empty() ? "Yes" : "No") << endl;
    
    flE.clear();
    cout << "After clear, is flE empty? " << (flE.empty() ? "Yes" : "No") << endl;
    
    // 14. Properties
    cout << "\n--- Forward List Properties ---" << endl;
    cout << "1. Singly linked list (only forward iteration)" << endl;
    cout << "2. No size() function (constant time requirement)" << endl;
    cout << "3. Fast insertion/deletion at any position" << endl;
    cout << "4. Less memory than list (no backward pointer)" << endl;
    cout << "5. Cannot iterate backward" << endl;
    cout << "6. Operations are _after based (insert_after, erase_after)" << endl;
    
    return 0;
}
