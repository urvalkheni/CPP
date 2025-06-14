#include <iostream>
#include <sstream>
#include <vector>

#if defined(_WIN32)
#include <windows.h>
#define SLEEP(ms) Sleep(ms)
#else
#include <thread>
#include <chrono>
#define SLEEP(ms) std::this_thread::sleep_for(std::chrono::milliseconds(ms))
#endif

using namespace std;

int main() {
    cout << "Enter your string: ";
    string input;
    getline(cin, input);

    // Split string into words
    vector<string> words;
    for (stringstream ss(input); ss >> input; ) {
        words.push_back(input);
    }

    cout << "\nStep-by-step display:\n\n";

    string current;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!current.empty()) current += " ";
        current += words[i];
        cout << current << endl;
        SLEEP(500); // Delay in milliseconds
    }

    return 0;
}