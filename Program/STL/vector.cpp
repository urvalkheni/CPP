#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void explainVector(){
    cout << "=== ENHANCED VECTOR OPERATIONS ===" << endl;
    
    // 1. Basic operations
    cout << "\n--- Basic Operations ---" << endl;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    cout << "Element at index 0 and 1: " << v[0] << " " << v[1] << endl;
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // 2. Vector of pairs
    cout << "\n--- Vector of Pairs ---" << endl;
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    vec.emplace_back(5, 6);
    cout << "Pairs: ";
    for(auto p : vec) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << endl;

    // 3. Different constructors
    cout << "\n--- Different Constructors ---" << endl;
    vector<int> x(5, 100);  // 5 elements with value 100
    vector<int> u(5);       // 5 elements with default value 0
    vector<int> u1(5, 20);  // 5 elements with value 20
    vector<int> u2(u1);     // Copy constructor
    
    cout << "x (5 elements = 100): ";
    for(int val : x) cout << val << " ";
    cout << endl;

    // 4. Iterator operations
    cout << "\n--- Iterator Operations ---" << endl;
    vector<int>::iterator it = v.begin();
    it++;
    cout << "Second element using iterator: " << *(it) << endl;
    
    it = it + 2;
    cout << "Fourth element: " << *(it) << endl;
    cout << "Last element (back): " << v.back() << endl;
    cout << "First element (front): " << v.front() << endl;
    
    // Reverse iteration
    cout << "Reverse order: ";
    for(auto rit = v.rbegin(); rit != v.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // 5. Display all elements
    cout << "\n--- All Elements ---" << endl;
    cout << "Elements: ";
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    
    // 6. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    vector<int> eraseTest = {1, 2, 3, 4, 5, 6, 7};
    cout << "Before erase: ";
    for(int x : eraseTest) cout << x << " ";
    cout << endl;
    
    eraseTest.erase(eraseTest.begin() + 1);  // Remove element at index 1
    cout << "After erasing index 1: ";
    for(int x : eraseTest) cout << x << " ";
    cout << endl;

    // 7. Insert operations
    cout << "\n--- Insert Operations ---" << endl;
    vector<int> ur(2, 100);  // {100, 100}
    cout << "Initial: ";
    for(int x : ur) cout << x << " ";
    cout << endl;
    
    ur.insert(ur.begin(), 300);  // {300, 100, 100}
    cout << "After inserting 300 at begin: ";
    for(int x : ur) cout << x << " ";
    cout << endl;
    
    ur.insert(ur.begin() + 1, 2, 200);  // Insert 2 copies of 200
    cout << "After inserting two 200s: ";
    for(int x : ur) cout << x << " ";
    cout << endl;

    vector<int> copy(2, 50);  // {50, 50}
    ur.insert(ur.begin(), copy.begin(), copy.end());
    cout << "After inserting another vector: ";
    for(int x : ur) cout << x << " ";
    cout << endl;
    cout << "Final size: " << ur.size() << endl;

    // 8. Additional operations
    cout << "\n--- Additional Operations ---" << endl;
    vector<int> demo = {5, 2, 8, 1, 9, 3};
    cout << "Original: ";
    for(int x : demo) cout << x << " ";
    cout << endl;
    
    // Sort
    sort(demo.begin(), demo.end());
    cout << "Sorted: ";
    for(int x : demo) cout << x << " ";
    cout << endl;
    
    // Find
    auto found = find(demo.begin(), demo.end(), 8);
    if(found != demo.end()) {
        cout << "Found 8 at position: " << distance(demo.begin(), found) << endl;
    }
    
    // Reverse
    reverse(demo.begin(), demo.end());
    cout << "Reversed: ";
    for(int x : demo) cout << x << " ";
    cout << endl;
    
    // 9. Utility functions
    cout << "\n--- Utility Functions ---" << endl;
    v.pop_back();
    cout << "After pop_back, size: " << v.size() << endl;
    
    cout << "Is empty: " << (v.empty() ? "Yes" : "No") << endl;
    
    u1.swap(u2);
    cout << "Swapped u1 and u2" << endl;
    
    v.clear();
    cout << "After clear, is empty: " << (v.empty() ? "Yes" : "No") << endl;
    cout << "Size after clear: " << v.size() << endl;
}

int main(){
    explainVector();
    return 0;
}