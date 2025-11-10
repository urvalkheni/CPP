#include <iostream>
using namespace std;

// Sorting Algorithms using Recursion

// Bubble Sort (Recursive)
void bubbleSortRecursive(int arr[], int n) {
    if (n == 1) return;
    
    // One pass of bubble sort
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    
    // Recursively sort remaining array
    bubbleSortRecursive(arr, n - 1);
}

// Selection Sort (Recursive)
void selectionSortRecursive(int arr[], int n, int index = 0) {
    if (index == n) return;
    
    // Find minimum in remaining array
    int minIdx = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }
    
    // Swap
    swap(arr[index], arr[minIdx]);
    
    // Recursive call for next index
    selectionSortRecursive(arr, n, index + 1);
}

// Insertion Sort (Recursive)
void insertionSortRecursive(int arr[], int n) {
    if (n <= 1) return;
    
    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);
    
    // Insert last element at correct position
    int last = arr[n - 1];
    int j = n - 2;
    
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

// Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice;
    
    cout << "=== SORTING ALGORITHMS (RECURSION) ===" << endl;
    cout << "\n1. Bubble Sort (Recursive)" << endl;
    cout << "2. Selection Sort (Recursive)" << endl;
    cout << "3. Insertion Sort (Recursive)" << endl;
    cout << "4. Merge Sort" << endl;
    cout << "5. Quick Sort" << endl;
    cout << "6. Compare All Algorithms" << endl;
    cout << "\nEnter choice (1-6): ";
    cin >> choice;
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "\nOriginal array: ";
    printArray(arr, n);
    
    switch(choice) {
        case 1:
            bubbleSortRecursive(arr, n);
            cout << "After Bubble Sort: ";
            printArray(arr, n);
            cout << "Time Complexity: O(n²)" << endl;
            break;
            
        case 2:
            selectionSortRecursive(arr, n);
            cout << "After Selection Sort: ";
            printArray(arr, n);
            cout << "Time Complexity: O(n²)" << endl;
            break;
            
        case 3:
            insertionSortRecursive(arr, n);
            cout << "After Insertion Sort: ";
            printArray(arr, n);
            cout << "Time Complexity: O(n²)" << endl;
            break;
            
        case 4:
            mergeSort(arr, 0, n - 1);
            cout << "After Merge Sort: ";
            printArray(arr, n);
            cout << "Time Complexity: O(n log n)" << endl;
            break;
            
        case 5:
            quickSort(arr, 0, n - 1);
            cout << "After Quick Sort: ";
            printArray(arr, n);
            cout << "Time Complexity: O(n log n) average" << endl;
            break;
            
        case 6: {
            cout << "\n--- Comparing All Algorithms ---" << endl;
            
            int arr1[] = {64, 34, 25, 12, 22, 11, 90};
            int arr2[] = {64, 34, 25, 12, 22, 11, 90};
            int arr3[] = {64, 34, 25, 12, 22, 11, 90};
            int arr4[] = {64, 34, 25, 12, 22, 11, 90};
            int arr5[] = {64, 34, 25, 12, 22, 11, 90};
            
            bubbleSortRecursive(arr1, n);
            cout << "\nBubble Sort: ";
            printArray(arr1, n);
            
            selectionSortRecursive(arr2, n);
            cout << "Selection Sort: ";
            printArray(arr2, n);
            
            insertionSortRecursive(arr3, n);
            cout << "Insertion Sort: ";
            printArray(arr3, n);
            
            mergeSort(arr4, 0, n - 1);
            cout << "Merge Sort: ";
            printArray(arr4, n);
            
            quickSort(arr5, 0, n - 1);
            cout << "Quick Sort: ";
            printArray(arr5, n);
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\n=== SORTING ALGORITHM INFO ===" << endl;
    cout << "✓ All algorithms use recursion" << endl;
    cout << "✓ Bubble, Selection, Insertion: O(n²)" << endl;
    cout << "✓ Merge, Quick: O(n log n)" << endl;
    cout << "✓ Merge Sort: Stable, needs extra space" << endl;
    cout << "✓ Quick Sort: In-place, fastest on average" << endl;
    
    return 0;
}
