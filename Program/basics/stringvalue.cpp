#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Nothing to display; empty string provided." << endl;
        return 0;
    }

    cout << "ASCII Values of each character:\n";
    for(char ch : str) {
        cout << "Character: " << ch << " | ASCII Value: " << static_cast<int>(ch) << endl;
    }
    return 0;
}
