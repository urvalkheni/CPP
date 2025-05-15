#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);  // initialize stringstream with input string
    int number;
    char comma;

    // Read number, then comma (and discard it), repeatedly
    while (ss >> number) {
        result.push_back(number);
        ss >> comma;  // read and discard comma
    }

    return result;
}

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);
    
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
