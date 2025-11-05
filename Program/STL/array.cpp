#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

// STL Program 3: Array - Fixed-size array container
int main() {
    cout << "=== STL ARRAY DEMONSTRATION ===" << endl;
    
    // 1. Creating arrays
    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    array<int, 5> arr2;
    arr2.fill(10);  // Fill all elements with 10
    
    // 2. Accessing elements
    cout << "arr1 elements: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "Element at index 2 (using at): " << arr1.at(2) << endl;
    cout << "Front element: " << arr1.front() << endl;
    cout << "Back element: " << arr1.back() << endl;
    
    // 3. Array filled with same value
    cout << "\narr2 (filled with 10): ";
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;
    
    // 4. Size and empty check
    cout << "\nSize of arr1: " << arr1.size() << endl;
    cout << "Max size: " << arr1.max_size() << endl;
    cout << "Is empty: " << (arr1.empty() ? "Yes" : "No") << endl;
    
    // 5. Iterators
    cout << "\nUsing iterators: ";
    for (auto it = arr1.begin(); it != arr1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 6. Reverse iterators
    cout << "Using reverse iterators: ";
    for (auto it = arr1.rbegin(); it != arr1.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 7. Swap arrays
    array<int, 5> arr3 = {10, 20, 30, 40, 50};
    array<int, 5> arr4 = {100, 200, 300, 400, 500};
    
    cout << "\nBefore swap:" << endl;
    cout << "arr3: ";
    for (int x : arr3) cout << x << " ";
    cout << "\narr4: ";
    for (int x : arr4) cout << x << " ";
    cout << endl;
    
    arr3.swap(arr4);
    
    cout << "After swap:" << endl;
    cout << "arr3: ";
    for (int x : arr3) cout << x << " ";
    cout << "\narr4: ";
    for (int x : arr4) cout << x << " ";
    cout << endl;
    
    // 8. Sorting
    array<int, 6> arr5 = {5, 2, 8, 1, 9, 3};
    cout << "\nBefore sorting: ";
    for (int x : arr5) cout << x << " ";
    cout << endl;
    
    sort(arr5.begin(), arr5.end());
    cout << "After sorting: ";
    for (int x : arr5) cout << x << " ";
    cout << endl;
    
    // 9. Binary search (on sorted array)
    bool found = binary_search(arr5.begin(), arr5.end(), 8);
    cout << "\nIs 8 present? " << (found ? "Yes" : "No") << endl;
    
    // 10. Find min and max
    auto min_elem = *min_element(arr5.begin(), arr5.end());
    auto max_elem = *max_element(arr5.begin(), arr5.end());
    cout << "Minimum element: " << min_elem << endl;
    cout << "Maximum element: " << max_elem << endl;
    
    // 11. Get raw pointer to data
    int* ptr = arr5.data();
    cout << "\nAccessing via raw pointer: " << ptr[0] << ", " << ptr[1] << endl;
    
    // 12. Practical example: Student marks
    cout << "\n=== STUDENT MARKS EXAMPLE ===" << endl;
    array<int, 5> marks = {85, 92, 78, 95, 88};
    
    cout << "Student marks: ";
    for (int mark : marks) cout << mark << " ";
    cout << endl;
    
    int total = 0;
    for (int mark : marks) {
        total += mark;
    }
    double average = static_cast<double>(total) / marks.size();
    
    cout << "Total marks: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Highest mark: " << *max_element(marks.begin(), marks.end()) << endl;
    cout << "Lowest mark: " << *min_element(marks.begin(), marks.end()) << endl;
    
    return 0;
}