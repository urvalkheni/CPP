#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cmath>
using namespace std;

// Simple MD5-like hash (NOT real MD5 - Educational only)
class SimpleHash {
private:
    static const uint32_t T[64];
    
public:
    string generateHash(const string& message) {
        // Initialize hash values
        uint32_t a0 = 0x67452301;
        uint32_t b0 = 0xefcdab89;
        uint32_t c0 = 0x98badcfe;
        uint32_t d0 = 0x10325476;
        
        // Pre-processing: adding padding bits
        uint64_t bitlen = message.length() * 8;
        string msg = message;
        msg += (char)0x80;
        
        while ((msg.length() % 64) != 56) {
            msg += (char)0x00;
        }
        
        // Append original message length
        for (int i = 0; i < 8; i++) {
            msg += (char)((bitlen >> (i * 8)) & 0xFF);
        }
        
        // Process message in successive 512-bit chunks
        for (size_t offset = 0; offset < msg.length(); offset += 64) {
            uint32_t x[16];
            for (int i = 0; i < 16; i++) {
                x[i] = ((uint32_t)msg[offset + i*4 + 0] & 0xFF) |
                       (((uint32_t)msg[offset + i*4 + 1] & 0xFF) << 8) |
                       (((uint32_t)msg[offset + i*4 + 2] & 0xFF) << 16) |
                       (((uint32_t)msg[offset + i*4 + 3] & 0xFF) << 24);
            }
            
            // Main loop (simplified)
            uint32_t aa = a0, bb = b0, cc = c0, dd = d0;
            
            for (int i = 0; i < 64; i++) {
                uint32_t f, g;
                if (i < 16) {
                    f = (bb & cc) | ((~bb) & dd);
                    g = i;
                } else if (i < 32) {
                    f = (dd & bb) | ((~dd) & cc);
                    g = (5 * i + 1) % 16;
                } else if (i < 48) {
                    f = bb ^ cc ^ dd;
                    g = (3 * i + 5) % 16;
                } else {
                    f = cc ^ (bb | (~dd));
                    g = (7 * i) % 16;
                }
                
                uint32_t temp = dd;
                dd = cc;
                cc = bb;
                bb = bb + ((aa + f + T[i] + x[g]) << 7);
                aa = temp;
            }
            
            a0 += aa;
            b0 += bb;
            c0 += cc;
            d0 += dd;
        }
        
        // Produce the final hash value
        stringstream result;
        result << hex << setfill('0');
        result << setw(8) << a0 << setw(8) << b0
               << setw(8) << c0 << setw(8) << d0;
        return result.str();
    }
};

const uint32_t SimpleHash::T[64] = {
    0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
    0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
    0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
    0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
    0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
    0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
    0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
    0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
    0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
    0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
    0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
    0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
    0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
    0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
    0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
    0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
};

int main() {
    string input;
    
    cout << "=== MD5-like Hash Generator (Educational Implementation) ===" << endl;
    cout << "Note: This is a SIMPLIFIED educational implementation." << endl;
    cout << "Do NOT use for security or production purposes." << endl << endl;
    
    SimpleHash hasher;
    
    while (true) {
        cout << "Enter text to hash (or 'quit' to exit): ";
        getline(cin, input);
        
        if (input == "quit") break;
        
        if (input.empty()) {
            cout << "Please enter non-empty text." << endl;
            continue;
        }
        
        string hash = hasher.generateHash(input);
        
        cout << "\nInput: \"" << input << "\"" << endl;
        cout << "Hash:  " << hash << endl;
        cout << "Length: " << hash.length() << " characters" << endl << endl;
    }
    
    return 0;
}
