#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

// Simple RSA Implementation (Educational - NOT for production)
class SimpleRSA {
private:
    long long p, q, n, phi, e, d;
    
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
    
    long long extGcd(long long a, long long b, long long &x, long long &y) {
        if (b == 0) {
            x = 1, y = 0;
            return a;
        }
        long long x1, y1;
        long long gcd_val = extGcd(b, a % b, x1, y1);
        x = y1;
        y = x1 - (a / b) * y1;
        return gcd_val;
    }
    
public:
    SimpleRSA(long long prime1 = 61, long long prime2 = 53) {
        p = prime1;
        q = prime2;
        n = p * q;
        phi = (p - 1) * (q - 1);
        
        // Choose e
        e = 17;
        while (gcd(e, phi) != 1) {
            e++;
        }
        
        // Calculate d
        long long x, y;
        extGcd(e, phi, x, y);
        d = (x % phi + phi) % phi;
    }
    
    vector<long long> encrypt(const string& plaintext) {
        vector<long long> ciphertext;
        for (char c : plaintext) {
            long long m = (long long)c;
            long long encrypted = modPow(m, e, n);
            ciphertext.push_back(encrypted);
        }
        return ciphertext;
    }
    
    string decrypt(const vector<long long>& ciphertext) {
        string plaintext = "";
        for (long long c : ciphertext) {
            long long decrypted = modPow(c, d, n);
            plaintext += (char)decrypted;
        }
        return plaintext;
    }
    
    void displayKeys() {
        cout << "\nRSA Key Information:" << endl;
        cout << "Prime 1 (p): " << p << endl;
        cout << "Prime 2 (q): " << q << endl;
        cout << "Modulus (n): " << n << endl;
        cout << "Phi(n):      " << phi << endl;
        cout << "Public Exponent (e): " << e << endl;
        cout << "Private Exponent (d): " << d << endl;
    }
};

int main() {
    cout << "=== Simple RSA Encryption/Decryption ===" << endl;
    cout << "Note: Educational implementation with small primes." << endl;
    cout << "Do NOT use for production security." << endl << endl;
    
    SimpleRSA rsa;
    rsa.displayKeys();
    
    string message;
    cout << "\nEnter message to encrypt: ";
    getline(cin, message);
    
    if (message.empty()) {
        cout << "Empty message." << endl;
        return 1;
    }
    
    // Encrypt
    vector<long long> encrypted = rsa.encrypt(message);
    cout << "\nOriginal Message: " << message << endl;
    cout << "Encrypted: ";
    for (long long c : encrypted) {
        cout << c << " ";
    }
    cout << endl;
    
    // Decrypt
    string decrypted = rsa.decrypt(encrypted);
    cout << "Decrypted: " << decrypted << endl;
    
    if (message == decrypted) {
        cout << "\n✓ Encryption/Decryption successful!" << endl;
    } else {
        cout << "\n✗ Mismatch in encryption/decryption." << endl;
    }
    
    return 0;
}
