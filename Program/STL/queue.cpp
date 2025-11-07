#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    cout << "=== ENHANCED QUEUE OPERATIONS ===" << endl;
    
    // 1. Basic push operations
    cout << "\n--- Building Queue ---" << endl;
    queue<int> q;
    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}
    
    cout << "Queue built with elements: 1, 2, 4 (front to back)" << endl;
    cout << "Current size: " << q.size() << endl;
    
    // 2. Accessing front and back
    cout << "\n--- Accessing Elements ---" << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    
    // 3. Modifying back element
    cout << "\n--- Modifying Back Element ---" << endl;
    cout << "Adding 5 to back element..." << endl;
    q.back() += 5;
    cout << "New back element: " << q.back() << endl;
    
    // 4. Pop operation
    cout << "\n--- Pop Operation ---" << endl;
    cout << "Front before pop: " << q.front() << endl;
    q.pop();  // Removes front element
    cout << "Front after pop: " << q.front() << endl;
    cout << "New size: " << q.size() << endl;
    
    // 5. Display all elements
    cout << "\n--- Displaying All Elements ---" << endl;
    queue<int> tempQueue = q;  // Copy to preserve original
    cout << "Elements from front to back: ";
    while(!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
    
    // 6. Empty check
    cout << "\n--- Empty Check ---" << endl;
    cout << "Is queue empty: " << (q.empty() ? "Yes" : "No") << endl;
    cout << "Current size: " << q.size() << endl;
    
    // 7. Swap operation
    cout << "\n--- Swap Operation ---" << endl;
    queue<int> q1, q2;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    
    q2.push(100);
    q2.push(200);
    
    cout << "q1 size before swap: " << q1.size() << ", front: " << q1.front() << endl;
    cout << "q2 size before swap: " << q2.size() << ", front: " << q2.front() << endl;
    
    q1.swap(q2);
    
    cout << "q1 size after swap: " << q1.size() << ", front: " << q1.front() << endl;
    cout << "q2 size after swap: " << q2.size() << ", front: " << q2.front() << endl;
    
    // 8. Practical example - Customer service queue
    cout << "\n--- Practical Example: Customer Service ---" << endl;
    queue<string> customerQueue;
    customerQueue.push("Customer 1");
    customerQueue.push("Customer 2");
    customerQueue.push("Customer 3");
    customerQueue.push("Customer 4");
    
    cout << "Customers in queue: " << customerQueue.size() << endl;
    cout << "Now serving: " << customerQueue.front() << endl;
    
    int served = 0;
    while(!customerQueue.empty()) {
        cout << "Serving: " << customerQueue.front() << endl;
        customerQueue.pop();
        served++;
    }
    cout << "Total customers served: " << served << endl;
    
    // 9. Queue vs Stack comparison
    cout << "\n--- Queue Properties (FIFO) ---" << endl;
    cout << "1. First In First Out (FIFO) structure" << endl;
    cout << "2. Operations: push(), pop(), front(), back(), size(), empty(), swap()" << endl;
    cout << "3. Access to both front and back elements" << endl;
    cout << "4. Pop removes from front, Push adds to back" << endl;
    cout << "5. No random access or iterators" << endl;
    
    // 10. Performance characteristics
    cout << "\n--- Performance ---" << endl;
    cout << "All operations (push, pop, front, back) are O(1)" << endl;
}

int main(){
    explainQueue();
    return 0;
}