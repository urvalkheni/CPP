#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

// Simple DSA (Digital Signature Algorithm) Implementation (Educational)
class SimpleDSA {
private:
    long long p, q, g, x, y;  // Public/Private parameters
    
    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return result;
    }
    
    long long modInverse(long long a, long long m) {
        long long m0 = m, x0 = 0, x1 = 1;
        if (m == 1) return 0;
        
        while (a > 1) {
            long long q = a / m;
            long long t = m;
            m = a % m;
            a = t;
            t = x0;
            x0 = x1 - q * x0;
            x1 = t;
        }
        if (x1 < 0) x1 += m0;
        return x1;
    }
    
public:
    SimpleDSA() {
        // Small prime values for demonstration
        p = 299;  // Large prime
        q = 149;  // Prime divisor of p-1
        g = 2;    // Generator
        
        // Private key
        x = 53;
        
        // Public key: y = g^x mod p
        y = modPow(g, x, p);
    }
    
    pair<long long, long long> sign(long long message, long long k = 23) {
        // r = (g^k mod p) mod q
        long long r = modPow(g, k, p) % q;
        
        // s = k^-1 (H(m) + x*r) mod q
        long long kInv = modInverse(k, q);
        long long s = (kInv * (message + x * r)) % q;
        
        return {r, s};
    }
    
    bool verify(long long message, long long r, long long s) {
        if (r < 1 || r >= q || s < 1 || s >= q) {
            return false;
        }
        
        // w = s^-1 mod q
        long long w = modInverse(s, q);
        
        // u1 = H(m)*w mod q
        long long u1 = (message * w) % q;
        
        // u2 = r*w mod q
        long long u2 = (r * w) % q;
        
        // v = ((g^u1 * y^u2) mod p) mod q
        long long gu1 = modPow(g, u1, p);
        long long yu2 = modPow(y, u2, p);
        long long v = ((gu1 * yu2) % p) % q;
        
        return v == r;
    }
    
    void displayKeys() {
        cout << "\nDSA Parameters:" << endl;
        cout << "Prime (p):        " << p << endl;
        cout << "Prime factor (q): " << q << endl;
        cout << "Generator (g):    " << g << endl;
        cout << "Private key (x):  " << x << endl;
        cout << "Public key (y):   " << y << endl;
    }
};

int main() {
    cout << "=== Simple DSA (Digital Signature Algorithm) ===" << endl;
    cout << "Note: Educational implementation with small values." << endl;
    cout << "Do NOT use for production security." << endl << endl;
    
    SimpleDSA dsa;
    dsa.displayKeys();
    
    cout << "\nEnter message (as integer): ";
    long long message;
    if (!(cin >> message) || message <= 0 || message >= 149) {
        cout << "Invalid message. Use a number between 1-148." << endl;
        return 1;
    }
    
    // Sign the message
    auto [r, s] = dsa.sign(message);
    cout << "\nMessage: " << message << endl;
    cout << "Signature: (r=" << r << ", s=" << s << ")" << endl;
    
    // Verify the signature
    bool isValid = dsa.verify(message, r, s);
    cout << "\nVerification: " << (isValid ? "✓ VALID" : "✗ INVALID") << endl;
    
    // Try to verify with tampered message
    long long tamperedMessage = message + 1;
    bool isTamperedValid = dsa.verify(tamperedMessage, r, s);
    cout << "\nTampered Message: " << tamperedMessage << endl;
    cout << "Verification: " << (isTamperedValid ? "✓ VALID" : "✗ INVALID") << endl;
    
    return 0;
}
