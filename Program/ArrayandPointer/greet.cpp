#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    cout << "=== Welcome Program ==="<<endl<<endl;
    
    // Take user input with getline for full names
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    
    // Validate input
    if(name.empty()) {
        cout << "Error: Name cannot be empty!" << endl;
        return 1;
    }
    
    // Capitalize first letter if needed
    if(!name.empty() && islower(name[0])) {
        name[0] = toupper(name[0]);
    }
    
    // Get age for personalized greeting
    int age;
    cout << "Enter your age: ";
    if(!(cin >> age) || age < 0 || age > 150) {
        cout << "Error: Invalid age!" << endl;
        return 1;
    }
    
    // Personalized greeting based on age
    cout << "\n========================================" << endl;
    cout << "Hello, " << name << "!" << endl;
    
    if(age < 13) {
        cout << "You're a young learner! Keep exploring C++!" << endl;
    } else if(age < 20) {
        cout << "Teenage programmer - awesome choice!" << endl;
    } else if(age < 60) {
        cout << "Great to have you learning C++!" << endl;
    } else {
        cout << "Your experience is invaluable!" << endl;
    }
    
    cout << "Nice to meet you!" << endl;
    cout << "========================================" << endl;

    return 0;
}
