#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// Enhanced Palindrome Operations Using Recursion
// Version 2.0 - Added longest palindrome, partitioning, and advanced features

string toLowerCopy(const string& input) {
    string result = input;
    transform(result.begin(), result.end(), result.begin(), [](unsigned char ch) {
        return static_cast<char>(tolower(ch));
    });
    return result;
}

bool isPalindromeIterative(const string& str) {
    size_t left = 0;
    size_t right = str.length();
    if (right == 0) {
        return true;
    }
    right--;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void buildFrequencyRecursive(const string& str, size_t index, vector<int>& frequency) {
    if (index == str.length()) {
        return;
    }
    unsigned char ch = static_cast<unsigned char>(tolower(str[index]));
    frequency[ch]++;
    buildFrequencyRecursive(str, index + 1, frequency);
}

bool canFormPalindromePermutation(const string& str) {
    vector<int> frequency(256, 0);
    buildFrequencyRecursive(str, 0, frequency);
    int oddCount = 0;
    for (int value : frequency) {
        if (value % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

int longestPalindromeSubsequenceRec(const string& str, int left, int right, vector<vector<int>>& memo) {
    if (left > right) {
        return 0;
    }
    if (left == right) {
        return 1;
    }
    int& cached = memo[left][right];
    if (cached != -1) {
        return cached;
    }
    if (str[left] == str[right]) {
        cached = 2 + longestPalindromeSubsequenceRec(str, left + 1, right - 1, memo);
        return cached;
    }
    cached = max(longestPalindromeSubsequenceRec(str, left + 1, right, memo),
                 longestPalindromeSubsequenceRec(str, left, right - 1, memo));
    return cached;
}

int longestPalindromeSubsequence(const string& str) {
    if (str.empty()) {
        return 0;
    }
    vector<vector<int>> memo(str.length(), vector<int>(str.length(), -1));
    return longestPalindromeSubsequenceRec(str, 0, static_cast<int>(str.length()) - 1, memo);
}

string readLineWithPrompt(const string& prompt) {
    cout << prompt;
    cin >> ws;
    string input;
    getline(cin, input);
    return input;
}

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

// NEW: Find longest palindromic substring (returns the substring)
string findLongestPalindromeSubstring(string str, int left, int right, int& maxLen, int& startIdx) {
    if (left > right) return "";
    
    // Base case: single character
    if (left == right) {
        if (maxLen < 1) {
            maxLen = 1;
            startIdx = left;
        }
        return string(1, str[left]);
    }
    
    // Check if current substring is palindrome
    if (str[left] == str[right]) {
        string middle = findLongestPalindromeSubstring(str, left + 1, right - 1, maxLen, startIdx);
        if (middle == str.substr(left + 1, right - left - 1)) {
            int currentLen = right - left + 1;
            if (currentLen > maxLen) {
                maxLen = currentLen;
                startIdx = left;
            }
        }
    }
    
    findLongestPalindromeSubstring(str, left + 1, right, maxLen, startIdx);
    findLongestPalindromeSubstring(str, left, right - 1, maxLen, startIdx);
    
    return str.substr(startIdx, maxLen);
}

// NEW: Generate all palindromic partitions
void generatePalindromePartitions(string str, int start, vector<string>& current, vector<vector<string>>& result) {
    if (start == str.length()) {
        result.push_back(current);
        return;
    }
    
    for (int end = start; end < str.length(); end++) {
        if (isPalindromeString(str.substr(start, end - start + 1), 0, end - start)) {
            current.push_back(str.substr(start, end - start + 1));
            generatePalindromePartitions(str, end + 1, current, result);
            current.pop_back();
        }
    }
}

// NEW: Remove characters to make palindrome (min deletions)
int minDeletionsForPalindrome(string str, int left, int right) {
    if (left >= right) return 0;
    
    if (str[left] == str[right]) {
        return minDeletionsForPalindrome(str, left + 1, right - 1);
    }
    
    return 1 + min(minDeletionsForPalindrome(str, left + 1, right),
                   minDeletionsForPalindrome(str, left, right - 1));
}

int main() {
    int choice;
    
    cout << "=== PALINDROME CHECKER (RECURSION) - ENHANCED ===" << endl;
    cout << "Version 2.0 with Advanced Features!" << endl;
    cout << "\n1. Check String Palindrome" << endl;
    cout << "2. Check Number Palindrome" << endl;
    cout << "3. Find Palindromic Substrings" << endl;
    cout << "4. Count Palindromes in Range" << endl;
    cout << "5. Check Array Palindrome" << endl;
    cout << "6. Show All Examples" << endl;
    cout << "7. Find Longest Palindromic Substring (NEW)" << endl;
    cout << "8. Palindrome Partitioning (NEW)" << endl;
    cout << "9. Min Deletions for Palindrome (NEW)" << endl;
    cout << "10. Can Form Palindrome Permutation (NEW)" << endl;
    cout << "11. Compare Recursive vs Iterative Check (NEW)" << endl;
    cout << "12. Longest Palindromic Subsequence Length (NEW)" << endl;
    cout << "\nEnter choice (1-12): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            string input = readLineWithPrompt("Enter a string: ");
            string normalized = toLowerCopy(input);
            bool result = normalized.empty() ||
                          isPalindromeString(normalized, 0, static_cast<int>(normalized.length()) - 1);
            cout << '"' << input << '"' << (result ? " is a palindrome!" : " is NOT a palindrome.") << endl;
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
        
        case 7: {
            // NEW: Longest palindromic substring
            cout << "\n--- Longest Palindromic Substring ---" << endl;
            string testStr;
            cout << "Enter string: ";
            cin >> testStr;
            
            int maxLen = 0, startIdx = 0;
            string longest = findLongestPalindromeSubstring(testStr, 0, testStr.length() - 1, maxLen, startIdx);
            cout << "Longest palindromic substring: " << testStr.substr(startIdx, maxLen) << endl;
            cout << "Length: " << maxLen << endl;
            break;
        }
        
        case 8: {
            // NEW: Palindrome partitioning
            cout << "\n--- Palindrome Partitioning ---" << endl;
            string partStr;
            cout << "Enter string: ";
            cin >> partStr;
            
            vector<vector<string>> allPartitions;
            vector<string> current;
            generatePalindromePartitions(partStr, 0, current, allPartitions);
            
            cout << "All palindromic partitions:" << endl;
            for (int i = 0; i < min((int)allPartitions.size(), 10); i++) {
                cout << i + 1 << ". ";
                for (const string& part : allPartitions[i]) {
                    cout << "[" << part << "] ";
                }
                cout << endl;
            }
            if (allPartitions.size() > 10) {
                cout << "... and " << (allPartitions.size() - 10) << " more partitions" << endl;
            }
            break;
        }
        
        case 9: {
            // NEW: Minimum deletions for palindrome
            cout << "\n--- Minimum Deletions to Make Palindrome ---" << endl;
            string delStr;
            cout << "Enter string: ";
            cin >> delStr;
            
            int minDel = minDeletionsForPalindrome(delStr, 0, delStr.length() - 1);
            cout << "Minimum deletions required: " << minDel << endl;
            break;
        }
        
        case 10: {
            cout << "\n--- Can Form Palindrome Permutation ---" << endl;
            string candidate = readLineWithPrompt("Enter string: ");
            bool possible = canFormPalindromePermutation(candidate);
            cout << '"' << candidate << '"'
                 << (possible ? " CAN " : " CANNOT ")
                 << "be rearranged into a palindrome" << endl;
            break;
        }
        
        case 11: {
            cout << "\n--- Recursive vs Iterative Check ---" << endl;
            string sample = readLineWithPrompt("Enter string: ");
            string normalized = toLowerCopy(sample);
            bool recursiveResult = normalized.empty() ||
                                   isPalindromeString(normalized, 0, static_cast<int>(normalized.length()) - 1);
            bool iterativeResult = isPalindromeIterative(normalized);
            cout << "Recursive says: " << (recursiveResult ? "Palindrome" : "Not palindrome") << endl;
            cout << "Iterative says: " << (iterativeResult ? "Palindrome" : "Not palindrome") << endl;
            cout << "Results match: " << (recursiveResult == iterativeResult ? "Yes" : "No") << endl;
            break;
        }
        
        case 12: {
            cout << "\n--- Longest Palindromic Subsequence Length ---" << endl;
            string source = readLineWithPrompt("Enter string: ");
            int length = longestPalindromeSubsequence(source);
            cout << "Longest palindromic subsequence length: " << length << endl;
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== PALINDROME PROPERTIES (ENHANCED) ===" << endl;
    cout << "✓ Reads the same forward and backward" << endl;
    cout << "✓ Recursive approach: compare first and last elements" << endl;
    cout << "✓ Time complexity: O(n) for basic check" << endl;
    cout << "✓ Space complexity: O(n) for recursion stack" << endl;
    cout << "✓ Advanced algorithms: longest substring, partitioning" << endl;
    cout << "✓ Supports iterative and recursive strategies" << endl;
    cout << "✓ Dynamic programming for subsequence length" << endl;
    cout << "✓ Checks for permutation-based palindromes" << endl;
    
    return 0;
}
