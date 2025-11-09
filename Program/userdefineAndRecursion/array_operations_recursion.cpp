#include <iostream>
#include <algorithm>
using namespace std;

// Array Operations using Recursion

// Find sum of array
int arraySum(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + arraySum(arr, n - 1);
}

// Find maximum in array
int arrayMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int maxRest = arrayMax(arr, n - 1);
    return max(arr[n - 1], maxRest);
}

// Find minimum in array
int arrayMin(int arr[], int n) {
    if (n == 1) return arr[0];
    int minRest = arrayMin(arr, n - 1);
    return min(arr[n - 1], minRest);
}

// Linear search
int linearSearch(int arr[], int n, int key) {
    if (n == 0) return -1;
    if (arr[n - 1] == key) return n - 1;
    return linearSearch(arr, n - 1, key);
}

// Binary search (recursive)
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) return binarySearch(arr, low, mid - 1, key);
    else return binarySearch(arr, mid + 1, high, key);
}

// Reverse array
void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

// Check if array is sorted
bool isSorted(int arr[], int n) {
    if (n == 1 || n == 0) return true;
    if (arr[n - 1] < arr[n - 2]) return false;
    return isSorted(arr, n - 1);
}

// Print array
void printArray(int arr[], int n) {
    if (n == 0) return;
    printArray(arr, n - 1);
    cout << arr[n - 1] << " ";
}

// Count occurrences
int countOccurrences(int arr[], int n, int key) {
    if (n == 0) return 0;
    int count = (arr[n - 1] == key) ? 1 : 0;
    return count + countOccurrences(arr, n - 1, key);
}

// Find first occurrence
int firstOccurrence(int arr[], int n, int key, int index = 0) {
    if (index == n) return -1;
    if (arr[index] == key) return index;
    return firstOccurrence(arr, n, key, index + 1);
}

// Find last occurrence
int lastOccurrence(int arr[], int n, int key) {
    if (n == 0) return -1;
    if (arr[n - 1] == key) return n - 1;
    return lastOccurrence(arr, n - 1, key);
}

// Calculate average
double arrayAverage(int arr[], int n) {
    if (n == 0) return 0;
    return (double)arraySum(arr, n) / n;
}

int main() {
    int choice, n;
    
    cout << "=== ARRAY OPERATIONS (RECURSION) ===" << endl;
    cout << "\nEnter array size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\n=== MENU ===" << endl;
    cout << "1. Sum of elements" << endl;
    cout << "2. Maximum element" << endl;
    cout << "3. Minimum element" << endl;
    cout << "4. Linear search" << endl;
    cout << "5. Binary search (sorted array)" << endl;
    cout << "6. Reverse array" << endl;
    cout << "7. Check if sorted" << endl;
    cout << "8. Count occurrences" << endl;
    cout << "9. First and last occurrence" << endl;
    cout << "10. Average of elements" << endl;
    cout << "11. Show all operations" << endl;
    cout << "\nEnter choice (1-11): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "\nSum of array: " << arraySum(arr, n) << endl;
            break;
            
        case 2:
            cout << "\nMaximum element: " << arrayMax(arr, n) << endl;
            break;
            
        case 3:
            cout << "\nMinimum element: " << arrayMin(arr, n) << endl;
            break;
            
        case 4: {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int pos = linearSearch(arr, n, key);
            if (pos != -1) {
                cout << "Element found at index: " << pos << endl;
            } else {
                cout << "Element not found!" << endl;
            }
            break;
        }
        
        case 5: {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            
            // Sort array first
            int sortedArr[n];
            copy(arr, arr + n, sortedArr);
            sort(sortedArr, sortedArr + n);
            
            cout << "Sorted array: ";
            for (int i = 0; i < n; i++) cout << sortedArr[i] << " ";
            cout << endl;
            
            int pos = binarySearch(sortedArr, 0, n - 1, key);
            if (pos != -1) {
                cout << "Element found at index: " << pos << endl;
            } else {
                cout << "Element not found!" << endl;
            }
            break;
        }
        
        case 6:
            cout << "Original array: ";
            printArray(arr, n);
            cout << endl;
            
            reverseArray(arr, 0, n - 1);
            cout << "Reversed array: ";
            printArray(arr, n);
            cout << endl;
            break;
            
        case 7:
            if (isSorted(arr, n)) {
                cout << "Array is sorted in ascending order!" << endl;
            } else {
                cout << "Array is NOT sorted." << endl;
            }
            break;
            
        case 8: {
            int key;
            cout << "Enter element to count: ";
            cin >> key;
            cout << "Occurrences of " << key << ": " << countOccurrences(arr, n, key) << endl;
            break;
        }
        
        case 9: {
            int key;
            cout << "Enter element to find: ";
            cin >> key;
            int first = firstOccurrence(arr, n, key);
            int last = lastOccurrence(arr, n, key);
            
            if (first != -1) {
                cout << "First occurrence at index: " << first << endl;
                cout << "Last occurrence at index: " << last << endl;
            } else {
                cout << "Element not found!" << endl;
            }
            break;
        }
        
        case 10:
            cout << "Average of array: " << arrayAverage(arr, n) << endl;
            break;
            
        case 11:
            cout << "\n--- All Operations ---" << endl;
            cout << "Array: ";
            printArray(arr, n);
            cout << endl;
            
            cout << "Sum: " << arraySum(arr, n) << endl;
            cout << "Maximum: " << arrayMax(arr, n) << endl;
            cout << "Minimum: " << arrayMin(arr, n) << endl;
            cout << "Average: " << arrayAverage(arr, n) << endl;
            cout << "Is sorted: " << (isSorted(arr, n) ? "Yes" : "No") << endl;
            
            reverseArray(arr, 0, n - 1);
            cout << "Reversed: ";
            printArray(arr, n);
            cout << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== RECURSION PROPERTIES ===" << endl;
    cout << "✓ All operations use divide-and-conquer" << endl;
    cout << "✓ Base case prevents infinite recursion" << endl;
    cout << "✓ Time complexity varies by operation" << endl;
    cout << "✓ Space complexity: O(n) for recursion stack" << endl;
    
    return 0;
}
