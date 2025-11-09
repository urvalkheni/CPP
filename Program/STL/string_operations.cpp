#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Comprehensive String Operations
int main() {
    cout << "=== STL STRING OPERATIONS ===" << endl;
    
    // 1. Creating strings
    cout << "\n--- Creating Strings ---" << endl;
    string s1 = "Hello";
    string s2("World");
    string s3(5, 'A');  // AAAAA
    string s4 = s1 + " " + s2;
    
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    
    // 2. String properties
    cout << "\n--- String Properties ---" << endl;
    cout << "Length of s1: " << s1.length() << endl;
    cout << "Size of s1: " << s1.size() << endl;
    cout << "Capacity: " << s1.capacity() << endl;
    cout << "Is empty: " << (s1.empty() ? "Yes" : "No") << endl;
    cout << "Max size: " << s1.max_size() << endl;
    
    // 3. Accessing characters
    cout << "\n--- Accessing Characters ---" << endl;
    cout << "s1[0]: " << s1[0] << endl;
    cout << "s1.at(1): " << s1.at(1) << endl;
    cout << "s1.front(): " << s1.front() << endl;
    cout << "s1.back(): " << s1.back() << endl;
    
    // 4. Modifying strings
    cout << "\n--- Modifying Strings ---" << endl;
    string s5 = "Hello";
    s5.append(" World");
    cout << "After append: " << s5 << endl;
    
    s5.push_back('!');
    cout << "After push_back: " << s5 << endl;
    
    s5.pop_back();
    cout << "After pop_back: " << s5 << endl;
    
    s5.insert(5, " Beautiful");
    cout << "After insert: " << s5 << endl;
    
    s5.erase(5, 10);
    cout << "After erase: " << s5 << endl;
    
    s5.replace(6, 5, "Universe");
    cout << "After replace: " << s5 << endl;
    
    // 5. String search
    cout << "\n--- String Search ---" << endl;
    string text = "Hello World, Welcome to the World of C++";
    
    size_t pos = text.find("World");
    cout << "First 'World' at position: " << pos << endl;
    
    pos = text.find("World", pos + 1);
    cout << "Next 'World' at position: " << pos << endl;
    
    pos = text.rfind("World");
    cout << "Last 'World' at position: " << pos << endl;
    
    pos = text.find_first_of("aeiou");
    cout << "First vowel at position: " << pos << " (" << text[pos] << ")" << endl;
    
    pos = text.find_last_of("aeiou");
    cout << "Last vowel at position: " << pos << " (" << text[pos] << ")" << endl;
    
    // 6. Substring
    cout << "\n--- Substring Operations ---" << endl;
    string original = "Programming";
    cout << "Original: " << original << endl;
    cout << "Substring(0, 7): " << original.substr(0, 7) << endl;
    cout << "Substring(7): " << original.substr(7) << endl;
    
    // 7. String comparison
    cout << "\n--- String Comparison ---" << endl;
    string str1 = "Apple";
    string str2 = "Banana";
    string str3 = "Apple";
    
    cout << "str1.compare(str2): " << str1.compare(str2) << endl;
    cout << "str1.compare(str3): " << str1.compare(str3) << endl;
    cout << "str1 == str3: " << (str1 == str3 ? "True" : "False") << endl;
    cout << "str1 < str2: " << (str1 < str2 ? "True" : "False") << endl;
    
    // 8. Case conversion
    cout << "\n--- Case Conversion ---" << endl;
    string mixed = "Hello World 123";
    string upper = mixed;
    string lower = mixed;
    
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    
    cout << "Original: " << mixed << endl;
    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    
    // 9. String reverse
    cout << "\n--- String Reverse ---" << endl;
    string rev = "Recursion";
    cout << "Original: " << rev << endl;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: " << rev << endl;
    
    // 10. String sorting
    cout << "\n--- String Sorting ---" << endl;
    string unsorted = "programming";
    cout << "Before sort: " << unsorted << endl;
    sort(unsorted.begin(), unsorted.end());
    cout << "After sort: " << unsorted << endl;
    
    // 11. String to number conversion
    cout << "\n--- String to Number Conversion ---" << endl;
    string numStr1 = "12345";
    string numStr2 = "3.14159";
    
    int intVal = stoi(numStr1);
    double doubleVal = stod(numStr2);
    
    cout << "String \"" << numStr1 << "\" to int: " << intVal << endl;
    cout << "String \"" << numStr2 << "\" to double: " << doubleVal << endl;
    
    // Number to string
    int num = 42;
    string numToStr = to_string(num);
    cout << "Number " << num << " to string: \"" << numToStr << "\"" << endl;
    
    // 12. Clearing and resizing
    cout << "\n--- Clear and Resize ---" << endl;
    string s6 = "Hello";
    cout << "Before clear: \"" << s6 << "\" (size: " << s6.size() << ")" << endl;
    s6.clear();
    cout << "After clear: \"" << s6 << "\" (size: " << s6.size() << ")" << endl;
    
    s6.resize(10, 'X');
    cout << "After resize(10, 'X'): \"" << s6 << "\"" << endl;
    
    // 13. Practical example - Word count
    cout << "\n--- Practical Example: Word Count ---" << endl;
    string sentence = "The quick brown fox jumps over the lazy dog";
    int wordCount = 1;
    
    for (char c : sentence) {
        if (c == ' ') wordCount++;
    }
    
    cout << "Sentence: " << sentence << endl;
    cout << "Word count: " << wordCount << endl;
    cout << "Character count: " << sentence.length() << endl;
    
    // 14. Palindrome check
    cout << "\n--- Palindrome Check ---" << endl;
    string pal = "racecar";
    string revPal = pal;
    reverse(revPal.begin(), revPal.end());
    
    cout << "String: " << pal << endl;
    cout << "Is palindrome: " << (pal == revPal ? "Yes" : "No") << endl;
    
    // 15. String properties summary
    cout << "\n--- String Properties ---" << endl;
    cout << "1. Dynamic size (grows/shrinks automatically)" << endl;
    cout << "2. Mutable (can be modified)" << endl;
    cout << "3. Random access with operator[]" << endl;
    cout << "4. Rich set of built-in functions" << endl;
    cout << "5. Compatible with C-style strings" << endl;
    
    return 0;
}
