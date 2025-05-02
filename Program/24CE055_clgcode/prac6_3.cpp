#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Read sizes of the arrays
    cout << "Enter the size of the first sorted array: ";
    cin >> n1;
    cout << "Enter the size of the second sorted array: ";
    cin >> n2;

    if (n1 < 0 || n2 < 0) {
        cout << "Array sizes must be non-negative." << endl;
        return 1;
    }

    // Dynamically allocate memory for the arrays
    int* arr1 = new int[n1];
    int* arr2 = new int[n2];

    // Read elements for the first array
    cout << "Enter " << n1 << " sorted elements for the first array: ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    // Read elements for the second array
    cout << "Enter " << n2 << " sorted elements for the second array: ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    // Dynamically allocate memory for the merged array
    int* merged = new int[n1 + n2];

    // Merge the two sorted arrays
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    // Display the merged sorted array
    cout << "Merged sorted array: ";
    for (int idx = 0; idx < n1 + n2; ++idx) {
        cout << merged[idx] << " ";
    }
    cout << "\n";

    // Deallocate the dynamic memory
    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    // Footer
    cout << "\n24CE055 <---> URVAL KHENI\n";

    return 0;
}
