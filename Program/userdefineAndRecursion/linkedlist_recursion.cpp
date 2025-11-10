#include <iostream>
using namespace std;

// Linked List Operations using Recursion

struct Node {
    int data;
    Node* next;
};

// Create new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end (recursive)
Node* insertAtEnd(Node* head, int data) {
    if (head == NULL) {
        return createNode(data);
    }
    head->next = insertAtEnd(head->next, data);
    return head;
}

// Display list (recursive)
void displayList(Node* head) {
    if (head == NULL) {
        cout << "NULL" << endl;
        return;
    }
    cout << head->data << " -> ";
    displayList(head->next);
}

// Count nodes (recursive)
int countNodes(Node* head) {
    if (head == NULL) return 0;
    return 1 + countNodes(head->next);
}

// Search element (recursive)
bool searchElement(Node* head, int key) {
    if (head == NULL) return false;
    if (head->data == key) return true;
    return searchElement(head->next, key);
}

// Find maximum (recursive)
int findMax(Node* head) {
    if (head == NULL) return INT_MIN;
    if (head->next == NULL) return head->data;
    
    int maxRest = findMax(head->next);
    return max(head->data, maxRest);
}

// Find minimum (recursive)
int findMin(Node* head) {
    if (head == NULL) return INT_MAX;
    if (head->next == NULL) return head->data;
    
    int minRest = findMin(head->next);
    return min(head->data, minRest);
}

// Sum of all nodes (recursive)
int sumNodes(Node* head) {
    if (head == NULL) return 0;
    return head->data + sumNodes(head->next);
}

// Reverse list (recursive)
Node* reverseList(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    Node* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return rest;
}

// Delete node with given key (recursive)
Node* deleteNode(Node* head, int key) {
    if (head == NULL) return NULL;
    
    if (head->data == key) {
        Node* temp = head->next;
        delete head;
        return temp;
    }
    
    head->next = deleteNode(head->next, key);
    return head;
}

// Get nth node (recursive)
int getNthNode(Node* head, int n) {
    if (head == NULL) return -1;
    if (n == 0) return head->data;
    return getNthNode(head->next, n - 1);
}

// Check if list is sorted (recursive)
bool isSorted(Node* head) {
    if (head == NULL || head->next == NULL) return true;
    
    if (head->data > head->next->data) return false;
    
    return isSorted(head->next);
}

// Find middle element
Node* findMiddle(Node* slow, Node* fast) {
    if (fast == NULL || fast->next == NULL) {
        return slow;
    }
    return findMiddle(slow->next, fast->next->next);
}

// Detect cycle (using Floyd's algorithm concept)
bool hasCycle(Node* slow, Node* fast) {
    if (fast == NULL || fast->next == NULL) return false;
    if (slow == fast) return true;
    return hasCycle(slow->next, fast->next->next);
}

int main() {
    int choice;
    Node* head = NULL;
    
    cout << "=== LINKED LIST OPERATIONS (RECURSION) ===" << endl;
    cout << "\n1. Insert Elements" << endl;
    cout << "2. Display List" << endl;
    cout << "3. Count Nodes" << endl;
    cout << "4. Search Element" << endl;
    cout << "5. Find Maximum" << endl;
    cout << "6. Find Minimum" << endl;
    cout << "7. Sum of Nodes" << endl;
    cout << "8. Reverse List" << endl;
    cout << "9. Delete Node" << endl;
    cout << "10. Get Nth Node" << endl;
    cout << "11. Check if Sorted" << endl;
    cout << "12. Find Middle" << endl;
    cout << "13. Show All Operations" << endl;
    cout << "\nEnter choice (1-13): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            int n, data;
            cout << "How many elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) {
                cin >> data;
                head = insertAtEnd(head, data);
            }
            cout << "List created!" << endl;
            displayList(head);
            break;
        }
        
        case 2:
            if (head == NULL) {
                cout << "List is empty!" << endl;
            } else {
                displayList(head);
            }
            break;
            
        case 3:
            cout << "Number of nodes: " << countNodes(head) << endl;
            break;
            
        case 4: {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            if (searchElement(head, key)) {
                cout << key << " found in list" << endl;
            } else {
                cout << key << " not found" << endl;
            }
            break;
        }
        
        case 5:
            if (head != NULL) {
                cout << "Maximum element: " << findMax(head) << endl;
            }
            break;
            
        case 6:
            if (head != NULL) {
                cout << "Minimum element: " << findMin(head) << endl;
            }
            break;
            
        case 7:
            cout << "Sum of nodes: " << sumNodes(head) << endl;
            break;
            
        case 8:
            head = reverseList(head);
            cout << "List reversed!" << endl;
            displayList(head);
            break;
            
        case 9: {
            int key;
            cout << "Enter element to delete: ";
            cin >> key;
            head = deleteNode(head, key);
            cout << "Updated list: ";
            displayList(head);
            break;
        }
        
        case 10: {
            int n;
            cout << "Enter position (0-based): ";
            cin >> n;
            int value = getNthNode(head, n);
            if (value != -1) {
                cout << "Element at position " << n << ": " << value << endl;
            } else {
                cout << "Invalid position!" << endl;
            }
            break;
        }
        
        case 11:
            if (isSorted(head)) {
                cout << "List is sorted" << endl;
            } else {
                cout << "List is not sorted" << endl;
            }
            break;
            
        case 12:
            if (head != NULL) {
                Node* middle = findMiddle(head, head);
                cout << "Middle element: " << middle->data << endl;
            }
            break;
            
        case 13: {
            // Create sample list
            head = insertAtEnd(head, 10);
            head = insertAtEnd(head, 20);
            head = insertAtEnd(head, 30);
            head = insertAtEnd(head, 40);
            head = insertAtEnd(head, 50);
            
            cout << "\n--- All Operations Demo ---" << endl;
            
            cout << "\nOriginal List: ";
            displayList(head);
            
            cout << "Count: " << countNodes(head) << endl;
            cout << "Sum: " << sumNodes(head) << endl;
            cout << "Max: " << findMax(head) << endl;
            cout << "Min: " << findMin(head) << endl;
            cout << "Search 30: " << (searchElement(head, 30) ? "Found" : "Not Found") << endl;
            cout << "Is Sorted: " << (isSorted(head) ? "Yes" : "No") << endl;
            
            Node* middle = findMiddle(head, head);
            cout << "Middle element: " << middle->data << endl;
            
            cout << "\nReversed List: ";
            head = reverseList(head);
            displayList(head);
            
            cout << "\nAfter deleting 30: ";
            head = deleteNode(head, 30);
            displayList(head);
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== LINKED LIST RECURSION INFO ===" << endl;
    cout << "✓ All operations use recursion" << endl;
    cout << "✓ Insert, delete, search: O(n)" << endl;
    cout << "✓ Reverse: O(n) time, O(n) space" << endl;
    cout << "✓ Base case: NULL or single node" << endl;
    cout << "✓ Dynamic memory allocation" << endl;
    
    return 0;
}
