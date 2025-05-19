#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Custom struct for tasks
struct Task {
    int id, priority, time;
    Task(int i, int p, int t) : id(i), priority(p), time(t) {}
};

// Comparator for min-heap based on priority
struct TaskCompare {
    bool operator()(const Task& a, const Task& b) const {
        return a.priority > b.priority || (a.priority == b.priority && a.time > b.time);
    }
};

int main() {
    fastio();
    
    int n; cin >> n;  // number of operations
    priority_queue<Task, vector<Task>, TaskCompare> taskQueue;
    unordered_map<int, Task> taskMap;
    multiset<int> prioritySet;
    map<int, int> freqMap;

    for (int i = 0; i < n; ++i) {
        string op; cin >> op;

        if (op == "ADD") {
            int id, p, t; cin >> id >> p >> t;
            Task task(id, p, t);
            taskQueue.push(task);
            taskMap[id] = task;
            prioritySet.insert(p);
            freqMap[p]++;
        }
        else if (op == "NEXT") {
            if (taskQueue.empty()) {
                cout << "NO TASK\n";
                continue;
            }
            Task next = taskQueue.top();
            taskQueue.pop();

            cout << "Next Task: ID=" << next.id << ", Priority=" << next.priority << ", Time=" << next.time << '\n';
            prioritySet.erase(prioritySet.find(next.priority));
            freqMap[next.priority]--;
            if (freqMap[next.priority] == 0) freqMap.erase(next.priority);
            taskMap.erase(next.id);
        }
        else if (op == "FIND") {
            int id; cin >> id;
            if (taskMap.count(id))
                cout << "Found Task ID=" << id << ", Priority=" << taskMap[id].priority << ", Time=" << taskMap[id].time << '\n';
            else
                cout << "Task ID " << id << " not found\n";
        }
        else if (op == "STATS") {
            if (prioritySet.empty()) {
                cout << "No tasks\n";
                continue;
            }
            cout << "Highest Priority: " << *prioritySet.begin() << '\n';
            cout << "Lowest Priority: " << *prioritySet.rbegin() << '\n';
            cout << "Unique Priorities: " << freqMap.size() << '\n';
        }
    }

    return 0;
}
