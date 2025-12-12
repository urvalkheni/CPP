#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// Twofish-inspired simple symmetric encryption (Educational)
class SimpleSymmetricEncryption {
private:
    uint32_t key;
    
    uint32_t s_box(uint8_t input) {
        static const uint8_t sbox[] = {
            0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
            0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0
        };
        return sbox[input % 32];
    }
    
public:
    SimpleSymmetricEncryption(uint32_t k) : key(k) {}
    
    string encrypt(const string& plaintext) {
        string ciphertext = "";
        uint32_t state = key;
        
        for (char c : plaintext) {
            uint8_t byte = (uint8_t)c;
            byte ^= (state >> 8) & 0xFF;
            byte = s_box(byte);
            byte ^= state & 0xFF;
            
            state = (state * 1103515245 + 12345) & 0x7fffffff;
            
            ciphertext += (char)byte;
        }
        
        return ciphertext;
    }
    
    string decrypt(const string& ciphertext) {
        string plaintext = "";
        uint32_t state = key;
        
        for (char c : ciphertext) {
            uint8_t byte = (uint8_t)c;
            byte ^= state & 0xFF;
            
            // Inverse s-box (simplified)
            byte ^= 0xAA;
            
            byte ^= (state >> 8) & 0xFF;
            
            state = (state * 1103515245 + 12345) & 0x7fffffff;
            
            plaintext += (char)byte;
        }
        
        return plaintext;
    }
};

// Vigenere Cipher (Classical Encryption)
class VigenareCipher {
private:
    string key;
    
    char encryptChar(char c, char k) {
        if (!isalpha(c)) return c;
        int shift = tolower(k) - 'a';
        char base = isupper(c) ? 'A' : 'a';
        return base + (c - base + shift) % 26;
    }
    
    char decryptChar(char c, char k) {
        if (!isalpha(c)) return c;
        int shift = tolower(k) - 'a';
        char base = isupper(c) ? 'A' : 'a';
        return base + (c - base - shift + 26) % 26;
    }
    
public:
    VigenareCipher(const string& k) : key(k) {}
    
    string encrypt(const string& plaintext) {
        string ciphertext = "";
        int keyIndex = 0;
        
        for (char c : plaintext) {
            if (isalpha(c)) {
                ciphertext += encryptChar(c, key[keyIndex % key.length()]);
                keyIndex++;
            } else {
                ciphertext += c;
            }
        }
        
        return ciphertext;
    }
    
    string decrypt(const string& ciphertext) {
        string plaintext = "";
        int keyIndex = 0;
        
        for (char c : ciphertext) {
            if (isalpha(c)) {
                plaintext += decryptChar(c, key[keyIndex % key.length()]);
                keyIndex++;
            } else {
                plaintext += c;
            }
        }
        
        return plaintext;
    }
};

int main() {
    cout << "=== Symmetric Encryption Algorithms ===" << endl << endl;
    
    // Vigenere Cipher Example
    cout << "1. Vigenere Cipher (Classical)" << endl;
    cout << "================================" << endl;
    
    string plaintext1 = "Hello World";
    string key1 = "SECRET";
    
    VigenareCipher vc(key1);
    string encrypted1 = vc.encrypt(plaintext1);
    string decrypted1 = vc.decrypt(encrypted1);
    
    cout << "Plaintext:  \"" << plaintext1 << "\"" << endl;
    cout << "Key:        \"" << key1 << "\"" << endl;
    cout << "Encrypted:  \"" << encrypted1 << "\"" << endl;
    cout << "Decrypted:  \"" << decrypted1 << "\"" << endl << endl;
    
    // Simple Symmetric Encryption Example
    cout << "2. Simple Symmetric Encryption" << endl;
    cout << "==============================" << endl;
    
    string plaintext2 = "MyData";
    uint32_t key2 = 12345;
    
    SimpleSymmetricEncryption sse(key2);
    string encrypted2 = sse.encrypt(plaintext2);
    string decrypted2 = sse.decrypt(encrypted2);
    
    cout << "Plaintext:  \"" << plaintext2 << "\"" << endl;
    cout << "Key:        " << key2 << endl;
    cout << "Encrypted (hex): ";
    for (unsigned char c : encrypted2) {
        cout << hex << setfill('0') << setw(2) << (int)c << " ";
    }
    cout << dec << endl;
    cout << "Decrypted:  \"" << decrypted2 << "\"" << endl;
    
    // Interactive mode
    cout << "\n3. Interactive Vigenere Cipher" << endl;
    cout << "==============================" << endl;
    
    string userKey;
    cout << "Enter encryption key: ";
    getline(cin, userKey);
    
    if (userKey.empty()) {
        cout << "Empty key provided." << endl;
        return 1;
    }
    
    VigenareCipher userVC(userKey);
    string userText;
    
    while (true) {
        cout << "Enter text to encrypt (or 'quit'): ";
        getline(cin, userText);
        
        if (userText == "quit") break;
        
        if (userText.empty()) continue;
        
        string encrypted = userVC.encrypt(userText);
        string decrypted = userVC.decrypt(encrypted);
        
        cout << "Encrypted: \"" << encrypted << "\"" << endl;
        cout << "Decrypted: \"" << decrypted << "\"" << endl << endl;
    }
    
    return 0;
}
