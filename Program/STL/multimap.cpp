#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main() {
    cout << "=== STL MULTIMAP DEMO ===" << endl;
    
    // 1. Basic multimap - allows duplicate keys
    multimap<string, int> studentGrades;
    
    // 2. Inserting elements (multiple values per key allowed)
    studentGrades.insert(make_pair("Alice", 85));
    studentGrades.insert(make_pair("Bob", 92));
    studentGrades.insert(make_pair("Alice", 78));  // Duplicate key allowed
    studentGrades.insert(make_pair("Charlie", 96));
    studentGrades.insert(make_pair("Bob", 88));    // Another duplicate key
    studentGrades.insert(make_pair("Alice", 91));  // Third grade for Alice
    
    // 3. Display all elements
    cout << "\nAll student grades:" << endl;
    for (const auto& grade : studentGrades) {
        cout << grade.first << ": " << grade.second << endl;
    }
    
    // 4. Count occurrences of a key
    cout << "\nNumber of grades for Alice: " << studentGrades.count("Alice") << endl;
    cout << "Number of grades for Bob: " << studentGrades.count("Bob") << endl;
    
    // 5. Find all values for a specific key using equal_range
    cout << "\nAll grades for Alice:" << endl;
    auto range = studentGrades.equal_range("Alice");
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Alice: " << it->second << endl;
    }
    
    // 6. Find using lower_bound and upper_bound
    cout << "\nUsing lower_bound and upper_bound for Bob:" << endl;
    auto lower = studentGrades.lower_bound("Bob");
    auto upper = studentGrades.upper_bound("Bob");
    for (auto it = lower; it != upper; ++it) {
        cout << "Bob: " << it->second << endl;
    }
    
    // 7. Erase specific key-value pair
    cout << "\nErasing one grade for Alice (grade 78):" << endl;
    auto it = studentGrades.find("Alice");
    while (it != studentGrades.end() && it->first == "Alice") {
        if (it->second == 78) {
            studentGrades.erase(it);
            break;
        }
        ++it;
    }
    
    // 8. Display after deletion
    cout << "\nAfter erasing Alice's grade of 78:" << endl;
    for (const auto& grade : studentGrades) {
        cout << grade.first << ": " << grade.second << endl;
    }
    
    // 9. Multimap with custom comparator
    cout << "\n=== MULTIMAP WITH CUSTOM COMPARATOR ===" << endl;
    multimap<int, string, greater<int>> scoreBoard; // Descending order
    
    scoreBoard.insert({95, "Alice"});
    scoreBoard.insert({87, "Bob"});
    scoreBoard.insert({95, "Charlie"}); // Duplicate score
    scoreBoard.insert({92, "David"});
    scoreBoard.insert({87, "Eve"});     // Another duplicate
    
    cout << "\nScore board (highest to lowest):" << endl;
    for (const auto& entry : scoreBoard) {
        cout << "Score " << entry.first << ": " << entry.second << endl;
    }
    
    // 10. Size and empty check
    cout << "\nMultimap size: " << studentGrades.size() << endl;
    cout << "Is empty: " << (studentGrades.empty() ? "Yes" : "No") << endl;
    
    return 0;
}