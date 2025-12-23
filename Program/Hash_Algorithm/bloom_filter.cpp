#include <iostream>
#include <vector>
#include <bitset>
#include <string>
#include <functional>
using namespace std;

// Bloom Filter - Probabilistic data structure for set membership testing
class BloomFilter {
private:
    bitset<1000> bits;  // 1000 bits for the filter
    vector<hash<string>> hashers;
    static const int NUM_HASH_FUNCTIONS = 3;
    
    // Multiple hash functions
    unsigned long hash1(const string& str) {
        unsigned long hash = 5381;
        for (char c : str) {
            hash = ((hash << 5) + hash) + (unsigned char)c;
        }
        return hash % 1000;
    }
    
    unsigned long hash2(const string& str) {
        unsigned long hash = 0;
        for (char c : str) {
            hash = (unsigned char)c + (hash << 6) + (hash << 16) - hash;
        }
        return hash % 1000;
    }
    
    unsigned long hash3(const string& str) {
        unsigned long hash = 2166136261U;
        for (char c : str) {
            hash ^= (unsigned char)c;
            hash *= 16777619;
        }
        return hash % 1000;
    }
    
public:
    // Add an element to the filter
    void add(const string& element) {
        bits[hash1(element)] = 1;
        bits[hash2(element)] = 1;
        bits[hash3(element)] = 1;
    }
    
    // Check if element might be in the filter
    bool contains(const string& element) {
        return bits[hash1(element)] && bits[hash2(element)] && bits[hash3(element)];
    }
    
    // Print filter state
    void printState() {
        cout << "Filter bits: ";
        for (int i = 0; i < 50; i++) {
            cout << bits[i];
        }
        cout << "..." << endl;
    }
};

int main() {
    cout << "=== Bloom Filter Implementation ===" << endl << endl;
    
    BloomFilter filter;
    
    // Add elements
    cout << "Adding elements: apple, banana, orange" << endl;
    filter.add("apple");
    filter.add("banana");
    filter.add("orange");
    
    filter.printState();
    
    // Test membership
    cout << "\nMembership tests:" << endl;
    vector<string> testElements = {"apple", "banana", "orange", "grape", "mango"};
    
    for (const auto& elem : testElements) {
        cout << elem << ": " << (filter.contains(elem) ? "Possibly in set" : "Definitely not in set") << endl;
    }
    
    cout << "\nNote: Bloom Filter may have false positives but no false negatives!" << endl;
    
    return 0;
}
