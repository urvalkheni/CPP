#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainstack(){
    cout << "=== ENHANCED STACK OPERATIONS ===" << endl;
    
    // 1. Basic push operations
    cout << "\n--- Building Stack ---" << endl;
    stack<int> st;
    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(4);     // {4, 3, 2, 1}
    st.emplace(5);  // {5, 4, 3, 2, 1}
    
    cout << "Stack built with elements: 1, 2, 3, 4, 5 (top to bottom: 5, 4, 3, 2, 1)" << endl;
    cout << "Current size: " << st.size() << endl;
    
    // 2. Accessing top element
    cout << "\n--- Accessing Elements ---" << endl;
    cout << "Top element: " << st.top() << endl;
    cout << "Note: Stack only provides access to top element (st[2] is invalid!)" << endl;

    // 3. Pop operation
    cout << "\n--- Pop Operation ---" << endl;
    cout << "Popping top element..." << endl;
    st.pop();  // Remove 5, now {4, 3, 2, 1}
    cout << "New top element: " << st.top() << endl;
    cout << "New size: " << st.size() << endl;
    
    // 4. Display all elements (by popping)
    cout << "\n--- Displaying All Elements ---" << endl;
    stack<int> tempStack = st;  // Copy to preserve original
    cout << "Elements from top to bottom: ";
    while(!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
    
    // 5. Check if empty
    cout << "\n--- Empty Check ---" << endl;
    cout << "Is stack empty: " << (st.empty() ? "Yes" : "No") << endl;
    cout << "Current size: " << st.size() << endl;

    // 6. Swap operation
    cout << "\n--- Swap Operation ---" << endl;
    stack<int> st1, st2;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    
    st2.push(100);
    st2.push(200);
    
    cout << "st1 size before swap: " << st1.size() << endl;
    cout << "st2 size before swap: " << st2.size() << endl;
    
    st1.swap(st2);
    
    cout << "st1 size after swap: " << st1.size() << endl;
    cout << "st2 size after swap: " << st2.size() << endl;
    cout << "st1 top after swap: " << st1.top() << endl;
    cout << "st2 top after swap: " << st2.top() << endl;
    
    // 7. Practical example - Reverse a string
    cout << "\n--- Practical Example: Reverse String ---" << endl;
    string str = "HELLO";
    stack<char> charStack;
    
    cout << "Original string: " << str << endl;
    for(char ch : str) {
        charStack.push(ch);
    }
    
    cout << "Reversed string: ";
    while(!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;
    
    // 8. Clear stack (pop all elements)
    cout << "\n--- Clearing Stack ---" << endl;
    cout << "Clearing all elements from st..." << endl;
    while(!st.empty()) {
        st.pop();
    }
    cout << "Is stack empty now: " << (st.empty() ? "Yes" : "No") << endl;
    
    // 9. Stack properties summary
    cout << "\n--- Stack Properties (LIFO) ---" << endl;
    cout << "1. Last In First Out (LIFO) structure" << endl;
    cout << "2. Operations: push(), pop(), top(), size(), empty(), swap()" << endl;
    cout << "3. Only top element is accessible" << endl;
    cout << "4. No iterators available" << endl;
}

int main(){
    explainstack();
    return 0;
}