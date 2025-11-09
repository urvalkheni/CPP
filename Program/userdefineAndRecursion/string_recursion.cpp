#include <iostream>
#include <cstring>
using namespace std;

// String Manipulation using Recursion

// Reverse string (recursive)
void reverseString(char str[], int start, int end) {
    if (start >= end) return;
    
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

// Count vowels (recursive)
int countVowels(const char str[], int i = 0) {
    if (str[i] == '\0') return 0;
    
    char ch = tolower(str[i]);
    int count = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 : 0;
    return count + countVowels(str, i + 1);
}

// Count consonants (recursive)
int countConsonants(const char str[], int i = 0) {
    if (str[i] == '\0') return 0;
    
    char ch = tolower(str[i]);
    int count = ((ch >= 'a' && ch <= 'z') && 
                 !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) ? 1 : 0;
    return count + countConsonants(str, i + 1);
}

// Count words (recursive)
int countWords(const char str[], int i = 0, bool inWord = false) {
    if (str[i] == '\0') return 0;
    
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
        if (inWord) {
            return 1 + countWords(str, i + 1, false);
        } else {
            return countWords(str, i + 1, false);
        }
    } else {
        return countWords(str, i + 1, true);
    }
}

// String length (recursive)
int stringLength(const char str[], int i = 0) {
    if (str[i] == '\0') return 0;
    return 1 + stringLength(str, i + 1);
}

// Compare strings (recursive)
int compareStrings(const char str1[], const char str2[], int i = 0) {
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    if (str1[i] == '\0') return -1;
    if (str2[i] == '\0') return 1;
    if (str1[i] != str2[i]) return str1[i] - str2[i];
    
    return compareStrings(str1, str2, i + 1);
}

// Copy string (recursive)
void copyString(char dest[], const char src[], int i = 0) {
    dest[i] = src[i];
    if (src[i] == '\0') return;
    copyString(dest, src, i + 1);
}

// Find character (recursive)
int findChar(const char str[], char ch, int i = 0) {
    if (str[i] == '\0') return -1;
    if (str[i] == ch) return i;
    return findChar(str, ch, i + 1);
}

// Count occurrences of character (recursive)
int countChar(const char str[], char ch, int i = 0) {
    if (str[i] == '\0') return 0;
    int count = (str[i] == ch) ? 1 : 0;
    return count + countChar(str, ch, i + 1);
}

// Convert to uppercase (recursive)
void toUpperCase(char str[], int i = 0) {
    if (str[i] == '\0') return;
    
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
    }
    toUpperCase(str, i + 1);
}

// Convert to lowercase (recursive)
void toLowerCase(char str[], int i = 0) {
    if (str[i] == '\0') return;
    
    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] + 32;
    }
    toLowerCase(str, i + 1);
}

// Remove spaces (recursive)
void removeSpaces(char str[], int i = 0, int j = 0) {
    if (str[i] == '\0') {
        str[j] = '\0';
        return;
    }
    
    if (str[i] != ' ') {
        str[j] = str[i];
        removeSpaces(str, i + 1, j + 1);
    } else {
        removeSpaces(str, i + 1, j);
    }
}

