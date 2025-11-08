#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

void explainUnorderedMap() {
    cout << "=== ENHANCED UNORDERED_MAP OPERATIONS ===" << endl;
    
    // 1. Basic unordered_map with string keys
    cout << "\n--- String to Integer Mapping ---" << endl;
    unordered_map<string, int> umap;

    // Different insertion methods
    umap["apple"] = 5;
    umap["banana"] = 3;
    umap.insert({"cherry", 8});
    umap.emplace("date", 2);
    umap.insert(make_pair("elderberry", 12));

    cout << "Initial unordered_map:" << endl;
    for (auto it : umap) {
        cout << it.first << " => " << it.second << endl;
    }
    cout << "Size: " << umap.size() << endl;

    // 2. Accessing elements
    cout << "\n--- Accessing Elements ---" << endl;
    cout << "apple: " << umap["apple"] << endl;
    cout << "banana: " << umap.at("banana") << endl;
    
    // Safe access with default value
    if (umap.find("grape") == umap.end()) {
        cout << "grape not found, using default value: 0" << endl;
    }

    // 3. Check if key exists
    cout << "\n--- Finding Elements ---" << endl;
    if (umap.find("cherry") != umap.end()) {
        cout << "cherry found with value: " << umap["cherry"] << endl;
    }
    
    auto it = umap.find("date");
    if (it != umap.end()) {
        cout << "date found: " << it->first << " => " << it->second << endl;
    }

    // Count occurrences (always 0 or 1 for unordered_map)
    cout << "\n--- Count Operations ---" << endl;
    cout << "Count of 'apple': " << umap.count("apple") << endl;
    cout << "Count of 'grape': " << umap.count("grape") << endl;

    // 4. Integer to String mapping
    cout << "\n--- Integer to String Mapping ---" << endl;
    unordered_map<int, string> numMap;
    numMap[1] = "one";
    numMap[2] = "two";
    numMap[3] = "three";
    numMap[10] = "ten";
    numMap.insert({5, "five"});
    numMap.emplace(7, "seven");

    cout << "Number mapping:" << endl;
    for (auto pair : numMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // 5. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    numMap.erase(2);  // Erase by key
    cout << "After erasing key 2:" << endl;
    for (auto pair : numMap) {
        cout << pair.first << " => " << pair.second << endl;
    }
    
    // Erase using iterator
    auto eraseIt = numMap.find(10);
    if (eraseIt != numMap.end()) {
        numMap.erase(eraseIt);
        cout << "After erasing key 10 using iterator:" << endl;
        for (auto pair : numMap) {
            cout << pair.first << " => " << pair.second << endl;
        }
    }

    // 6. Size and empty check
    cout << "\n--- Size and Empty Check ---" << endl;
    cout << "Size of numMap: " << numMap.size() << endl;
    cout << "Is numMap empty: " << (numMap.empty() ? "Yes" : "No") << endl;
    
    numMap.clear();
    cout << "After clear, size: " << numMap.size() << endl;
    cout << "Is numMap empty: " << (numMap.empty() ? "Yes" : "No") << endl;
    
    // 7. Update values
    cout << "\n--- Updating Values ---" << endl;
    umap["apple"] = 10;  // Update existing value
    umap["banana"] += 5; // Increment value
    
    cout << "After updates:" << endl;
    cout << "apple: " << umap["apple"] << endl;
    cout << "banana: " << umap["banana"] << endl;
    
    // 8. Practical example - Word frequency counter
    cout << "\n--- Practical Example: Word Frequency ---" << endl;
    string text = "hello world hello cpp world hello";
    unordered_map<string, int> wordFreq;
    
    string word = "";
    for (char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                wordFreq[word]++;
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) wordFreq[word]++;
    
    cout << "Word frequencies in text: \"" << text << "\"" << endl;
    for (auto wf : wordFreq) {
        cout << wf.first << ": " << wf.second << endl;
    }
    
    // 9. Bucket operations
    cout << "\n--- Bucket Information ---" << endl;
    cout << "Number of buckets: " << umap.bucket_count() << endl;
    cout << "Load factor: " << umap.load_factor() << endl;
    cout << "Max load factor: " << umap.max_load_factor() << endl;
    
    // 10. Reserve and rehash
    unordered_map<int, int> reserveMap;
    reserveMap.reserve(100);  // Reserve space for at least 100 elements
    cout << "\nAfter reserve(100), bucket count: " << reserveMap.bucket_count() << endl;
    
    // 11. Properties
    cout << "\n--- Unordered Map Properties ---" << endl;
    cout << "1. Hash table based implementation" << endl;
    cout << "2. Average O(1) for search, insert, delete" << endl;
    cout << "3. No specific order of elements" << endl;
    cout << "4. Keys must be unique" << endl;
    cout << "5. Faster than map for single element access" << endl;
    cout << "\nSize: " << numMap.size() << endl;
    cout << "Is empty: " << (numMap.empty() ? "Yes" : "No") << endl;

    // Clear all elements
    numMap.clear();
    cout << "After clear - Size: " << numMap.size() << endl;
    cout << "Is empty: " << (numMap.empty() ? "Yes" : "No") << endl;

    cout << "\n===== Performance comparison note =====" << endl;
    cout << "unordered_map: O(1) average case for insert/find/erase" << endl;
    cout << "map: O(log n) for insert/find/erase but maintains order" << endl;
}

int main() {
    explainUnorderedMap();
    return 0;
}