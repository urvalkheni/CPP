#include <iostream>
#include <string>
using namespace std;

// Program 1: Advanced String Manipulation using Recursion

// Check if string is palindrome
bool isPalindrome(string str, int start, int end) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return isPalindrome(str, start + 1, end - 1);
}

// Reverse a string using recursion
string reverseString(string str, int index = 0) {
    if (index == str.length()) return "";
    return reverseString(str, index + 1) + str[index];
}

// Count vowels recursively
int countVowels(string str, int index = 0) {
    if (index == str.length()) return 0;
    char ch = tolower(str[index]);
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 : 0;
    return isVowel + countVowels(str, index + 1);
}

// Remove duplicates recursively
string removeDuplicates(string str, int index = 0, string result = "") {
    if (index == str.length()) return result;
    if (result.find(str[index]) == string::npos) {
        return removeDuplicates(str, index + 1, result + str[index]);
    }
    return removeDuplicates(str, index + 1, result);
}

// Generate all permutations
void generatePermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }
    for (int i = left; i <= right; i++) {
        swap(str[left], str[i]);
        generatePermutations(str, left + 1, right);
        swap(str[left], str[i]); // backtrack
    }
}

int main() {
    string input;
    int choice;
    
    cout << "=== ADVANCED STRING MANIPULATION ===" << endl;
    cout << "\n1. Check Palindrome" << endl;
    cout << "2. Reverse String" << endl;
    cout << "3. Count Vowels" << endl;
    cout << "4. Remove Duplicates" << endl;
    cout << "5. Generate All Permutations" << endl;
    cout << "6. All Operations" << endl;
    cout << "\nEnter choice: ";
    cin >> choice;
    cin.ignore();
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    switch (choice) {
        case 1:
            if (isPalindrome(input, 0, input.length() - 1)) {
                cout << "\"" << input << "\" is a palindrome!" << endl;
            } else {
                cout << "\"" << input << "\" is not a palindrome." << endl;
            }
            break;
            
        case 2:
            cout << "Original: " << input << endl;
            cout << "Reversed: " << reverseString(input) << endl;
            break;
            
        case 3:
            cout << "Number of vowels: " << countVowels(input) << endl;
            break;
            
        case 4:
            cout << "Original: " << input << endl;
            cout << "After removing duplicates: " << removeDuplicates(input) << endl;
            break;
            
        case 5:
            cout << "All permutations of \"" << input << "\":" << endl;
            generatePermutations(input, 0, input.length() - 1);
            break;
            
        case 6:
            cout << "\n=== ALL OPERATIONS ===" << endl;
            cout << "Original String: " << input << endl;
            cout << "Reversed: " << reverseString(input) << endl;
            cout << "Is Palindrome: " << (isPalindrome(input, 0, input.length() - 1) ? "Yes" : "No") << endl;
            cout << "Vowel Count: " << countVowels(input) << endl;
            cout << "Without Duplicates: " << removeDuplicates(input) << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}