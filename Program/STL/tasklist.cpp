#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

// Generic Task class using templates
template<typename T>
class Task {
public:
    T name;
    int priority;

    Task(T n, int p) : name(n), priority(p) {}

    // Overload < to compare based on priority
    bool operator<(const Task& other) const {
        return priority < other.priority;
    }

    void print() const {
        cout << "Task: " << name << ", Priority: " << priority << endl;
    }
};

// Max-Heap comparator
template <typename T>
struct MaxHeap {
    bool operator()(const Task<T>& a, const Task<T>& b) {
        return a.priority < b.priority;
    }
};

int main() {
    // Priority queue with custom comparator using STL
    priority_queue<Task<string>, vector<Task<string>>, MaxHeap<string>> taskQueue;

    // Add sample tasks (generic, safe names)
    taskQueue.push(Task<string>("Complete Assignment", 2));
    taskQueue.push(Task<string>("Study DSA", 5));
    taskQueue.push(Task<string>("Water Plants", 1));
    taskQueue.push(Task<string>("EncryptedTask", 10));
    // Process tasks by priority
    cout << "Processing tasks by priority:\n";
    while (!taskQueue.empty()) {
        taskQueue.top().print();
        taskQueue.pop();
    }

    return 0;
}