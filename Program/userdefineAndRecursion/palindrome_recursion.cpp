#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Palindrome Checker using Recursion

// Check if string is palindrome (recursion)
bool isPalindromeString(string str, int start, int end) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return isPalindromeString(str, start + 1, end - 1);
}

// Check if number is palindrome (recursion)
bool isPalindromeNumber(int num, int reversed, int original) {
    if (num == 0) {
        return original == reversed;
    }
    return isPalindromeNumber(num / 10, reversed * 10 + num % 10, original);
}

// Generate all palindromic substrings
void printPalindromicSubstrings(string str) {
    int n = str.length();
    cout << "Palindromic substrings:" << endl;
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string sub = str.substr(i, j - i + 1);
            if (isPalindromeString(sub, 0, sub.length() - 1)) {
                cout << sub << " ";
            }
        }
    }
    cout << endl;
}

// Count palindromes in range
int countPalindromes(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isPalindromeNumber(i, 0, i)) {
            count++;
        }
    }
    return count;
}

// Find longest palindromic substring length
int longestPalindrome(string str, int left, int right) {
    if (left > right) return 0;
    if (left == right) return 1;
    
    if (str[left] == str[right]) {
        int remaining = right - left - 1;
        if (remaining == longestPalindrome(str, left + 1, right - 1)) {
            return remaining + 2;
        }
    }
    
    return max(longestPalindrome(str, left + 1, right),
               longestPalindrome(str, left, right - 1));
}

// Check if array is palindrome
bool isArrayPalindrome(int arr[], int start, int end) {
    if (start >= end) return true;
    if (arr[start] != arr[end]) return false;
    return isArrayPalindrome(arr, start + 1, end - 1);
}

int main() {
    int choice;
    
    cout << "=== PALINDROME CHECKER (RECURSION) ===" << endl;
    cout << "\n1. Check String Palindrome" << endl;
    cout << "2. Check Number Palindrome" << endl;
    cout << "3. Find Palindromic Substrings" << endl;
    cout << "4. Count Palindromes in Range" << endl;
    cout << "5. Check Array Palindrome" << endl;
    cout << "6. Show All Examples" << endl;
    cout << "\nEnter choice (1-6): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            string str;
            cout << "Enter a string: ";
            cin >> str;
            
            // Convert to lowercase for case-insensitive check
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            
            if (isPalindromeString(str, 0, str.length() - 1)) {
                cout << "\"" << str << "\" is a palindrome!" << endl;
            } else {
                cout << "\"" << str << "\" is NOT a palindrome." << endl;
            }
            break;
        }
        
        case 2: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            
            if (num < 0) {
                cout << "Negative numbers are not palindromes." << endl;
            } else if (isPalindromeNumber(num, 0, num)) {
                cout << num << " is a palindrome!" << endl;
            } else {
                cout << num << " is NOT a palindrome." << endl;
            }
            break;
        }
        
        case 3: {
            string str;
            cout << "Enter a string: ";
            cin >> str;
            printPalindromicSubstrings(str);
            break;
        }
        
        case 4: {
            int start, end;
            cout << "Enter range (start end): ";
            cin >> start >> end;
            
            int count = countPalindromes(start, end);
            cout << "Palindromes in range [" << start << ", " << end 
                 << "]: " << count << endl;
            
            cout << "They are: ";
            for (int i = start; i <= end; i++) {
                if (isPalindromeNumber(i, 0, i)) {
                    cout << i << " ";
                }
            }
            cout << endl;
            break;
        }
        
        case 5: {
            int n;
            cout << "Enter array size: ";
            cin >> n;
            
            int arr[n];
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            
            if (isArrayPalindrome(arr, 0, n - 1)) {
                cout << "Array is a palindrome!" << endl;
            } else {
                cout << "Array is NOT a palindrome." << endl;
            }
            break;
        }
        
        case 6: {
            // String examples
            cout << "\n--- String Palindrome Examples ---" << endl;
            string strs[] = {"radar", "hello", "level", "world", "madam"};
            for (string s : strs) {
                bool result = isPalindromeString(s, 0, s.length() - 1);
                cout << s << ": " << (result ? "Palindrome" : "Not Palindrome") << endl;
            }
            
            // Number examples
            cout << "\n--- Number Palindrome Examples ---" << endl;
            int nums[] = {121, 123, 12321, 456, 1001};
            for (int n : nums) {
                bool result = isPalindromeNumber(n, 0, n);
                cout << n << ": " << (result ? "Palindrome" : "Not Palindrome") << endl;
            }
            
            // Palindrome count
            cout << "\n--- Palindromes from 1 to 100 ---" << endl;
            int count = countPalindromes(1, 100);
            cout << "Total: " << count << endl;
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== PALINDROME PROPERTIES ===" << endl;
    cout << "✓ Reads the same forward and backward" << endl;
    cout << "✓ Recursive approach: compare first and last elements" << endl;
    cout << "✓ Time complexity: O(n)" << endl;
    cout << "✓ Space complexity: O(n) for recursion stack" << endl;
    
    return 0;
}
