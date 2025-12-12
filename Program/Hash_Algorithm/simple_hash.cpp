#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Simple djb2 hash algorithm
unsigned long djb2Hash(const string& str) {
    unsigned long hash = 5381;
    for (char c : str) {
        hash = ((hash << 5) + hash) + c;  // hash * 33 + c
    }
    return hash;
}

// SDBM hash algorithm
unsigned long sdbmHash(const string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash = c + (hash << 6) + (hash << 16) - hash;
    }
    return hash;
}

// Additive hash algorithm
unsigned long additiveHash(const string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash += (unsigned char)c;
    }
    return hash & ((1 << 16) - 1);  // Limit to 16 bits
}

// Rotating hash algorithm
unsigned long rotatingHash(const string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash = (hash << 4) ^ (hash >> 28) ^ c;
    }
    return hash;
}

void displayMenu() {
    cout << "\n=== Simple Hash Algorithm Selection ===" << endl;
    cout << "1. DJB2 Hash" << endl;
    cout << "2. SDBM Hash" << endl;
    cout << "3. Additive Hash" << endl;
    cout << "4. Rotating Hash" << endl;
    cout << "5. All Algorithms" << endl;
    cout << "6. Exit" << endl;
    cout << "========================================" << endl;
}

int main() {
    string input;
    int choice;

    cout << "=== Simple Hash Generator ===" << endl;
    cout << "Enter string to hash (or 'quit' to exit): ";
    getline(cin, input);

    while (input != "quit") {
        if (input.empty()) {
            cout << "Please enter a non-empty string." << endl;
            cout << "Enter string to hash (or 'quit' to exit): ";
            getline(cin, input);
            continue;
        }

        displayMenu();
        cout << "Select algorithm: ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input." << endl;
            continue;
        }
        cin.ignore();

        cout << "\nInput: \"" << input << "\"" << endl;
        cout << "Hash values (in hexadecimal):" << endl;

        if (choice == 1 || choice == 5) {
            cout << "DJB2:      0x" << hex << djb2Hash(input) << dec << endl;
        }
        if (choice == 2 || choice == 5) {
            cout << "SDBM:      0x" << hex << sdbmHash(input) << dec << endl;
        }
        if (choice == 3 || choice == 5) {
            cout << "Additive:  0x" << hex << additiveHash(input) << dec << endl;
        }
        if (choice == 4 || choice == 5) {
            cout << "Rotating:  0x" << hex << rotatingHash(input) << dec << endl;
        }
        if (choice < 1 || choice > 6) {
            cout << "Invalid choice." << endl;
        }

        cout << "\nEnter string to hash (or 'quit' to exit): ";
        getline(cin, input);
    }

    cout << "Goodbye!" << endl;
    return 0;
}
