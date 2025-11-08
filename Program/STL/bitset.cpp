#include <iostream>
#include <bitset>
#include <string>
using namespace std;

// Enhanced Bitset - Binary operations and manipulation
int main() {
    cout << "=== ENHANCED BITSET OPERATIONS ===" << endl;
    
    // 1. Creating bitsets
    cout << "\n--- Creating Bitsets ---" << endl;
    bitset<8> b1;              // 00000000
    bitset<8> b2(42);          // 00101010 (42 in binary)
    bitset<8> b3(string("11110000"));
    bitset<16> b4(255);        // 0000000011111111
    
    cout << "b1 (default):          " << b1 << endl;
    cout << "b2 (42 decimal):       " << b2 << " = " << b2.to_ulong() << endl;
    cout << "b3 (from string):      " << b3 << endl;
    cout << "b4 (255 in 16 bits):   " << b4 << endl;
    
    // 2. Setting and resetting bits
    cout << "\n--- Setting and Resetting ---" << endl;
    b1.set();        // Set all bits to 1
    cout << "b1 after set():        " << b1 << " = " << b1.to_ulong() << endl;
    
    b1.reset();      // Reset all bits to 0
    cout << "b1 after reset():      " << b1 << " = " << b1.to_ulong() << endl;
    
    b1.set(2);       // Set bit at position 2
    b1.set(5);       // Set bit at position 5
    b1.set(7);       // Set bit at position 7
    cout << "b1 after set(2,5,7):   " << b1 << " = " << b1.to_ulong() << endl;
    
    b1.reset(5);     // Reset bit at position 5
    cout << "b1 after reset(5):     " << b1 << " = " << b1.to_ulong() << endl;
    
    // 3. Flipping bits
    cout << "\n--- Flipping Bits ---" << endl;
    bitset<8> b5(170);  // 10101010
    cout << "b5 original:           " << b5 << " = " << b5.to_ulong() << endl;
    
    b5.flip();       // Flip all bits
    cout << "b5 after flip():       " << b5 << " = " << b5.to_ulong() << endl;
    
    b5.flip(0);      // Flip bit at position 0
    cout << "b5 after flip(0):      " << b5 << " = " << b5.to_ulong() << endl;
    
    // 4. Testing bits
    cout << "\n--- Testing Bits ---" << endl;
    bitset<8> b6(string("10110100"));
    cout << "b6: " << b6 << endl;
    cout << "Bit at position 0: " << b6.test(0) << endl;
    cout << "Bit at position 2: " << b6.test(2) << endl;
    cout << "Bit at position 4: " << b6.test(4) << endl;
    cout << "Bit at position 7: " << b6.test(7) << endl;
    
    // 5. Counting and checking
    cout << "\n--- Count and Check Operations ---" << endl;
    cout << "b6: " << b6 << endl;
    cout << "Count of set bits:     " << b6.count() << endl;
    cout << "Total size:            " << b6.size() << endl;
    cout << "All bits set? " << (b6.all() ? "Yes" : "No") << endl;
    cout << "Any bit set? " << (b6.any() ? "Yes" : "No") << endl;
    cout << "No bits set? " << (b6.none() ? "Yes" : "No") << endl;
    
    bitset<8> b_zero;
    cout << "\nb_zero: " << b_zero << endl;
    cout << "Any bit set? " << (b_zero.any() ? "Yes" : "No") << endl;
    cout << "No bits set? " << (b_zero.none() ? "Yes" : "No") << endl;
    
    // 6. Bitwise operations
    cout << "\n--- Bitwise Operations ---" << endl;
    bitset<8> x(string("10101010"));
    bitset<8> y(string("11001100"));
    
    cout << "x:               " << x << " = " << x.to_ulong() << endl;
    cout << "y:               " << y << " = " << y.to_ulong() << endl;
    cout << "x & y (AND):     " << (x & y) << " = " << (x & y).to_ulong() << endl;
    cout << "x | y (OR):      " << (x | y) << " = " << (x | y).to_ulong() << endl;
    cout << "x ^ y (XOR):     " << (x ^ y) << " = " << (x ^ y).to_ulong() << endl;
    cout << "~x (NOT):        " << (~x) << " = " << (~x).to_ulong() << endl;
    
    // 7. Shift operations
    cout << "\n--- Shift Operations ---" << endl;
    bitset<8> shift_test(15);  // 00001111
    cout << "Original:        " << shift_test << " = " << shift_test.to_ulong() << endl;
    cout << "Left shift <<2:  " << (shift_test << 2) << " = " << (shift_test << 2).to_ulong() << endl;
    cout << "Right shift >>2: " << (shift_test >> 2) << " = " << (shift_test >> 2).to_ulong() << endl;
    
    // 8. Conversion operations - Enhanced
    cout << "\n--- Conversion Operations ---" << endl;
    cout << "b2 to unsigned long: " << b2.to_ulong() << endl;
    cout << "b2 to string: " << b2.to_string() << endl;
    cout << "b3 to unsigned long long: " << b3.to_ullong() << endl;
    
    // 9. Checking bit states - Enhanced
    cout << "\n--- Checking Bit States ---" << endl;
    bitset<8> all_ones(255);
    cout << "all_ones: " << all_ones << endl;
    cout << "all_ones.all(): " << (all_ones.all() ? "Yes" : "No") << endl;
    cout << "all_ones.any(): " << (all_ones.any() ? "Yes" : "No") << endl;
    cout << "all_ones.none(): " << (all_ones.none() ? "Yes" : "No") << endl;
    
    // 10. Practical example: Permission system - Enhanced
    cout << "\n=== ENHANCED PERMISSION SYSTEM ===" << endl;
    bitset<8> permissions; // Read, Write, Execute, Delete, Admin, etc.
    permissions.set(0);  // Read permission
    permissions.set(1);  // Write permission
    
    cout << "Initial Permissions: " << permissions << " = " << permissions.to_ulong() << endl;
    cout << "Has Read (bit 0): " << (permissions[0] ? "Yes" : "No") << endl;
    cout << "Has Write (bit 1): " << (permissions[1] ? "Yes" : "No") << endl;
    cout << "Has Execute (bit 2): " << (permissions[2] ? "Yes" : "No") << endl;
    
    permissions.set(2);  // Grant Execute
    cout << "\nAfter granting Execute: " << permissions << endl;
    cout << "Total permissions granted: " << permissions.count() << endl;
    
    // 11. Bitset Properties
    cout << "\n--- Bitset Properties ---" << endl;
    cout << "1. Fixed size at compile time" << endl;
    cout << "2. Efficient memory usage (1 bit per element)" << endl;
    cout << "3. Fast bitwise operations" << endl;
    cout << "4. Easy conversion to/from integer and string" << endl;
    cout << "5. Useful for flags, permissions, bit manipulation" << endl;
    
    return 0;
}