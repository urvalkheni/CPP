#include <iostream>
#include <algorithm>
using namespace std;

// Array STL Algorithms
int main() {
    cout << "=== ARRAY STL ALGORITHMS ===" << endl;
    
    // 1. Sort
    cout << "\n--- Sort ---" << endl;
    int arr1[] = {5, 2, 8, 1, 9, 3, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    cout << "Before sort: ";
    for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;
    
    sort(arr1, arr1 + n1);
    cout << "After sort (ascending): ";
    for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;
    
    sort(arr1, arr1 + n1, greater<int>());
    cout << "After sort (descending): ";
    for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;
    
    // 2. Binary Search
    cout << "\n--- Binary Search ---" << endl;
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    if (binary_search(arr2, arr2 + n2, 5)) {
        cout << "5 found in array" << endl;
    }
    
    if (!binary_search(arr2, arr2 + n2, 15)) {
        cout << "15 not found in array" << endl;
    }
    
    // 3. Lower and Upper Bound
    cout << "\n--- Lower/Upper Bound ---" << endl;
    int arr3[] = {1, 2, 2, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    int* lb = lower_bound(arr3, arr3 + n3, 2);
    cout << "Lower bound of 2: index " << (lb - arr3) << endl;
    
    int* ub = upper_bound(arr3, arr3 + n3, 2);
    cout << "Upper bound of 2: index " << (ub - arr3) << endl;
    
    // 4. Reverse
    cout << "\n--- Reverse ---" << endl;
    int arr4[] = {1, 2, 3, 4, 5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    
    cout << "Before reverse: ";
    for (int i = 0; i < n4; i++) cout << arr4[i] << " ";
    cout << endl;
    
    reverse(arr4, arr4 + n4);
    cout << "After reverse: ";
    for (int i = 0; i < n4; i++) cout << arr4[i] << " ";
    cout << endl;
    
    // 5. Min and Max Element
    cout << "\n--- Min/Max Element ---" << endl;
    int arr5[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    
    int* minPtr = min_element(arr5, arr5 + n5);
    int* maxPtr = max_element(arr5, arr5 + n5);
    
    cout << "Array: ";
    for (int i = 0; i < n5; i++) cout << arr5[i] << " ";
    cout << endl;
    
    cout << "Min element: " << *minPtr << " at index " << (minPtr - arr5) << endl;
    cout << "Max element: " << *maxPtr << " at index " << (maxPtr - arr5) << endl;
    
    // 6. Count
    cout << "\n--- Count ---" << endl;
    int arr6[] = {1, 2, 3, 2, 4, 2, 5};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    
    int cnt = count(arr6, arr6 + n6, 2);
    cout << "Count of 2: " << cnt << endl;
    
    // 7. Find
    cout << "\n--- Find ---" << endl;
    int arr7[] = {1, 2, 3, 4, 5};
    int n7 = sizeof(arr7) / sizeof(arr7[0]);
    
    int* found = find(arr7, arr7 + n7, 3);
    if (found != arr7 + n7) {
        cout << "3 found at index " << (found - arr7) << endl;
    }
    
    // 8. Unique (remove consecutive duplicates)
    cout << "\n--- Unique ---" << endl;
    int arr8[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};
    int n8 = sizeof(arr8) / sizeof(arr8[0]);
    
    cout << "Before unique: ";
    for (int i = 0; i < n8; i++) cout << arr8[i] << " ";
    cout << endl;
    
    int* newEnd = unique(arr8, arr8 + n8);
    int newSize = newEnd - arr8;
    
    cout << "After unique: ";
    for (int i = 0; i < newSize; i++) cout << arr8[i] << " ";
    cout << endl;
    
    // 9. Rotate
    cout << "\n--- Rotate ---" << endl;
    int arr9[] = {1, 2, 3, 4, 5};
    int n9 = sizeof(arr9) / sizeof(arr9[0]);
    
    cout << "Before rotate: ";
    for (int i = 0; i < n9; i++) cout << arr9[i] << " ";
    cout << endl;
    
    rotate(arr9, arr9 + 2, arr9 + n9);
    cout << "After rotate by 2: ";
    for (int i = 0; i < n9; i++) cout << arr9[i] << " ";
    cout << endl;
    
    // 10. Fill
    cout << "\n--- Fill ---" << endl;
    int arr10[5];
    fill(arr10, arr10 + 5, 7);
    
    cout << "After fill(7): ";
    for (int i = 0; i < 5; i++) cout << arr10[i] << " ";
    cout << endl;
    
    // 11. Swap
    cout << "\n--- Swap ---" << endl;
    int a = 10, b = 20;
    cout << "Before swap: a=" << a << ", b=" << b << endl;
    
    swap(a, b);
    cout << "After swap: a=" << a << ", b=" << b << endl;
    
    // 12. Next Permutation
    cout << "\n--- Next Permutation ---" << endl;
    int arr11[] = {1, 2, 3};
    int n11 = sizeof(arr11) / sizeof(arr11[0]);
    
    cout << "All permutations:" << endl;
    do {
        for (int i = 0; i < n11; i++) {
            cout << arr11[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr11, arr11 + n11));
    
    // 13. Partition
    cout << "\n--- Partition ---" << endl;
    int arr12[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n12 = sizeof(arr12) / sizeof(arr12[0]);
    
    cout << "Before partition: ";
    for (int i = 0; i < n12; i++) cout << arr12[i] << " ";
    cout << endl;
    
    // Partition even numbers to left
    int* partitionPoint = partition(arr12, arr12 + n12, [](int x) { return x % 2 == 0; });
    
    cout << "After partitioning (even left): ";
    for (int i = 0; i < n12; i++) cout << arr12[i] << " ";
    cout << endl;
    
    // 14. Accumulate (sum)
    cout << "\n--- Accumulate (Sum) ---" << endl;
    int arr13[] = {1, 2, 3, 4, 5};
    int n13 = sizeof(arr13) / sizeof(arr13[0]);
    
    int sum = 0;
    for (int i = 0; i < n13; i++) sum += arr13[i];
    cout << "Sum of array: " << sum << endl;
    
    // 15. Is Sorted
    cout << "\n--- Is Sorted ---" << endl;
    int arr14[] = {1, 2, 3, 4, 5};
    int n14 = sizeof(arr14) / sizeof(arr14[0]);
    
    if (is_sorted(arr14, arr14 + n14)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    
    // 16. Properties
    cout << "\n=== ALGORITHM PROPERTIES ===" << endl;
    cout << "✓ sort(): O(n log n)" << endl;
    cout << "✓ binary_search(): O(log n)" << endl;
    cout << "✓ reverse(): O(n)" << endl;
    cout << "✓ min/max_element(): O(n)" << endl;
    cout << "✓ unique(): O(n)" << endl;
    cout << "✓ Works with arrays, vectors, etc." << endl;
    
    return 0;
}
