#include <iostream>
#include <sstream>
#include <map>
#include <string>

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::map<std::string, int> wordFrequency;
    std::stringstream ss(sentence);
    std::string word;

    while (ss >> word) {
        ++wordFrequency[word];
    }

    std::cout << "\nWord Frequency:\n";
    for (const auto& pair : wordFrequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }


    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;
    return 0;
}
