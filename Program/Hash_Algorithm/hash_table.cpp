#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

// Hash Table Implementation with Chaining (Collision Handling)
template <typename K, typename V>
class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<list<pair<K, V>>> table;
    
    int hashFunction(const K& key) {
        // Simple hash function for string keys
        int hash = 0;
        if (typeid(K) == typeid(string)) {
            string s = *reinterpret_cast<const string*>(&key);
            for (char c : s) {
                hash += c;
            }
        } else {
            hash = key;
        }
        return hash % TABLE_SIZE;
    }
    
public:
    HashTable() : table(TABLE_SIZE) {}
    
    // Insert key-value pair
    void insert(const K& key, const V& value) {
        int index = hashFunction(key);
        
        // Check if key already exists
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;  // Update value
                cout << "Updated: " << key << " -> " << value << endl;
                return;
            }
        }
        
        // Insert new pair
        table[index].push_back({key, value});
        cout << "Inserted: " << key << " -> " << value << endl;
    }
    
    // Search for a value by key
    V* search(const K& key) {
        int index = hashFunction(key);
        
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                return &pair.second;
            }
        }
        
        return nullptr;
    }
    
    // Remove a key-value pair
    bool remove(const K& key) {
        int index = hashFunction(key);
        
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->first == key) {
                table[index].erase(it);
                cout << "Removed: " << key << endl;
                return true;
            }
        }
        
        return false;
    }
    
    // Display all entries
    void display() {
        cout << "\nHash Table Contents:" << endl;
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << "Index " << i << ": ";
            if (table[i].empty()) {
                cout << "Empty";
            } else {
                for (auto& pair : table[i]) {
                    cout << "[" << pair.first << " -> " << pair.second << "] ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "=== Hash Table with Chaining ===" << endl << endl;
    
    HashTable<string, int> hashTable;
    
    // Insert operations
    cout << "Insert Operations:" << endl;
    hashTable.insert("apple", 5);
    hashTable.insert("banana", 3);
    hashTable.insert("orange", 7);
    hashTable.insert("grape", 4);
    hashTable.insert("mango", 2);
    
    hashTable.display();
    
    // Search operations
    cout << "\nSearch Operations:" << endl;
    string key = "banana";
    int* result = hashTable.search(key);
    if (result) {
        cout << "Found: " << key << " -> " << *result << endl;
    } else {
        cout << "Not found: " << key << endl;
    }
    
    key = "pineapple";
    result = hashTable.search(key);
    if (result) {
        cout << "Found: " << key << " -> " << *result << endl;
    } else {
        cout << "Not found: " << key << endl;
    }
    
    // Update operation
    cout << "\nUpdate Operation:" << endl;
    hashTable.insert("apple", 10);
    
    // Remove operation
    cout << "\nRemove Operation:" << endl;
    hashTable.remove("grape");
    
    hashTable.display();
    
    return 0;
}
