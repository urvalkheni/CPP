#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <functional>
using namespace std;

int main() {
    cout << "=== STL ALGORITHMS DEMO ===" << endl;
    
    // 1. Sample data
    vector<int> numbers = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    vector<string> words = {"apple", "banana", "cherry", "date", "elderberry"};
    
    cout << "Original numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // 2. SORTING ALGORITHMS
    cout << "\n=== SORTING ALGORITHMS ===" << endl;
    
    vector<int> sorted_nums = numbers;
    sort(sorted_nums.begin(), sorted_nums.end());
    cout << "Sorted (ascending): ";
    for (int n : sorted_nums) cout << n << " ";
    cout << endl;
    
    sort(sorted_nums.begin(), sorted_nums.end(), greater<int>());
    cout << "Sorted (descending): ";
    for (int n : sorted_nums) cout << n << " ";
    cout << endl;
    
    // 3. SEARCHING ALGORITHMS
    cout << "\n=== SEARCHING ALGORITHMS ===" << endl;
    
    // Linear search
    auto it = find(numbers.begin(), numbers.end(), 7);
    if (it != numbers.end()) {
        cout << "Found 7 at position: " << distance(numbers.begin(), it) << endl;
    }
    
    // Binary search (requires sorted data)
    vector<int> sorted_for_search = numbers;
    sort(sorted_for_search.begin(), sorted_for_search.end());
    bool found = binary_search(sorted_for_search.begin(), sorted_for_search.end(), 7);
    cout << "Binary search for 7: " << (found ? "Found" : "Not found") << endl;
    
    // 4. COUNTING ALGORITHMS
    cout << "\n=== COUNTING ALGORITHMS ===" << endl;
    
    vector<int> test_data = {1, 2, 3, 2, 4, 2, 5};
    int count_2 = count(test_data.begin(), test_data.end(), 2);
    cout << "Count of 2 in test_data: " << count_2 << endl;
    
    int count_even = count_if(test_data.begin(), test_data.end(), [](int n) { return n % 2 == 0; });
    cout << "Count of even numbers: " << count_even << endl;
    
    // 5. TRANSFORMATION ALGORITHMS
    cout << "\n=== TRANSFORMATION ALGORITHMS ===" << endl;
    
    vector<int> doubled(numbers.size());
    transform(numbers.begin(), numbers.end(), doubled.begin(), [](int n) { return n * 2; });
    cout << "Doubled numbers: ";
    for (int n : doubled) cout << n << " ";
    cout << endl;
    
    // 6. NUMERIC ALGORITHMS
    cout << "\n=== NUMERIC ALGORITHMS ===" << endl;
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of numbers: " << sum << endl;
    
    int product = accumulate(numbers.begin(), numbers.end(), 1, multiplies<int>());
    cout << "Product of numbers: " << product << endl;
    
    // 7. MIN/MAX ALGORITHMS
    cout << "\n=== MIN/MAX ALGORITHMS ===" << endl;
    
    auto min_it = min_element(numbers.begin(), numbers.end());
    auto max_it = max_element(numbers.begin(), numbers.end());
    cout << "Minimum element: " << *min_it << endl;
    cout << "Maximum element: " << *max_it << endl;
    
    auto minmax_pair = minmax_element(numbers.begin(), numbers.end());
    cout << "Min: " << *minmax_pair.first << ", Max: " << *minmax_pair.second << endl;
    
    // 8. PERMUTATION ALGORITHMS
    cout << "\n=== PERMUTATION ALGORITHMS ===" << endl;
    
    vector<int> perm = {1, 2, 3};
    cout << "All permutations of {1, 2, 3}:" << endl;
    do {
        for (int n : perm) cout << n << " ";
        cout << endl;
    } while (next_permutation(perm.begin(), perm.end()));
    
    // 9. SET OPERATIONS (on sorted ranges)
    cout << "\n=== SET OPERATIONS ===" << endl;
    
    vector<int> set1 = {1, 2, 3, 4, 5};
    vector<int> set2 = {3, 4, 5, 6, 7};
    vector<int> result(10);
    
    auto end_it = set_intersection(set1.begin(), set1.end(),
                                   set2.begin(), set2.end(),
                                   result.begin());
    result.resize(distance(result.begin(), end_it));
    cout << "Intersection: ";
    for (int n : result) cout << n << " ";
    cout << endl;
    
    // 10. MODIFYING ALGORITHMS
    cout << "\n=== MODIFYING ALGORITHMS ===" << endl;
    
    vector<int> mod_test = {1, 2, 3, 4, 5};
    reverse(mod_test.begin(), mod_test.end());
    cout << "Reversed: ";
    for (int n : mod_test) cout << n << " ";
    cout << endl;
    
    rotate(mod_test.begin(), mod_test.begin() + 2, mod_test.end());
    cout << "Rotated (by 2 positions): ";
    for (int n : mod_test) cout << n << " ";
    cout << endl;
    
    // 11. PARTITION ALGORITHMS
    cout << "\n=== PARTITION ALGORITHMS ===" << endl;
    
    vector<int> part_test = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto partition_point = partition(part_test.begin(), part_test.end(), 
                                    [](int n) { return n % 2 == 0; });
    cout << "Partitioned (even first): ";
    for (int n : part_test) cout << n << " ";
    cout << endl;
    cout << "Partition point at position: " << distance(part_test.begin(), partition_point) << endl;
    
    return 0;
}