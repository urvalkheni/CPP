#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

// STL Pair Operations - Complete Guide
int main() {
    cout << "=== STL PAIR OPERATIONS ===" << endl;
    
    // 1. Creating pairs
    cout << "\n--- Creating Pairs ---" << endl;
    pair<int, string> p1;
    pair<int, string> p2(1, "One");
    pair<int, string> p3 = make_pair(2, "Two");
    auto p4 = make_pair(3, "Three");
    
    cout << "p2: (" << p2.first << ", " << p2.second << ")" << endl;
    cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;
    cout << "p4: (" << p4.first << ", " << p4.second << ")" << endl;
    
    // 2. Accessing elements
    cout << "\n--- Accessing Elements ---" << endl;
    pair<double, char> p5(3.14, 'A');
    cout << "First: " << p5.first << endl;
    cout << "Second: " << p5.second << endl;
    
    // Modifying elements
    p5.first = 2.71;
    p5.second = 'B';
    cout << "After modification: (" << p5.first << ", " << p5.second << ")" << endl;
    
    // 3. Pair comparison
    cout << "\n--- Pair Comparison ---" << endl;
    pair<int, int> pA(1, 2);
    pair<int, int> pB(1, 3);
    pair<int, int> pC(2, 1);
    
    cout << "pA(1,2) < pB(1,3): " << (pA < pB ? "True" : "False") << endl;
    cout << "pA(1,2) < pC(2,1): " << (pA < pC ? "True" : "False") << endl;
    cout << "pA == pB: " << (pA == pB ? "True" : "False") << endl;
    
    // 4. Pair with different types
    cout << "\n--- Pair with Different Types ---" << endl;
    pair<string, vector<int>> p6("Numbers", {1, 2, 3, 4, 5});
    cout << "Key: " << p6.first << endl;
    cout << "Values: ";
    for (int x : p6.second) cout << x << " ";
    cout << endl;
    
    // 5. Vector of pairs
    cout << "\n--- Vector of Pairs ---" << endl;
    vector<pair<string, int>> students;
    students.push_back(make_pair("Alice", 85));
    students.push_back(make_pair("Bob", 92));
    students.push_back(make_pair("Charlie", 78));
    students.push_back(make_pair("David", 95));
    
    cout << "Student scores:" << endl;
    for (auto& student : students) {
        cout << student.first << ": " << student.second << endl;
    }
    
    // 6. Sorting pairs
    cout << "\n--- Sorting Pairs ---" << endl;
    sort(students.begin(), students.end());
    cout << "Sorted by name:" << endl;
    for (auto& student : students) {
        cout << student.first << ": " << student.second << endl;
    }
    
    // Sort by second element
    sort(students.begin(), students.end(), 
         [](pair<string, int>& a, pair<string, int>& b) {
             return a.second > b.second;
         });
    cout << "\nSorted by score (descending):" << endl;
    for (auto& student : students) {
        cout << student.first << ": " << student.second << endl;
    }
    
    // 7. Nested pairs
    cout << "\n--- Nested Pairs ---" << endl;
    pair<int, pair<int, int>> nested(1, make_pair(2, 3));
    cout << "Nested pair: (" << nested.first << ", (" 
         << nested.second.first << ", " << nested.second.second << "))" << endl;
    
    // 8. Swap pairs
    cout << "\n--- Swap Pairs ---" << endl;
    pair<int, string> swap1(10, "Ten");
    pair<int, string> swap2(20, "Twenty");
    
    cout << "Before swap: " << endl;
    cout << "swap1: (" << swap1.first << ", " << swap1.second << ")" << endl;
    cout << "swap2: (" << swap2.first << ", " << swap2.second << ")" << endl;
    
    swap1.swap(swap2);
    cout << "After swap: " << endl;
    cout << "swap1: (" << swap1.first << ", " << swap1.second << ")" << endl;
    cout << "swap2: (" << swap2.first << ", " << swap2.second << ")" << endl;
    
    // 9. Practical example - Coordinate system
    cout << "\n--- Practical Example: 2D Coordinates ---" << endl;
    vector<pair<int, int>> points = {
        {3, 4}, {0, 0}, {5, 12}, {8, 15}, {1, 1}
    };
    
    cout << "Points and their distances from origin:" << endl;
    for (auto& point : points) {
        double distance = sqrt(point.first * point.first + 
                              point.second * point.second);
        cout << "(" << point.first << ", " << point.second 
             << ") - Distance: " << distance << endl;
    }
    
    // 10. Find in vector of pairs
    cout << "\n--- Finding in Vector of Pairs ---" << endl;
    auto findIt = find_if(students.begin(), students.end(),
                          [](pair<string, int>& p) {
                              return p.first == "Bob";
                          });
    
    if (findIt != students.end()) {
        cout << "Found: " << findIt->first << " with score " 
             << findIt->second << endl;
    }
    
    // 11. Properties
    cout << "\n--- Pair Properties ---" << endl;
    cout << "1. Stores two heterogeneous objects" << endl;
    cout << "2. Comparison: first element has priority" << endl;
    cout << "3. Useful for returning multiple values" << endl;
    cout << "4. Commonly used with maps and sets" << endl;
    cout << "5. O(1) access to both elements" << endl;
    
    return 0;
}
