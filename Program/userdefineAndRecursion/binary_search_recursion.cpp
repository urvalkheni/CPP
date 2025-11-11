#include <iostream>
#include <vector>
using namespace std;

// Binary Search using Recursion (Enhanced with Vector Support)

// Basic Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) return mid;
    
    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

// Find first occurrence
int findFirstOccurrence(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        // Check if it's the first occurrence
        if (mid == left || arr[mid - 1] != target) {
            return mid;
        }
        return findFirstOccurrence(arr, left, mid - 1, target);
    } else if (arr[mid] > target) {
        return findFirstOccurrence(arr, left, mid - 1, target);
    } else {
        return findFirstOccurrence(arr, mid + 1, right, target);
    }
}

// Find last occurrence
int findLastOccurrence(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        // Check if it's the last occurrence
        if (mid == right || arr[mid + 1] != target) {
            return mid;
        }
        return findLastOccurrence(arr, mid + 1, right, target);
    } else if (arr[mid] > target) {
        return findLastOccurrence(arr, left, mid - 1, target);
    } else {
        return findLastOccurrence(arr, mid + 1, right, target);
    }
}

// Count occurrences
int countOccurrences(int arr[], int n, int target) {
    int first = findFirstOccurrence(arr, 0, n - 1, target);
    if (first == -1) return 0;
    
    int last = findLastOccurrence(arr, 0, n - 1, target);
    return last - first + 1;
}

// Find peak element (greater than neighbors)
int findPeakElement(int arr[], int left, int right, int n) {
    int mid = left + (right - left) / 2;
    
    // Check if mid is peak
    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
        (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
        return mid;
    }
    
    // If left neighbor is greater, search left
    if (mid > 0 && arr[mid - 1] > arr[mid]) {
        return findPeakElement(arr, left, mid - 1, n);
    }
    
    // Otherwise search right
    return findPeakElement(arr, mid + 1, right, n);
}

// Find square root using binary search
int findSquareRoot(int num, int left, int right) {
    if (left > right) return right;
    
    int mid = left + (right - left) / 2;
    long long square = (long long)mid * mid;
    
    if (square == num) return mid;
    
    if (square > num) {
        return findSquareRoot(num, left, mid - 1);
    } else {
        return findSquareRoot(num, mid + 1, right);
    }
}

// Search in rotated sorted array
int searchRotatedArray(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) return mid;
    
    // Check which half is sorted
    if (arr[left] <= arr[mid]) {
        // Left half is sorted
        if (target >= arr[left] && target < arr[mid]) {
            return searchRotatedArray(arr, left, mid - 1, target);
        } else {
            return searchRotatedArray(arr, mid + 1, right, target);
        }
    } else {
        // Right half is sorted
        if (target > arr[mid] && target <= arr[right]) {
            return searchRotatedArray(arr, mid + 1, right, target);
        } else {
            return searchRotatedArray(arr, left, mid - 1, target);
        }
    }
}

