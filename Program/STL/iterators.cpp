#include <iostream>
#include <iterator>
#include <vector>
#include <list>
using namespace std;

// Program 6: STL Iterators - Advanced Iterator Operations
int main() {
    cout << "=== STL ITERATORS DEMONSTRATION ===" << endl;
    
    vector<int> vec = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    // 1. Different types of iterators
    cout << "\n=== Iterator Types ===" << endl;
    
    // Forward iterator
    cout << "Forward iteration: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Reverse iterator
    cout << "Reverse iteration: ";
    for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;
    
    // Const iterator
    cout << "Const iteration: ";
    for (vector<int>::const_iterator cit = vec.cbegin(); cit != vec.cend(); ++cit) {
        cout << *cit << " ";
    }
    cout << endl;
    
    // 2. Iterator arithmetic
    cout << "\n=== Iterator Arithmetic ===" << endl;
    auto it = vec.begin();
    
    cout << "First element: " << *it << endl;
    
    it += 3;  // Move forward by 3
    cout << "After moving 3 positions: " << *it << endl;
    
    it -= 1;  // Move back by 1
    cout << "After moving 1 position back: " << *it << endl;
    
    // 3. Distance between iterators
    cout << "\n=== Iterator Distance ===" << endl;
    auto first = vec.begin();
    auto last = vec.end();
    cout << "Distance between begin and end: " << distance(first, last) << endl;
    
    auto mid = vec.begin() + 5;
    cout << "Distance from begin to middle: " << distance(vec.begin(), mid) << endl;
    
    // 4. Advance iterator
    cout << "\n=== Advance Iterator ===" << endl;
    auto advIt = vec.begin();
    cout << "Starting position: " << *advIt << endl;
    
    advance(advIt, 4);
    cout << "After advancing 4 positions: " << *advIt << endl;
    
    // 5. Next and Prev
    cout << "\n=== Next and Prev ===" << endl;
    auto currentIt = vec.begin() + 5;
    cout << "Current: " << *currentIt << endl;
    cout << "Next: " << *next(currentIt) << endl;
    cout << "Next by 2: " << *next(currentIt, 2) << endl;
    cout << "Previous: " << *prev(currentIt) << endl;
    cout << "Previous by 2: " << *prev(currentIt, 2) << endl;
    
    // 6. Insert iterator
    cout << "\n=== Insert Iterator ===" << endl;
    vector<int> dest;
    back_insert_iterator<vector<int>> back_it(dest);
    
    *back_it = 100;
    *back_it = 200;
    *back_it = 300;
    
    cout << "Destination vector after back_insert_iterator: ";
    for (int x : dest) cout << x << " ";
    cout << endl;
    
    // 7. Front insert iterator (works with list, deque)
    list<int> myList;
    front_insert_iterator<list<int>> front_it(myList);
    
    *front_it = 10;
    *front_it = 20;
    *front_it = 30;
    
    cout << "List after front_insert_iterator: ";
    for (int x : myList) cout << x << " ";
    cout << endl;
    
    // 8. Stream iterator
    cout << "\n=== Stream Iterator ===" << endl;
    cout << "Vector elements using ostream_iterator: ";
    ostream_iterator<int> out_it(cout, " ");
    copy(vec.begin(), vec.end(), out_it);
    cout << endl;
    
    // 9. Finding elements using iterators
    cout << "\n=== Finding Elements ===" << endl;
    auto found = find(vec.begin(), vec.end(), 50);
    if (found != vec.end()) {
        cout << "Found 50 at position: " << distance(vec.begin(), found) << endl;
    }
    
    // 10. Modifying through iterators
    cout << "\n=== Modifying Through Iterators ===" << endl;
    vector<int> modVec = {1, 2, 3, 4, 5};
    cout << "Original: ";
    for (int x : modVec) cout << x << " ";
    cout << endl;
    
    for (auto it = modVec.begin(); it != modVec.end(); ++it) {
        *it *= 2;
    }
    
    cout << "After doubling: ";
    for (int x : modVec) cout << x << " ";
    cout << endl;
    
    // 11. Iterator comparisons
    cout << "\n=== Iterator Comparisons ===" << endl;
    auto it1 = vec.begin();
    auto it2 = vec.begin() + 3;
    
    if (it1 < it2) {
        cout << "it1 is before it2" << endl;
    }
    
    if (it2 > it1) {
        cout << "it2 is after it1" << endl;
    }
    
    return 0;
}