#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Fnv1a Hash Algorithm
class FNV1A {
private:
    static const uint32_t FNV_prime = 16777619;
    static const uint32_t FNV_offset_basis = 2166136261U;
    
public:
    uint32_t hash32(const string& data) {
        uint32_t hash = FNV_offset_basis;
        for (char c : data) {
            hash ^= (uint32_t)(unsigned char)c;
            hash *= FNV_prime;
        }
        return hash;
    }
    
    uint64_t hash64(const string& data) {
        static const uint64_t FNV_prime_64 = 1099511628211ULL;
        static const uint64_t FNV_offset_basis_64 = 14695981039346656037ULL;
        
        uint64_t hash = FNV_offset_basis_64;
        for (char c : data) {
            hash ^= (uint64_t)(unsigned char)c;
            hash *= FNV_prime_64;
        }
        return hash;
    }
    
    string toString(uint64_t hash) {
        stringstream ss;
        ss << hex << setfill('0') << setw(16) << hash;
        return ss.str();
    }
};

// Murmur3 simple version
class Murmur3 {
public:
    uint32_t hash(const string& data, uint32_t seed = 0) {
        uint32_t h1 = seed;
        const uint32_t c1 = 0xcc9e2d51;
        const uint32_t c2 = 0x1b873593;
        
        int length = data.length();
        int nblocks = length / 4;
        
        // Body
        const uint32_t *blocks = (const uint32_t *)data.c_str();
        for (int i = 0; i < nblocks; i++) {
            uint32_t k1 = blocks[i];
            
            k1 *= c1;
            k1 = rotl32(k1, 15);
            k1 *= c2;
            
            h1 ^= k1;
            h1 = rotl32(h1, 13);
            h1 = h1 * 5 + 0xe6546b64;
        }
        
        // Tail
        const uint8_t *tail = (const uint8_t *)(data.c_str() + nblocks * 4);
        uint32_t k1 = 0;
        
        switch (length & 3) {
            case 3: k1 ^= tail[2] << 16;
            case 2: k1 ^= tail[1] << 8;
            case 1: k1 ^= tail[0];
                    k1 *= c1;
                    k1 = rotl32(k1, 15);
                    k1 *= c2;
                    h1 ^= k1;
        }
        
        // Finalization
        h1 ^= length;
        return fmix32(h1);
    }
    
private:
    uint32_t rotl32(uint32_t x, int r) {
        return (x << r) | (x >> (32 - r));
    }
    
    uint32_t fmix32(uint32_t h) {
        h ^= h >> 16;
        h *= 0x85ebca6b;
        h ^= h >> 13;
        h *= 0xc2b2ae35;
        h ^= h >> 16;
        return h;
    }
};

void displayMenu() {
    cout << "\n=== Advanced Hash Algorithms ===" << endl;
    cout << "1. FNV-1a 32-bit Hash" << endl;
    cout << "2. FNV-1a 64-bit Hash" << endl;
    cout << "3. Murmur3 Hash" << endl;
    cout << "4. Compare All Algorithms" << endl;
    cout << "5. Exit" << endl;
    cout << "=================================" << endl;
}

int main() {
    cout << "=== Advanced Hash Algorithms ===" << endl;
    cout << "Fast, non-cryptographic hash functions" << endl << endl;
    
    FNV1A fnv1a;
    Murmur3 murmur3;
    string input;
    
    while (true) {
        cout << "Enter text to hash (or 'quit' to exit): ";
        getline(cin, input);
        
        if (input == "quit") break;
        
        if (input.empty()) {
            cout << "Please enter non-empty text." << endl;
            continue;
        }
        
        displayMenu();
        int choice;
        cout << "Select: ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input." << endl;
            continue;
        }
        cin.ignore();
        
        cout << "\nInput: \"" << input << "\"" << endl;
        
        if (choice == 1 || choice == 4) {
            uint32_t hash32 = fnv1a.hash32(input);
            cout << "FNV-1a 32: 0x" << hex << setfill('0') << setw(8) << hash32 << dec << endl;
        }
        if (choice == 2 || choice == 4) {
            uint64_t hash64 = fnv1a.hash64(input);
            cout << "FNV-1a 64: 0x" << fnv1a.toString(hash64) << endl;
        }
        if (choice == 3 || choice == 4) {
            uint32_t hash = murmur3.hash(input);
            cout << "Murmur3:   0x" << hex << setfill('0') << setw(8) << hash << dec << endl;
        }
        if (choice == 5) break;
        
        cout << endl;
    }
    
    return 0;
}
