#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    cout << "=== ENHANCED MULTIMAP OPERATIONS ===" << endl;
    
    // 1. Basic multimap - allows duplicate keys
    cout << "\n--- Creating Multimap ---" << endl;
    multimap<string, int> studentGrades;
    
    // 2. Inserting elements (multiple values per key allowed)
    studentGrades.insert(make_pair("Alice", 85));
    studentGrades.insert(make_pair("Bob", 92));
    studentGrades.insert(make_pair("Alice", 78));  // Duplicate key allowed
    studentGrades.insert(make_pair("Charlie", 96));
    studentGrades.insert(make_pair("Bob", 88));    // Another duplicate key
    studentGrades.insert(make_pair("Alice", 91));  // Third grade for Alice
    studentGrades.insert({"David", 87});
    studentGrades.emplace("Charlie", 93);
    
    // 3. Display all elements
    cout << "\nAll student grades:" << endl;
    for (const auto& grade : studentGrades) {
        cout << grade.first << ": " << grade.second << endl;
    }
    cout << "Total entries: " << studentGrades.size() << endl;
    
    // 4. Count occurrences of a key
    cout << "\n--- Count Operations ---" << endl;
    cout << "Number of grades for Alice: " << studentGrades.count("Alice") << endl;
    cout << "Number of grades for Bob: " << studentGrades.count("Bob") << endl;
    cout << "Number of grades for Charlie: " << studentGrades.count("Charlie") << endl;
    
    // 5. Find all values for a specific key using equal_range
    cout << "\n--- Equal Range for Alice ---" << endl;
    auto range = studentGrades.equal_range("Alice");
    int sum = 0, count = 0;
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Alice: " << it->second << endl;
        sum += it->second;
        count++;
    }
    if (count > 0) {
        cout << "Alice's average: " << (double)sum / count << endl;
    }
    
    // 6. Find using lower_bound and upper_bound
    cout << "\n--- Lower Bound and Upper Bound for Bob ---" << endl;
    auto lower = studentGrades.lower_bound("Bob");
    auto upper = studentGrades.upper_bound("Bob");
    for (auto it = lower; it != upper; ++it) {
        cout << "Bob: " << it->second << endl;
    }
    
    // 7. Erase specific key-value pair
    cout << "\n--- Erasing Specific Entry ---" << endl;
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
    
    // 10. Erase all entries with a specific key
    cout << "\n--- Erase All Entries with Key ---" << endl;
    int erasedCount = studentGrades.erase("Charlie");
    cout << "Erased " << erasedCount << " entries for Charlie" << endl;
    
    // 11. Practical example - Phone book with multiple numbers
    cout << "\n--- Practical Example: Phone Book ---" << endl;
    multimap<string, string> phoneBook;
    phoneBook.insert({"John", "123-456-7890"});
    phoneBook.insert({"John", "098-765-4321"});  // Multiple numbers
    phoneBook.insert({"Jane", "555-123-4567"});
    phoneBook.insert({"John", "111-222-3333"});  // Third number
    phoneBook.insert({"Bob", "999-888-7777"});
    
    cout << "Phone Book:" << endl;
    for (const auto& entry : phoneBook) {
        cout << entry.first << ": " << entry.second << endl;
    }
    
    // 12. Iterators
    cout << "\n--- Using Iterators ---" << endl;
    cout << "First entry: " << studentGrades.begin()->first 
         << " = " << studentGrades.begin()->second << endl;
    
    // Reverse iteration
    cout << "Reverse iteration (last 3 entries):" << endl;
    int counter = 0;
    for (auto rit = studentGrades.rbegin(); rit != studentGrades.rend() && counter < 3; ++rit, ++counter) {
        cout << rit->first << ": " << rit->second << endl;
    }
    
    // 13. Size and empty check
    cout << "\n--- Size and Empty Check ---" << endl;
    cout << "Multimap size: " << studentGrades.size() << endl;
    cout << "Is empty: " << (studentGrades.empty() ? "Yes" : "No") << endl;
    
    // 14. Multimap properties
    cout << "\n--- Multimap Properties ---" << endl;
    cout << "1. Sorted by key (ascending by default)" << endl;
    cout << "2. Allows duplicate keys" << endl;
    cout << "3. O(log n) for insert, erase, find operations" << endl;
    cout << "4. Implemented as balanced binary tree (Red-Black tree)" << endl;
    cout << "5. Useful for one-to-many relationships" << endl;
    cout << "6. Keys remain sorted even with duplicates" << endl;
    
    return 0;
}