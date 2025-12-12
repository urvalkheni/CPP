#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

// Base64 Encoding/Decoding
class Base64 {
private:
    static const string BASE64_CHARS;
    
    int findIndex(char c) {
        return BASE64_CHARS.find(c);
    }
    
public:
    string encode(const string& input) {
        string result = "";
        int i = 0;
        unsigned char char_array_3[3];
        unsigned char char_array_4[4];
        
        for (size_t j = 0; j < input.length(); j++) {
            char_array_3[i++] = input[j];
            
            if (i == 3) {
                char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
                char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
                char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
                char_array_4[3] = char_array_3[2] & 0x3f;
                
                for (i = 0; i < 4; i++) {
                    result += BASE64_CHARS[char_array_4[i]];
                }
                i = 0;
            }
        }
        
        if (i) {
            for (int j = i; j < 3; j++) {
                char_array_3[j] = '\0';
            }
            
            char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
            char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
            char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
            
            for (int j = 0; j <= i; j++) {
                result += BASE64_CHARS[char_array_4[j]];
            }
            while (i++ < 3) {
                result += '=';
            }
        }
        
        return result;
    }
    
    string decode(const string& input) {
        int in_len = input.size();
        int i = 0, j = 0, in_ = 0;
        unsigned char char_array_4[4], char_array_3[3];
        string result = "";
        
        while (in_len-- && (input[in_] != '=') && 
               (isalnum(input[in_]) || input[in_] == '+' || input[in_] == '/' || input[in_] == '-')) {
            
            char_array_4[i++] = input[in_]; in_++;
            if (i == 4) {
                for (i = 0; i < 4; i++) {
                    char_array_4[i] = findIndex(char_array_4[i]);
                }
                
                char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
                char_array_3[1] = (((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2));
                char_array_3[2] = (((char_array_4[2] & 0x3) << 6) + char_array_4[3]);
                
                for (i = 0; i < 3; i++) {
                    result += char_array_3[i];
                }
                i = 0;
            }
        }
        
        if (i) {
            for (j = i; j < 4; j++) {
                char_array_4[j] = 0;
            }
            
            for (j = 0; j < 4; j++) {
                char_array_4[j] = findIndex(char_array_4[j]);
            }
            
            char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
            char_array_3[1] = (((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2));
            
            for (j = 0; j < i - 1; j++) {
                result += char_array_3[j];
            }
        }
        
        return result;
    }
};

const string Base64::BASE64_CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

// Hexadecimal Encoding/Decoding
class HexEncoder {
public:
    string encode(const string& input) {
        string result = "";
        for (unsigned char c : input) {
            result += "0123456789ABCDEF"[c >> 4];
            result += "0123456789ABCDEF"[c & 15];
        }
        return result;
    }
    
    string decode(const string& input) {
        string result = "";
        if (input.length() % 2 != 0) {
            cout << "Error: Invalid hex string length." << endl;
            return result;
        }
        
        for (size_t i = 0; i < input.length(); i += 2) {
            string byte = input.substr(i, 2);
            char c = (char)strtol(byte.c_str(), nullptr, 16);
            result += c;
        }
        return result;
    }
};

int main() {
    cout << "=== Encoding/Decoding Algorithms ===" << endl;
    cout << "Base64 and Hexadecimal encoding" << endl << endl;
    
    Base64 base64;
    HexEncoder hexEncoder;
    string input;
    
    while (true) {
        cout << "Enter text to encode (or 'quit' to exit): ";
        getline(cin, input);
        
        if (input == "quit") break;
        
        if (input.empty()) {
            cout << "Please enter non-empty text." << endl;
            continue;
        }
        
        string base64Encoded = base64.encode(input);
        string hexEncoded = hexEncoder.encode(input);
        
        cout << "\nOriginal: \"" << input << "\"" << endl;
        cout << "Base64:   " << base64Encoded << endl;
        cout << "Hex:      " << hexEncoded << endl;
        
        // Decode
        string base64Decoded = base64.decode(base64Encoded);
        string hexDecoded = hexEncoder.decode(hexEncoded);
        
        cout << "\nBase64 Decoded: \"" << base64Decoded << "\"" << endl;
        cout << "Hex Decoded:    \"" << hexDecoded << "\"" << endl << endl;
    }
    
    return 0;
}
