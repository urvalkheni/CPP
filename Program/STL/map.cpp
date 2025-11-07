#include <iostream>
#include <map>
#include <string>
using namespace std;

void explainMap() {
    cout << "=== ENHANCED MAP OPERATIONS ===" << endl;
    
    // 1. Basic map operations
    cout << "\n--- map<int, int> ---" << endl;

    map<int, int> mpp1;

    // Different insertion methods
    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});
    mpp1.insert(make_pair(4, 8));
    mpp1[5] = 10;

    // Iteration
    cout << "Key => Value pairs:" << endl;
    for (auto it : mpp1) {
        cout << it.first << " => " << it.second << endl;
    }
    cout << "Size: " << mpp1.size() << endl;

    // 2. Accessing elements
    cout << "\n--- Accessing Elements ---" << endl;
    cout << "mpp1[1] (exists): " << mpp1[1] << endl;
    cout << "mpp1[5] (exists): " << mpp1[5] << endl;
    
    // Note: accessing non-existent key creates it with default value
    cout << "mpp1[10] (doesn't exist): " << mpp1[10] << endl;

    cout << "\nAfter accessing mpp1[10]:" << endl;
    for (auto it : mpp1) {
        cout << it.first << " => " << it.second << endl;
    }

    // 3. Find operation
    cout << "\n--- Find Operations ---" << endl;
    auto foundIt = mpp1.find(3);
    if(foundIt != mpp1.end()) {
        cout << "Found key 3 with value: " << foundIt->second << endl;
    }
    
    auto notFound = mpp1.find(100);
    if(notFound == mpp1.end()) {
        cout << "Key 100 not found in map" << endl;
    }

    // 4. Count operation
    cout << "\n--- Count Operations ---" << endl;
    cout << "Count of key 2: " << mpp1.count(2) << endl;
    cout << "Count of key 50: " << mpp1.count(50) << endl;

    // 5. Erase operations
    cout << "\n--- Erase Operations ---" << endl;
    cout << "Before erase, size: " << mpp1.size() << endl;
    mpp1.erase(10);  // Erase by key
    cout << "After erasing key 10, size: " << mpp1.size() << endl;
    
    auto eraseIt = mpp1.find(4);
    if(eraseIt != mpp1.end()) {
        mpp1.erase(eraseIt);  // Erase by iterator
        cout << "Erased key 4 using iterator" << endl;
    }

    // 6. Map with pair as key
    cout << "\n--- map<pair<int, int>, int> ---" << endl;

    map<pair<int, int>, int> mpp2;

    // Insertions
    mpp2[{1, 2}] = 100;
    mpp2[{2, 4}] = 200;
    mpp2[{3, 1}] = 300;
    mpp2.insert({{4, 3}, 400});

    // Iteration
    cout << "Pair keys => Values:" << endl;
    for (auto it : mpp2) {
        cout << "(" << it.first.first << ", " << it.first.second << ") => " << it.second << endl;
    }

    // Accessing a key
    cout << "\nAccess mpp2[{2,4}]: " << mpp2[{2, 4}] << endl;

    // 7. Map with string keys
    cout << "\n--- map<string, int> ---" << endl;
    map<string, int> wordCount;
    wordCount["apple"] = 5;
    wordCount["banana"] = 3;
    wordCount["cherry"] = 8;
    wordCount["date"] = 2;
    
    cout << "Word counts (alphabetically sorted):" << endl;
    for(auto& p : wordCount) {
        cout << p.first << " => " << p.second << endl;
    }

    // 8. Lower bound and upper bound
    cout << "\n--- Lower and Upper Bound ---" << endl;
    map<int, string> numMap;
    numMap[1] = "one";
    numMap[3] = "three";
    numMap[5] = "five";
    numMap[7] = "seven";
    numMap[9] = "nine";
    
    auto lb = numMap.lower_bound(5);
    auto ub = numMap.upper_bound(5);
    
    cout << "Lower bound of 5: key=" << lb->first << ", value=" << lb->second << endl;
    cout << "Upper bound of 5: key=" << ub->first << ", value=" << ub->second << endl;

    // 9. Empty, size, clear
    cout << "\n--- Utility Functions ---" << endl;
    cout << "Is numMap empty: " << (numMap.empty() ? "Yes" : "No") << endl;
    cout << "Size: " << numMap.size() << endl;
    
    numMap.clear();
    cout << "After clear, is empty: " << (numMap.empty() ? "Yes" : "No") << endl;

    // 10. Map properties
    cout << "\n--- Map Properties ---" << endl;
    cout << "1. Stores key-value pairs" << endl;
    cout << "2. Keys are unique and sorted" << endl;
    cout << "3. Insert, find, erase are O(log n)" << endl;
    cout << "4. Implemented using Red-Black Tree" << endl;
    cout << "5. Accessing non-existent key creates it" << endl;
}

int main() {
    explainMap();
    return 0;
}
