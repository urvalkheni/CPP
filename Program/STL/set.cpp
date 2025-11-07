#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainSet(){
    cout << "=== ENHANCED SET OPERATIONS ===" << endl;
    
    // 1. Basic insertion
    cout << "\n--- Building Set ---" << endl;
    set<int> st;
    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // {1, 2} - duplicate ignored
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4} - automatically sorted
    st.insert(5);
    st.insert(7);
    
    cout << "Set elements (automatically sorted): ";
    for(int x : st) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size: " << st.size() << endl;
    
    // 2. Find operation
    cout << "\n--- Find Operations ---" << endl;
    auto it = st.find(3);
    if(it != st.end()) {
        cout << "Found element 3 in set" << endl;
    } else {
        cout << "Element 3 not found" << endl;
    }
    
    auto it2 = st.find(6);
    if(it2 != st.end()) {
        cout << "Found element 6 in set" << endl;
    } else {
        cout << "Element 6 not found" << endl;
    }
    
    // 3. Count operation
    cout << "\n--- Count Operations ---" << endl;
    int cnt1 = st.count(1);  // Returns 1 if exists, 0 if not
    int cnt6 = st.count(6);
    cout << "Count of 1: " << cnt1 << endl;
    cout << "Count of 6: " << cnt6 << endl;
    
    // 4. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    cout << "Before erase: ";
    for(int x : st) cout << x << " ";
    cout << endl;
    
    st.erase(4);  // Erase by value
    cout << "After erasing 4: ";
    for(int x : st) cout << x << " ";
    cout << endl;
    
    // Erase by iterator
    auto eraseIt = st.find(1);
    if(eraseIt != st.end()) {
        st.erase(eraseIt);
        cout << "After erasing 1 by iterator: ";
        for(int x : st) cout << x << " ";
        cout << endl;
    }
    
    // 5. Range erase
    cout << "\n--- Range Erase ---" << endl;
    set<int> st2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Original st2: ";
    for(int x : st2) cout << x << " ";
    cout << endl;
    
    auto it1 = st2.find(3);
    auto it3 = st2.find(7);
    st2.erase(it1, it3);  // Erase [3, 7)
    cout << "After erasing [3, 7): ";
    for(int x : st2) cout << x << " ";
    cout << endl;
    
    // 6. Lower bound and upper bound
    cout << "\n--- Lower Bound and Upper Bound ---" << endl;
    set<int> st3 = {1, 3, 5, 7, 9, 11, 13};
    cout << "Set: ";
    for(int x : st3) cout << x << " ";
    cout << endl;
    
    auto lb = st3.lower_bound(5);  // First element >= 5
    auto ub = st3.upper_bound(5);  // First element > 5
    
    cout << "Lower bound of 5: " << *lb << endl;
    cout << "Upper bound of 5: " << *ub << endl;
    
    auto lb2 = st3.lower_bound(6);  // First element >= 6
    cout << "Lower bound of 6 (not in set): " << *lb2 << endl;
    
    // 7. Begin and end iterators
    cout << "\n--- Iterators ---" << endl;
    cout << "First element: " << *st3.begin() << endl;
    cout << "Last element: " << *st3.rbegin() << endl;
    
    // 8. Empty and clear
    cout << "\n--- Empty and Clear ---" << endl;
    cout << "Is st3 empty: " << (st3.empty() ? "Yes" : "No") << endl;
    cout << "Size before clear: " << st3.size() << endl;
    
    st3.clear();
    cout << "Size after clear: " << st3.size() << endl;
    cout << "Is st3 empty: " << (st3.empty() ? "Yes" : "No") << endl;
    
    // 9. Set of strings
    cout << "\n--- Set of Strings ---" << endl;
    set<string> strSet = {"zebra", "apple", "mango", "banana"};
    cout << "String set (sorted): ";
    for(const string& s : strSet) {
        cout << s << " ";
    }
    cout << endl;
    
    // 10. Set properties
    cout << "\n--- Set Properties ---" << endl;
    cout << "1. Stores unique elements only" << endl;
    cout << "2. Elements are always sorted" << endl;
    cout << "3. Insert, find, erase are O(log n)" << endl;
    cout << "4. Implemented using Red-Black Tree" << endl;
    cout << "5. No duplicate elements allowed" << endl;
}

int main(){
    explainSet();
    return 0;
}