#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// DJB2 Hash Algorithm - Simple and efficient
class DJB2Hash {
private:
    static const unsigned long INITIAL_HASH = 5381;
    
public:
    // Standard DJB2
    unsigned long hash(const string& str) {
        unsigned long hash = INITIAL_HASH;
        for (char c : str) {
            hash = ((hash << 5) + hash) + (unsigned char)c;
        }
        return hash;
    }
    
    // DJB2a variant (slightly better distribution)
    unsigned long hash_a(const string& str) {
        unsigned long hash = INITIAL_HASH;
        for (char c : str) {
            hash = ((hash << 5) + hash) ^ (unsigned char)c;
        }
        return hash;
    }
    
    // Convert hash to hex string
    string toHex(unsigned long hash) {
        stringstream ss;
        ss << hex << setfill('0') << setw(8) << hash;
        return ss.str();
    }
};

// SDBM Hash Algorithm - Another popular hash function
class SDBMHash {
public:
    unsigned long hash(const string& str) {
        unsigned long hash = 0;
        for (char c : str) {
            hash = (unsigned char)c + (hash << 6) + (hash << 16) - hash;
        }
        return hash;
    }
    
    string toHex(unsigned long hash) {
        stringstream ss;
        ss << hex << setfill('0') << setw(8) << hash;
        return ss.str();
    }
};

int main() {
    cout << "=== DJB2 and SDBM Hash Functions ===" << endl << endl;
    
    DJB2Hash djb2;
    SDBMHash sdbm;
    
    vector<string> testStrings = {"hello", "world", "cpp", "hash", "algorithm"};
    
    cout << "DJB2 Hash:" << endl;
    cout << left << setw(15) << "String" << setw(15) << "Hash Value" << setw(15) << "Hex Value" << endl;
    cout << string(45, '-') << endl;
    for (const auto& str : testStrings) {
        unsigned long hash = djb2.hash(str);
        cout << setw(15) << str << setw(15) << hash << djb2.toHex(hash) << endl;
    }
    
    cout << "\nDJB2a Hash (variant):" << endl;
    cout << left << setw(15) << "String" << setw(15) << "Hash Value" << setw(15) << "Hex Value" << endl;
    cout << string(45, '-') << endl;
    for (const auto& str : testStrings) {
        unsigned long hash = djb2.hash_a(str);
        cout << setw(15) << str << setw(15) << hash << djb2.toHex(hash) << endl;
    }
    
    cout << "\nSDBM Hash:" << endl;
    cout << left << setw(15) << "String" << setw(15) << "Hash Value" << setw(15) << "Hex Value" << endl;
    cout << string(45, '-') << endl;
    for (const auto& str : testStrings) {
        unsigned long hash = sdbm.hash(str);
        cout << setw(15) << str << setw(15) << hash << sdbm.toHex(hash) << endl;
    }
    
    return 0;
}
