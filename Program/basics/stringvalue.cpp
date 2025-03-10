#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "ASCII Values of each character:\n";
    for(int i = 0; i < str.length(); i++) {
        cout << "Character: " << str[i] << " | ASCII Value: " << int(str[i]) << endl;
    }
    return 0;
}
