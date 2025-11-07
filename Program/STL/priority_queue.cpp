#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainpriority_queue(){
    cout << "=== ENHANCED PRIORITY QUEUE OPERATIONS ===" << endl;
    
    // 1. Max Heap (default)
    cout << "\n--- Max Heap (Default) ---" << endl;
    priority_queue<int> pq;
    pq.push(5);      // {5}
    pq.push(2);      // {5, 2}
    pq.push(8);      // {8, 5, 2}
    pq.emplace(10);  // {10, 8, 5, 2}
    pq.push(3);      // {10, 8, 5, 3, 2}
    
    cout << "Max Heap - Top element (largest): " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;
    
    cout << "Elements in descending order: ";
    priority_queue<int> tempPQ = pq;
    while(!tempPQ.empty()) {
        cout << tempPQ.top() << " ";
        tempPQ.pop();
    }
    cout << endl;
    
    pq.pop();  // Remove 10
    cout << "After pop, top element: " << pq.top() << endl;
    
    // 2. Min Heap
    cout << "\n--- Min Heap ---" << endl;
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(5);      // {5}
    minPQ.push(2);      // {2, 5}
    minPQ.push(8);      // {2, 5, 8}
    minPQ.emplace(10);  // {2, 5, 8, 10}
    minPQ.push(1);      // {1, 2, 5, 8, 10}
    
    cout << "Min Heap - Top element (smallest): " << minPQ.top() << endl;
    cout << "Size: " << minPQ.size() << endl;
    
    cout << "Elements in ascending order: ";
    priority_queue<int, vector<int>, greater<int>> tempMinPQ = minPQ;
    while(!tempMinPQ.empty()) {
        cout << tempMinPQ.top() << " ";
        tempMinPQ.pop();
    }
    cout << endl;
    
    // 3. Priority Queue with pairs (max heap)
    cout << "\n--- Priority Queue with Pairs ---" << endl;
    priority_queue<pair<int, string>> pairPQ;
    pairPQ.push({85, "Alice"});
    pairPQ.push({92, "Bob"});
    pairPQ.push({78, "Charlie"});
    pairPQ.push({95, "David"});
    
    cout << "Student scores (highest first):" << endl;
    while(!pairPQ.empty()) {
        cout << pairPQ.top().second << ": " << pairPQ.top().first << endl;
        pairPQ.pop();
    }
    
    // 4. Custom comparator for min heap with pairs
    cout << "\n--- Custom Comparator (Min Heap for Pairs) ---" << endl;
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> minPairPQ;
    minPairPQ.push({85, "Alice"});
    minPairPQ.push({92, "Bob"});
    minPairPQ.push({78, "Charlie"});
    minPairPQ.push({95, "David"});
    
    cout << "Student scores (lowest first):" << endl;
    while(!minPairPQ.empty()) {
        cout << minPairPQ.top().second << ": " << minPairPQ.top().first << endl;
        minPairPQ.pop();
    }
    
    // 5. Empty check
    cout << "\n--- Empty Check ---" << endl;
    priority_queue<int> emptyPQ;
    cout << "Is priority queue empty: " << (emptyPQ.empty() ? "Yes" : "No") << endl;
    
    emptyPQ.push(10);
    cout << "After adding element, is empty: " << (emptyPQ.empty() ? "Yes" : "No") << endl;
    cout << "Size: " << emptyPQ.size() << endl;
    
    // 6. Swap operation
    cout << "\n--- Swap Operation ---" << endl;
    priority_queue<int> pq1, pq2;
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    
    pq2.push(10);
    pq2.push(20);
    
    cout << "Before swap - pq1 top: " << pq1.top() << ", pq2 top: " << pq2.top() << endl;
    pq1.swap(pq2);
    cout << "After swap - pq1 top: " << pq1.top() << ", pq2 top: " << pq2.top() << endl;
    
    // 7. Practical example: Task scheduling
    cout << "\n--- Practical Example: Task Scheduler ---" << endl;
    priority_queue<pair<int, string>> taskQueue;  // {priority, task_name}
    
    taskQueue.push({1, "Low priority task"});
    taskQueue.push({5, "Critical task"});
    taskQueue.push({3, "Medium priority task"});
    taskQueue.push({4, "High priority task"});
    taskQueue.push({2, "Normal task"});
    
    cout << "Executing tasks by priority:" << endl;
    int taskNum = 1;
    while(!taskQueue.empty()) {
        cout << taskNum << ". [Priority " << taskQueue.top().first << "] " 
             << taskQueue.top().second << endl;
        taskQueue.pop();
        taskNum++;
    }
    
    // 8. Finding k largest elements
    cout << "\n--- Finding K Largest Elements ---" << endl;
    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int k = 3;
    
    priority_queue<int> findLargest;
    for(int num : numbers) {
        findLargest.push(num);
    }
    
    cout << "Array: ";
    for(int num : numbers) cout << num << " ";
    cout << "\n" << k << " largest elements: ";
    for(int i = 0; i < k && !findLargest.empty(); i++) {
        cout << findLargest.top() << " ";
        findLargest.pop();
    }
    cout << endl;
    
    // 9. Priority Queue properties
    cout << "\n--- Priority Queue Properties ---" << endl;
    cout << "1. Implemented using heap data structure" << endl;
    cout << "2. Top element is always max (max heap) or min (min heap)" << endl;
    cout << "3. Push and pop operations are O(log n)" << endl;
    cout << "4. Top operation is O(1)" << endl;
    cout << "5. No iteration through elements" << endl;
    cout << "6. Useful for scheduling, finding k largest/smallest" << endl;
}

int main(){
    explainpriority_queue();
    return 0;
}