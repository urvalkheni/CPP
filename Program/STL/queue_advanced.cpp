#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Queue Advanced Operations
int main() {
    cout << "=== QUEUE ADVANCED OPERATIONS ===" << endl;
    
    // 1. Basic Queue Operations
    cout << "\n--- Basic Queue Operations ---" << endl;
    queue<int> q1;
    
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    
    cout << "Queue front: " << q1.front() << endl;
    cout << "Queue back: " << q1.back() << endl;
    cout << "Queue size: " << q1.size() << endl;
    
    q1.pop();
    cout << "After pop, front: " << q1.front() << endl;
    
    // 2. Display Queue
    cout << "\n--- Display Queue (without modification) ---" << endl;
    queue<int> q2 = q1;
    cout << "Queue elements: ";
    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
    
    // 3. Emplace
    cout << "\n--- Emplace Operation ---" << endl;
    queue<string> q3;
    q3.emplace("First");
    q3.emplace("Second");
    q3.emplace("Third");
    
    cout << "String queue: ";
    queue<string> temp = q3;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    
    // 4. Empty and Size
    cout << "\n--- Empty and Size ---" << endl;
    cout << "Is q1 empty: " << (q1.empty() ? "Yes" : "No") << endl;
    cout << "Size of q1: " << q1.size() << endl;
    
    // 5. Swap Queues
    cout << "\n--- Swap Queues ---" << endl;
    queue<int> qA, qB;
    qA.push(1); qA.push(2); qA.push(3);
    qB.push(10); qB.push(20);
    
    cout << "Before swap:" << endl;
    cout << "qA front: " << qA.front() << ", size: " << qA.size() << endl;
    cout << "qB front: " << qB.front() << ", size: " << qB.size() << endl;
    
    qA.swap(qB);
    
    cout << "After swap:" << endl;
    cout << "qA front: " << qA.front() << ", size: " << qA.size() << endl;
    cout << "qB front: " << qB.front() << ", size: " << qB.size() << endl;
    
    // 6. Priority Queue
    cout << "\n--- Priority Queue ---" << endl;
    priority_queue<int> pq;
    
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(40);
    
    cout << "Priority Queue (max heap): ";
    priority_queue<int> pqCopy = pq;
    while (!pqCopy.empty()) {
        cout << pqCopy.top() << " ";
        pqCopy.pop();
    }
    cout << endl;
    
    // Min Heap Priority Queue
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(30);
    minPQ.push(10);
    minPQ.push(50);
    minPQ.push(20);
    
    cout << "Min Heap: ";
    while (!minPQ.empty()) {
        cout << minPQ.top() << " ";
        minPQ.pop();
    }
    cout << endl;
    
    // 7. Reverse a Queue
    cout << "\n--- Reverse a Queue ---" << endl;
    queue<int> q4;
    q4.push(1); q4.push(2); q4.push(3); q4.push(4); q4.push(5);
    
    cout << "Original queue: ";
    queue<int> q4Copy = q4;
    while (!q4Copy.empty()) {
        cout << q4Copy.front() << " ";
        q4Copy.pop();
    }
    cout << endl;
    
    // Reverse using stack
    stack<int> s;
    while (!q4.empty()) {
        s.push(q4.front());
        q4.pop();
    }
    
    while (!s.empty()) {
        q4.push(s.top());
        s.pop();
    }
    
    cout << "Reversed queue: ";
    while (!q4.empty()) {
        cout << q4.front() << " ";
        q4.pop();
    }
    cout << endl;
    
    // 8. Circular Queue Simulation
    cout << "\n--- Circular Queue Concept ---" << endl;
    const int SIZE = 5;
    int circQueue[SIZE];
    int front = -1, rear = -1;
    
    cout << "Fixed size: " << SIZE << endl;
    cout << "Operations: enqueue(10), enqueue(20), enqueue(30)" << endl;
    cout << "Using array indices: front=" << front << ", rear=" << rear << endl;
    
    // 9. Deque (Double-Ended Queue)
    cout << "\n--- Deque Operations ---" << endl;
    deque<int> dq;
    
    dq.push_back(10);   // Insert at back
    dq.push_back(20);
    dq.push_front(5);   // Insert at front
    dq.push_front(1);
    
    cout << "Deque after push operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;
    
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;
    
    dq.pop_front();
    dq.pop_back();
    
    cout << "After pop_front and pop_back: ";
    for (int x : dq) cout << x << " ";
    cout << endl;
    
    // 10. Practical Example - BFS Simulation
    cout << "\n--- Practical: BFS Level Tracker ---" << endl;
    queue<pair<int, int>> bfsQueue;  // {node, level}
    
    bfsQueue.push({1, 0});
    bfsQueue.push({2, 1});
    bfsQueue.push({3, 1});
    bfsQueue.push({4, 2});
    
    cout << "Node traversal (BFS):" << endl;
    while (!bfsQueue.empty()) {
        auto node = bfsQueue.front();
        bfsQueue.pop();
        cout << "Node: " << node.first << ", Level: " << node.second << endl;
    }
    
    // 11. Queue with Custom Objects
    cout << "\n--- Queue with Pairs ---" << endl;
    queue<pair<string, int>> taskQueue;
    
    taskQueue.push({"Task A", 1});
    taskQueue.push({"Task B", 2});
    taskQueue.push({"Task C", 3});
    
    cout << "Task Queue:" << endl;
    while (!taskQueue.empty()) {
        auto task = taskQueue.front();
        taskQueue.pop();
        cout << task.first << " (Priority: " << task.second << ")" << endl;
    }
    
    // 12. Properties
    cout << "\n--- Queue Properties ---" << endl;
    cout << "1. FIFO (First In First Out)" << endl;
    cout << "2. push(): O(1) - Add at back" << endl;
    cout << "3. pop(): O(1) - Remove from front" << endl;
    cout << "4. front(): O(1) - Access front element" << endl;
    cout << "5. back(): O(1) - Access back element" << endl;
    cout << "6. No random access" << endl;
    cout << "7. Priority Queue uses heap" << endl;
    cout << "8. Deque allows insertion/deletion at both ends" << endl;
    
    return 0;
}
