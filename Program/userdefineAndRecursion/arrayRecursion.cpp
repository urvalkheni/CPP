#include <iostream>
#include <climits>
using namespace std;

// Program 2: Advanced Array Operations using Recursion

// Find maximum element
int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}

// Find minimum element
int findMin(int arr[], int n) {
    if (n == 1) return arr[0];
    return min(arr[n-1], findMin(arr, n-1));
}

// Sum of array elements
int arraySum(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n-1] + arraySum(arr, n-1);
}

// Check if array is sorted
bool isSorted(int arr[], int n) {
    if (n == 1) return true;
    return (arr[n-1] >= arr[n-2]) && isSorted(arr, n-1);
}

// Linear search
int linearSearch(int arr[], int n, int key) {
    if (n == 0) return -1;
    if (arr[n-1] == key) return n-1;
    return linearSearch(arr, n-1, key);
}

// Binary search (recursive)
int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == key) return mid;
    if (arr[mid] > key) return binarySearch(arr, left, mid-1, key);
    return binarySearch(arr, mid+1, right, key);
}

// Print array recursively
void printArray(int arr[], int n) {
    if (n == 0) return;
    printArray(arr, n-1);
    cout << arr[n-1] << " ";
}

// Count occurrences
int countOccurrences(int arr[], int n, int key) {
    if (n == 0) return 0;
    return (arr[n-1] == key ? 1 : 0) + countOccurrences(arr, n-1, key);
}

int main() {
    int n, choice, key;
    
    cout << "=== ADVANCED ARRAY OPERATIONS (RECURSIVE) ===" << endl;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nYour array: ";
    printArray(arr, n);
    cout << endl;
    
    cout << "\nChoose operation:" << endl;
    cout << "1. Find Maximum" << endl;
    cout << "2. Find Minimum" << endl;
    cout << "3. Sum of Elements" << endl;
    cout << "4. Check if Sorted" << endl;
    cout << "5. Linear Search" << endl;
    cout << "6. Binary Search (sorted array)" << endl;
    cout << "7. Count Occurrences" << endl;
    cout << "8. All Statistics" << endl;
    cout << "\nEnter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Maximum element: " << findMax(arr, n) << endl;
            break;
            
        case 2:
            cout << "Minimum element: " << findMin(arr, n) << endl;
            break;
            
        case 3:
            cout << "Sum of elements: " << arraySum(arr, n) << endl;
            break;
            
        case 4:
            if (isSorted(arr, n)) {
                cout << "Array is sorted in ascending order." << endl;
            } else {
                cout << "Array is not sorted." << endl;
            }
            break;
            
        case 5:
            cout << "Enter element to search: ";
            cin >> key;
            {
                int pos = linearSearch(arr, n, key);
                if (pos != -1) {
                    cout << "Element found at index " << pos << endl;
                } else {
                    cout << "Element not found!" << endl;
                }
            }
            break;
            
        case 6:
            cout << "Enter element to search: ";
            cin >> key;
            {
                int pos = binarySearch(arr, 0, n-1, key);
                if (pos != -1) {
                    cout << "Element found at index " << pos << endl;
                } else {
                    cout << "Element not found!" << endl;
                }
            }
            break;
            
        case 7:
            cout << "Enter element to count: ";
            cin >> key;
            cout << "Occurrences: " << countOccurrences(arr, n, key) << endl;
            break;
            
        case 8:
            cout << "\n=== ARRAY STATISTICS ===" << endl;
            cout << "Maximum: " << findMax(arr, n) << endl;
            cout << "Minimum: " << findMin(arr, n) << endl;
            cout << "Sum: " << arraySum(arr, n) << endl;
            cout << "Average: " << (double)arraySum(arr, n) / n << endl;
            cout << "Sorted: " << (isSorted(arr, n) ? "Yes" : "No") << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}