#include <iostream>
#include <bitset>
#include <string>
using namespace std;

// STL Program 1: Bitset - Binary operations and manipulation
int main() {
    cout << "=== STL BITSET DEMONSTRATION ===" << endl;
    
    // 1. Creating bitsets
    bitset<8> b1;              // 00000000
    bitset<8> b2(42);          // 00101010 (42 in binary)
    bitset<8> b3(string("11110000"));
    
    cout << "b1 (default): " << b1 << endl;
    cout << "b2 (42): " << b2 << endl;
    cout << "b3 (from string): " << b3 << endl;
    
    // 2. Setting and resetting bits
    b1.set();        // Set all bits to 1
    cout << "\nb1 after set(): " << b1 << endl;
    
    b1.reset();      // Reset all bits to 0
    cout << "b1 after reset(): " << b1 << endl;
    
    b1.set(2);       // Set bit at position 2
    b1.set(5);       // Set bit at position 5
    cout << "b1 after setting positions 2 and 5: " << b1 << endl;
    
    // 3. Flipping bits
    b2.flip();       // Flip all bits
    cout << "\nb2 after flip(): " << b2 << endl;
    
    b2.flip(0);      // Flip bit at position 0
    cout << "b2 after flipping position 0: " << b2 << endl;
    
    // 4. Testing bits
    cout << "\nTesting bits in b3:" << endl;
    cout << "Bit at position 0: " << b3.test(0) << endl;
    cout << "Bit at position 4: " << b3.test(4) << endl;
    
    // 5. Counting bits
    cout << "\nCount of set bits in b3: " << b3.count() << endl;
    cout << "Size of b3: " << b3.size() << endl;
    
    // 6. Bitwise operations
    bitset<8> x(string("10101010"));
    bitset<8> y(string("11001100"));
    
    cout << "\nBitwise Operations:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "x & y: " << (x & y) << endl;
    cout << "x | y: " << (x | y) << endl;
    cout << "x ^ y: " << (x ^ y) << endl;
    cout << "~x: " << (~x) << endl;
    
    // 7. Converting to numbers
    cout << "\nConversions:" << endl;
    cout << "b2 to unsigned long: " << b2.to_ulong() << endl;
    cout << "b2 to string: " << b2.to_string() << endl;
    
    // 8. Checking if all/any/none bits are set
    cout << "\nChecking bit states:" << endl;
    cout << "b3.all(): " << b3.all() << endl;
    cout << "b3.any(): " << b3.any() << endl;
    cout << "b3.none(): " << b3.none() << endl;
    
    // 9. Practical example: Permission system
    cout << "\n=== PERMISSION SYSTEM EXAMPLE ===" << endl;
    bitset<4> permissions; // Read, Write, Execute, Admin
    permissions.set(0);  // Read permission
    permissions.set(1);  // Write permission
    
    cout << "Permissions: " << permissions << endl;
    cout << "Has Read (bit 0): " << permissions[0] << endl;
    cout << "Has Write (bit 1): " << permissions[1] << endl;
    cout << "Has Execute (bit 2): " << permissions[2] << endl;
    cout << "Has Admin (bit 3): " << permissions[3] << endl;
    
    return 0;
}