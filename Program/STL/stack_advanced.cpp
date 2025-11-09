#include <iostream>
#include <stack>
using namespace std;

// Stack Advanced Operations and Applications
int main() {
    cout << "=== STACK ADVANCED OPERATIONS ===" << endl;
    
    // 1. Basic Stack Operations
    cout << "\n--- Basic Stack Operations ---" << endl;
    stack<int> s1;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    
    cout << "Stack top: " << s1.top() << endl;
    cout << "Stack size: " << s1.size() << endl;
    
    s1.pop();
    cout << "After pop, top: " << s1.top() << endl;
    
    // 2. Display Stack
    cout << "\n--- Display Stack ---" << endl;
    stack<int> s2 = s1;
    cout << "Stack elements (top to bottom): ";
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
    
    // 3. Emplace
    cout << "\n--- Emplace Operation ---" << endl;
    stack<string> s3;
    s3.emplace("First");
    s3.emplace("Second");
    s3.emplace("Third");
    
    cout << "String stack top: " << s3.top() << endl;
    
    // 4. Empty and Size
    cout << "\n--- Empty and Size ---" << endl;
    cout << "Is s1 empty: " << (s1.empty() ? "Yes" : "No") << endl;
    cout << "Size of s1: " << s1.size() << endl;
    
    // 5. Swap Stacks
    cout << "\n--- Swap Stacks ---" << endl;
    stack<int> sA, sB;
    sA.push(1); sA.push(2); sA.push(3);
    sB.push(10); sB.push(20);
    
    cout << "Before swap:" << endl;
    cout << "sA top: " << sA.top() << ", size: " << sA.size() << endl;
    cout << "sB top: " << sB.top() << ", size: " << sB.size() << endl;
    
    sA.swap(sB);
    
    cout << "After swap:" << endl;
    cout << "sA top: " << sA.top() << ", size: " << sA.size() << endl;
    cout << "sB top: " << sB.top() << ", size: " << sB.size() << endl;
    
    // 6. Reverse a Stack
    cout << "\n--- Reverse a Stack ---" << endl;
    stack<int> original, temp1, temp2;
    original.push(1); original.push(2); original.push(3); original.push(4);
    
    cout << "Original stack: ";
    stack<int> display = original;
    while (!display.empty()) {
        cout << display.top() << " ";
        display.pop();
    }
    cout << endl;
    
    // Reverse using two auxiliary stacks
    while (!original.empty()) {
        temp1.push(original.top());
        original.pop();
    }
    
    while (!temp1.empty()) {
        temp2.push(temp1.top());
        temp1.pop();
    }
    
    while (!temp2.empty()) {
        original.push(temp2.top());
        temp2.pop();
    }
    
    cout << "Reversed stack: ";
    while (!original.empty()) {
        cout << original.top() << " ";
        original.pop();
    }
    cout << endl;
    
    // 7. Balanced Parentheses Check
    cout << "\n--- Balanced Parentheses Check ---" << endl;
    string expr1 = "((()))";
    string expr2 = "((())";
    
    auto checkBalanced = [](string s) -> bool {
        stack<char> st;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                if (st.empty()) return false;
                st.pop();
            }
        }
        return st.empty();
    };
    
    cout << expr1 << " is " << (checkBalanced(expr1) ? "balanced" : "not balanced") << endl;
    cout << expr2 << " is " << (checkBalanced(expr2) ? "balanced" : "not balanced") << endl;
    
    // 8. Next Greater Element
    cout << "\n--- Next Greater Element ---" << endl;
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    stack<int> nge;
    int result[n];
    
    for (int i = n - 1; i >= 0; i--) {
        while (!nge.empty() && nge.top() <= arr[i]) {
            nge.pop();
        }
        
        result[i] = nge.empty() ? -1 : nge.top();
        nge.push(arr[i]);
    }
    
    cout << "Next Greater Elements: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    // 9. Evaluate Postfix Expression
    cout << "\n--- Evaluate Postfix Expression ---" << endl;
    string postfix = "53+82-*";  // (5+3) * (8-2) = 48
    stack<int> evalStack;
    
    cout << "Postfix expression: " << postfix << endl;
    
    for (char c : postfix) {
        if (isdigit(c)) {
            evalStack.push(c - '0');
        } else {
            int op2 = evalStack.top(); evalStack.pop();
            int op1 = evalStack.top(); evalStack.pop();
            
            switch(c) {
                case '+': evalStack.push(op1 + op2); break;
                case '-': evalStack.push(op1 - op2); break;
                case '*': evalStack.push(op1 * op2); break;
                case '/': evalStack.push(op1 / op2); break;
            }
        }
    }
    
    cout << "Result: " << evalStack.top() << endl;
    
    // 10. Stack of Pairs
    cout << "\n--- Stack with Pairs ---" << endl;
    stack<pair<string, int>> undoStack;
    
    undoStack.push({"Action 1", 1});
    undoStack.push({"Action 2", 2});
    undoStack.push({"Action 3", 3});
    
    cout << "Undo Stack (most recent first):" << endl;
    while (!undoStack.empty()) {
        auto action = undoStack.top();
        undoStack.pop();
        cout << action.first << " (ID: " << action.second << ")" << endl;
    }
    
    // 11. Min Stack Concept
    cout << "\n--- Min Stack Concept ---" << endl;
    cout << "Min Stack maintains minimum element at each state" << endl;
    cout << "Uses two stacks: main stack and min stack" << endl;
    cout << "getMin() operation: O(1)" << endl;
    
    // 12. Stack Applications
    cout << "\n--- Stack Applications ---" << endl;
    cout << "1. Function call management (Call Stack)" << endl;
    cout << "2. Expression evaluation and conversion" << endl;
    cout << "3. Backtracking algorithms" << endl;
    cout << "4. Undo/Redo operations" << endl;
    cout << "5. Browser history navigation" << endl;
    cout << "6. Syntax parsing" << endl;
    cout << "7. DFS (Depth First Search)" << endl;
    
    // 13. Properties
    cout << "\n--- Stack Properties ---" << endl;
    cout << "1. LIFO (Last In First Out)" << endl;
    cout << "2. push(): O(1) - Add element" << endl;
    cout << "3. pop(): O(1) - Remove top element" << endl;
    cout << "4. top(): O(1) - Access top element" << endl;
    cout << "5. No random access to elements" << endl;
    cout << "6. Implemented using arrays or linked lists" << endl;
    
    return 0;
}