int main() {
    int choice;
    char str[200], str2[200], ch;
    
    cout << "=== STRING MANIPULATION (RECURSION) ===" << endl;
    cout << "\n1. Reverse String" << endl;
    cout << "2. Count Vowels" << endl;
    cout << "3. Count Consonants" << endl;
    cout << "4. Count Words" << endl;
    cout << "5. String Length" << endl;
    cout << "6. Compare Strings" << endl;
    cout << "7. Copy String" << endl;
    cout << "8. Find Character" << endl;
    cout << "9. Count Character Occurrences" << endl;
    cout << "10. Convert to Uppercase" << endl;
    cout << "11. Convert to Lowercase" << endl;
    cout << "12. Remove Spaces" << endl;
    cout << "13. Show All Examples" << endl;
    cout << "\nEnter choice (1-13): ";
    cin >> choice;
    cin.ignore();
    
    switch(choice) {
        case 1:
            cout << "Enter string: ";
            cin.getline(str, 200);
            reverseString(str, 0, strlen(str) - 1);
            cout << "Reversed: " << str << endl;
            break;
            
        case 2:
            cout << "Enter string: ";
            cin.getline(str, 200);
            cout << "Vowel count: " << countVowels(str) << endl;
            break;
            
        case 3:
            cout << "Enter string: ";
            cin.getline(str, 200);
            cout << "Consonant count: " << countConsonants(str) << endl;
            break;
            
        case 4:
            cout << "Enter string: ";
            cin.getline(str, 200);
            int words = countWords(str);
            if (str[stringLength(str) - 1] != ' ') words++;
            cout << "Word count: " << words << endl;
            break;
            
        case 5:
            cout << "Enter string: ";
            cin.getline(str, 200);
            cout << "String length: " << stringLength(str) << endl;
            break;
            
        case 6:
            cout << "Enter first string: ";
            cin.getline(str, 200);
            cout << "Enter second string: ";
            cin.getline(str2, 200);
            
            int cmp = compareStrings(str, str2);
            if (cmp == 0) {
                cout << "Strings are equal" << endl;
            } else if (cmp < 0) {
                cout << "First string is smaller" << endl;
            } else {
                cout << "First string is larger" << endl;
            }
            break;
            
        case 7:
            cout << "Enter string: ";
            cin.getline(str, 200);
            copyString(str2, str);
            cout << "Copied string: " << str2 << endl;
            break;
            
        case 8:
            cout << "Enter string: ";
            cin.getline(str, 200);
            cout << "Enter character to find: ";
            cin >> ch;
            
            int pos = findChar(str, ch);
            if (pos != -1) {
                cout << "Character '" << ch << "' found at index: " << pos << endl;
            } else {
                cout << "Character not found" << endl;
            }
            break;
            
        case 9:
            cout << "Enter string: ";
            cin.getline(str, 200);
            cout << "Enter character to count: ";
            cin >> ch;
            cout << "Occurrences of '" << ch << "': " << countChar(str, ch) << endl;
            break;
            
        case 10:
            cout << "Enter string: ";
            cin.getline(str, 200);
            toUpperCase(str);
            cout << "Uppercase: " << str << endl;
            break;
            
        case 11:
            cout << "Enter string: ";
            cin.getline(str, 200);
            toLowerCase(str);
            cout << "Lowercase: " << str << endl;
            break;
            
        case 12:
            cout << "Enter string: ";
            cin.getline(str, 200);
            removeSpaces(str);
            cout << "Without spaces: " << str << endl;
            break;
            
        case 13: {
            strcpy(str, "Hello World");
            cout << "\n--- All Examples (String: \"Hello World\") ---" << endl;
            
            cout << "\nOriginal: " << str << endl;
            cout << "Length: " << stringLength(str) << endl;
            cout << "Vowels: " << countVowels(str) << endl;
            cout << "Consonants: " << countConsonants(str) << endl;
            
            char temp[200];
            strcpy(temp, str);
            reverseString(temp, 0, strlen(temp) - 1);
            cout << "Reversed: " << temp << endl;
            
            strcpy(temp, str);
            toUpperCase(temp);
            cout << "Uppercase: " << temp << endl;
            
            strcpy(temp, str);
            toLowerCase(temp);
            cout << "Lowercase: " << temp << endl;
            
            cout << "Find 'o': index " << findChar(str, 'o') << endl;
            cout << "Count of 'l': " << countChar(str, 'l') << endl;
            
            strcpy(temp, str);
            removeSpaces(temp);
            cout << "No spaces: " << temp << endl;
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== STRING RECURSION INFO ===" << endl;
    cout << "✓ All operations use recursion" << endl;
    cout << "✓ Base case: null terminator '\\0'" << endl;
    cout << "✓ Character-by-character processing" << endl;
    cout << "✓ Time complexity: O(n) where n is string length" << endl;
    
    return 0;
}