int main() {
    int choice;
    
    cout << "=== BINARY SEARCH (RECURSION) ===" << endl;
    cout << "\n1. Basic Binary Search" << endl;
    cout << "2. Find First Occurrence" << endl;
    cout << "3. Find Last Occurrence" << endl;
    cout << "4. Count Occurrences" << endl;
    cout << "5. Find Peak Element" << endl;
    cout << "6. Find Square Root" << endl;
    cout << "7. Search in Rotated Array" << endl;
    cout << "8. Show All Examples" << endl;
    cout << "\nEnter choice (1-8): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
            int n = sizeof(arr) / sizeof(arr[0]);
            int target;
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            
            cout << "Enter target: ";
            cin >> target;
            
            int result = binarySearch(arr, 0, n - 1, target);
            if (result != -1) {
                cout << "Found at index: " << result << endl;
            } else {
                cout << "Not found" << endl;
            }
            break;
        }
        
        case 2: {
            int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6};
            int n = sizeof(arr) / sizeof(arr[0]);
            int target;
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            
            cout << "Enter target: ";
            cin >> target;
            
            int result = findFirstOccurrence(arr, 0, n - 1, target);
            if (result != -1) {
                cout << "First occurrence at index: " << result << endl;
            } else {
                cout << "Not found" << endl;
            }
            break;
        }
        
        case 3: {
            int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6};
            int n = sizeof(arr) / sizeof(arr[0]);
            int target;
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            
            cout << "Enter target: ";
            cin >> target;
            
            int result = findLastOccurrence(arr, 0, n - 1, target);
            if (result != -1) {
                cout << "Last occurrence at index: " << result << endl;
            } else {
                cout << "Not found" << endl;
            }
            break;
        }
        
        case 4: {
            int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6};
            int n = sizeof(arr) / sizeof(arr[0]);
            int target;
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            
            cout << "Enter target: ";
            cin >> target;
            
            int count = countOccurrences(arr, n, target);
            cout << "Count of " << target << ": " << count << endl;
            break;
        }
        
        case 5: {
            int arr[] = {1, 3, 20, 4, 1, 0};
            int n = sizeof(arr) / sizeof(arr[0]);
            
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            
            int peak = findPeakElement(arr, 0, n - 1, n);
            cout << "Peak element: " << arr[peak] << " at index " << peak << endl;
            break;
        }
        
        case 6: {
            int num;
            cout << "Enter number to find square root: ";
            cin >> num;
            
            int result = findSquareRoot(num, 0, num);
            cout << "Square root of " << num << " = " << result << endl;
            break;
        }
        
        case 7: {
            int arr[] = {4, 5, 6, 7, 0, 1, 2};
            int n = sizeof(arr) / sizeof(arr[0]);
            int target;
            
            cout << "Rotated Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            
            cout << "Enter target: ";
            cin >> target;
            
            int result = searchRotatedArray(arr, 0, n - 1, target);
            if (result != -1) {
                cout << "Found at index: " << result << endl;
            } else {
                cout << "Not found" << endl;
            }
            break;
        }
        
        case 8: {
            cout << "\n--- All Examples ---" << endl;
            
            int arr1[] = {2, 5, 8, 12, 16, 23, 38};
            int n1 = sizeof(arr1) / sizeof(arr1[0]);
            cout << "\nArray: ";
            for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
            cout << "\nBinary Search for 12: " << binarySearch(arr1, 0, n1 - 1, 12) << endl;
            
            int arr2[] = {1, 2, 2, 2, 3, 4, 5};
            int n2 = sizeof(arr2) / sizeof(arr2[0]);
            cout << "\nArray with duplicates: ";
            for (int i = 0; i < n2; i++) cout << arr2[i] << " ";
            cout << "\nFirst occurrence of 2: " << findFirstOccurrence(arr2, 0, n2 - 1, 2);
            cout << "\nLast occurrence of 2: " << findLastOccurrence(arr2, 0, n2 - 1, 2);
            cout << "\nCount of 2: " << countOccurrences(arr2, n2, 2) << endl;
            
            cout << "\nSquare root of 25: " << findSquareRoot(25, 0, 25) << endl;
            
            int arr3[] = {4, 5, 6, 7, 0, 1, 2};
            int n3 = sizeof(arr3) / sizeof(arr3[0]);
            cout << "Rotated array search for 0: " << searchRotatedArray(arr3, 0, n3 - 1, 0) << endl;
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== BINARY SEARCH INFO ===" << endl;
    cout << "✓ Works on sorted arrays" << endl;
    cout << "✓ Time Complexity: O(log n)" << endl;
    cout << "✓ Space Complexity: O(log n) for recursion" << endl;
    cout << "✓ Divide and conquer approach" << endl;
    cout << "✓ Much faster than linear search" << endl;
    
    return 0;
}
