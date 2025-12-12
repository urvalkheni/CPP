#include <iostream>
#include <string>
#include <bitset>
#include <iomanip>
#include <cstring>
using namespace std;

// Simple SHA-1 implementation (educational - not cryptographically secure)
class SimpleSHA1 {
private:
    uint32_t h0, h1, h2, h3, h4;
    
    uint32_t leftRotate(uint32_t value, int count) {
        return (value << count) | (value >> (32 - count));
    }
    
public:
    SimpleSHA1() {
        h0 = 0x67452301;
        h1 = 0xEFCDAB89;
        h2 = 0x98BADCFE;
        h3 = 0x10325476;
        h4 = 0xC3D2E1F0;
    }
    
    string hash(const string& message) {
        // Pre-processing
        uint64_t ml = message.length() * 8;
        string paddedMsg = message;
        paddedMsg += (char)0x80;
        
        while ((paddedMsg.length() % 64) != 56) {
            paddedMsg += (char)0x00;
        }
        
        // Append original length
        for (int i = 56; i >= 0; i -= 8) {
            paddedMsg += (char)((ml >> i) & 0xFF);
        }
        
        // Process message in 512-bit chunks
        for (size_t offset = 0; offset < paddedMsg.length(); offset += 64) {
            uint32_t w[80];
            
            for (int i = 0; i < 16; i++) {
                w[i] = (paddedMsg[offset + i*4] << 24) |
                       (paddedMsg[offset + i*4 + 1] << 16) |
                       (paddedMsg[offset + i*4 + 2] << 8) |
                       (paddedMsg[offset + i*4 + 3]);
            }
            
            for (int i = 16; i < 80; i++) {
                w[i] = leftRotate(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
            }
            
            uint32_t a = h0, b = h1, c = h2, d = h3, e = h4;
            
            for (int i = 0; i < 80; i++) {
                uint32_t f, k;
                if (i < 20) {
                    f = (b & c) | ((~b) & d);
                    k = 0x5A827999;
                } else if (i < 40) {
                    f = b ^ c ^ d;
                    k = 0x6ED9EBA1;
                } else if (i < 60) {
                    f = (b & c) | (b & d) | (c & d);
                    k = 0x8F1BBCDC;
                } else {
                    f = b ^ c ^ d;
                    k = 0xCA62C1D6;
                }
                
                uint32_t temp = leftRotate(a, 5) + f + e + k + w[i];
                e = d;
                d = c;
                c = leftRotate(b, 30);
                b = a;
                a = temp;
            }
            
            h0 += a;
            h1 += b;
            h2 += c;
            h3 += d;
            h4 += e;
        }
        
        // Produce final hash
        stringstream result;
        result << hex << setfill('0')
               << setw(8) << h0
               << setw(8) << h1
               << setw(8) << h2
               << setw(8) << h3
               << setw(8) << h4;
        return result.str();
    }
};

int main() {
    string input;
    
    cout << "=== SHA-1 Hash Generator (Educational Implementation) ===" << endl;
    cout << "Note: This is a simplified educational implementation." << endl;
    cout << "Do NOT use for production or security purposes." << endl << endl;
    
    while (true) {
        cout << "Enter text to hash (or 'quit' to exit): ";
        getline(cin, input);
        
        if (input == "quit") break;
        
        if (input.empty()) {
            cout << "Please enter non-empty text." << endl;
            continue;
        }
        
        SimpleSHA1 sha1;
        string hashValue = sha1.hash(input);
        
        cout << "\nInput: \"" << input << "\"" << endl;
        cout << "SHA-1:  " << hashValue << endl;
        cout << "Length: " << hashValue.length() << " characters" << endl << endl;
    }
    
    return 0;
}
