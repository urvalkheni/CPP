#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void explainUnorderedMap() {
    cout << "===== unordered_map<string, int> =====" << endl;

    unordered_map<string, int> umap;

    // Insertions
    umap["apple"] = 5;
    umap["banana"] = 3;
    umap.insert({"cherry", 8});
    umap.emplace("date", 2);

    cout << "Initial unordered_map:" << endl;
    for (auto it : umap) {
        cout << it.first << " => " << it.second << endl;
    }

    // Accessing elements
    cout << "\nAccessing elements:" << endl;
    cout << "apple: " << umap["apple"] << endl;
    cout << "banana: " << umap.at("banana") << endl;

    // Check if key exists
    if (umap.find("cherry") != umap.end()) {
        cout << "cherry found with value: " << umap["cherry"] << endl;
    }

    // Count occurrences (always 0 or 1 for unordered_map)
    cout << "Count of 'apple': " << umap.count("apple") << endl;
    cout << "Count of 'grape': " << umap.count("grape") << endl;

    cout << "\n===== unordered_map<int, string> =====" << endl;

    unordered_map<int, string> numMap;
    numMap[1] = "one";
    numMap[2] = "two";
    numMap[3] = "three";
    numMap[10] = "ten";

    cout << "Number mapping:" << endl;
    for (auto pair : numMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Erase operations
    cout << "\nErase operations:" << endl;
    numMap.erase(2);  // Erase by key
    cout << "After erasing key 2:" << endl;
    for (auto pair : numMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Size and empty check
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