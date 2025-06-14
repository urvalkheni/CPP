#include <iostream>
#include <sstream>
#include <vector>
#include <thread>    // Required for std::this_thread
#include <chrono>    // Required for std::chrono
using namespace std;

int main() {
    string input;
    cout << "Enter your string: ";
    getline(cin, input); // Take full line input

    stringstream ss(input);
    string word;
    vector<string> words;

    // Split input into words
    while (ss >> word) {
        words.push_back(word);
    }

    cout << "\nStep-by-step display:\n\n";
    string current = "";

    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) current += " ";
        current += words[i];
        cout << current << endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}