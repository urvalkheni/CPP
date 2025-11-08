#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <functional>
#include <iterator>
using namespace std;

int main() {
    cout << "=== ENHANCED STL ALGORITHMS DEMO ===" << endl;
    
    // 1. Sample data
    vector<int> numbers = {5, 2, 8, 1, 9, 3, 7, 4, 6, 2, 8};
    vector<string> words = {"apple", "banana", "cherry", "date", "elderberry"};
    
    cout << "\nOriginal numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // 2. SORTING ALGORITHMS
    cout << "\n=== SORTING ALGORITHMS ===" << endl;
    
    vector<int> sorted_nums = numbers;
    sort(sorted_nums.begin(), sorted_nums.end());
    cout << "sort() - Ascending: ";
    for (int n : sorted_nums) cout << n << " ";
    cout << endl;
    
    sort(sorted_nums.begin(), sorted_nums.end(), greater<int>());
    cout << "sort() - Descending: ";
    for (int n : sorted_nums) cout << n << " ";
    cout << endl;
    
    // Partial sort
    vector<int> partial = numbers;
    partial_sort(partial.begin(), partial.begin() + 4, partial.end());
    cout << "partial_sort() - First 4 sorted: ";
    for (int n : partial) cout << n << " ";
    cout << endl;
    
    // Stable sort (maintains relative order)
    vector<pair<int, char>> pairs = {{5,'a'}, {3,'b'}, {5,'c'}, {3,'d'}};
    stable_sort(pairs.begin(), pairs.end());
    cout << "stable_sort() on pairs: ";
    for (auto p : pairs) cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;
    
    // 3. SEARCHING ALGORITHMS
    cout << "\n=== SEARCHING ALGORITHMS ===" << endl;
    
    // Linear search with find
    auto it = find(numbers.begin(), numbers.end(), 7);
    if (it != numbers.end()) {
        cout << "find() - Found 7 at index: " << distance(numbers.begin(), it) << endl;
    }
    
    // Find first occurrence
    auto findIt = find(numbers.begin(), numbers.end(), 2);
    cout << "find() - First 2 at index: " << distance(numbers.begin(), findIt) << endl;
    
    // Binary search (requires sorted data)
    vector<int> sorted_for_search = numbers;
    sort(sorted_for_search.begin(), sorted_for_search.end());
    cout << "Sorted for binary_search: ";
    for (int n : sorted_for_search) cout << n << " ";
    cout << endl;
    
    bool found = binary_search(sorted_for_search.begin(), sorted_for_search.end(), 7);
    cout << "binary_search() for 7: " << (found ? "Found" : "Not found") << endl;
    
    // Lower bound and upper bound
    auto lb = lower_bound(sorted_for_search.begin(), sorted_for_search.end(), 5);
    auto ub = upper_bound(sorted_for_search.begin(), sorted_for_search.end(), 5);
    cout << "lower_bound(5) index: " << distance(sorted_for_search.begin(), lb) << endl;
    cout << "upper_bound(5) index: " << distance(sorted_for_search.begin(), ub) << endl;
    
    // Equal range
    auto range = equal_range(sorted_for_search.begin(), sorted_for_search.end(), 8);
    cout << "equal_range(8): [" << distance(sorted_for_search.begin(), range.first) 
         << ", " << distance(sorted_for_search.begin(), range.second) << ")" << endl;
    
    // 4. COUNTING ALGORITHMS
    cout << "\n=== COUNTING ALGORITHMS ===" << endl;
    
    vector<int> test_data = {1, 2, 3, 2, 4, 2, 5};
    int count_2 = count(test_data.begin(), test_data.end(), 2);
    cout << "count() - Occurrences of 2: " << count_2 << endl;
    
    int count_even = count_if(test_data.begin(), test_data.end(), [](int n) { return n % 2 == 0; });
    cout << "count_if() - Even numbers: " << count_even << endl;
    
    // 5. TRANSFORMATION ALGORITHMS
    cout << "\n=== TRANSFORMATION ALGORITHMS ===" << endl;
    
    vector<int> doubled(numbers.size());
    transform(numbers.begin(), numbers.end(), doubled.begin(), [](int n) { return n * 2; });
    cout << "transform() - Doubled: ";
    for (int n : doubled) cout << n << " ";
    cout << endl;
    
    // Transform with two inputs
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {10, 20, 30, 40};
    vector<int> sums(4);
    transform(a.begin(), a.end(), b.begin(), sums.begin(), plus<int>());
    cout << "transform() - Sum of two vectors: ";
    for (int n : sums) cout << n << " ";
    cout << endl;
    
    // 6. NUMERIC ALGORITHMS
    cout << "\n=== NUMERIC ALGORITHMS ===" << endl;
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "accumulate() - Sum: " << sum << endl;
    
    int product = accumulate(numbers.begin(), numbers.end(), 1, multiplies<int>());
    cout << "accumulate() - Product: " << product << endl;
    
    // Inner product
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    int dot_product = inner_product(v1.begin(), v1.end(), v2.begin(), 0);
    cout << "inner_product() - Dot product: " << dot_product << endl;
    
    // Partial sum
    vector<int> partial_sums(numbers.size());
    partial_sum(numbers.begin(), numbers.end(), partial_sums.begin());
    cout << "partial_sum(): ";
    for (int n : partial_sums) cout << n << " ";
    cout << endl;
    
    // 7. MIN/MAX ALGORITHMS
    cout << "\n=== MIN/MAX ALGORITHMS ===" << endl;
    
    auto min_it = min_element(numbers.begin(), numbers.end());
    auto max_it = max_element(numbers.begin(), numbers.end());
    cout << "min_element(): " << *min_it << " at index " << distance(numbers.begin(), min_it) << endl;
    cout << "max_element(): " << *max_it << " at index " << distance(numbers.begin(), max_it) << endl;
    
    auto minmax_pair = minmax_element(numbers.begin(), numbers.end());
    cout << "minmax_element() - Min: " << *minmax_pair.first 
         << ", Max: " << *minmax_pair.second << endl;
    
    cout << "min(5, 10): " << min(5, 10) << endl;
    cout << "max(5, 10): " << max(5, 10) << endl;
    
    // 8. MODIFYING ALGORITHMS
    cout << "\n=== MODIFYING ALGORITHMS ===" << endl;
    
    vector<int> modify_test = {1, 2, 3, 4, 5};
    fill(modify_test.begin(), modify_test.end(), 7);
    cout << "fill() with 7: ";
    for (int n : modify_test) cout << n << " ";
    cout << endl;
    
    vector<int> gen_test(5);
    int val = 10;
    generate(gen_test.begin(), gen_test.end(), [&val]() { return val++; });
    cout << "generate() with incrementing: ";
    for (int n : gen_test) cout << n << " ";
    cout << endl;
    
    vector<int> replace_test = {1, 2, 3, 2, 5, 2};
    replace(replace_test.begin(), replace_test.end(), 2, 9);
    cout << "replace() 2 with 9: ";
    for (int n : replace_test) cout << n << " ";
    cout << endl;
    
    vector<int> remove_test = {1, 2, 3, 2, 4, 2, 5};
    auto new_end = remove(remove_test.begin(), remove_test.end(), 2);
    remove_test.erase(new_end, remove_test.end());
    cout << "remove() value 2: ";
    for (int n : remove_test) cout << n << " ";
    cout << endl;
    
    // 9. PERMUTATION ALGORITHMS
    cout << "\n=== PERMUTATION ALGORITHMS ===" << endl;
    
    vector<int> perm = {1, 2, 3};
    cout << "next_permutation() - All permutations of {1,2,3}:" << endl;
    int perm_count = 0;
    do {
        for (int n : perm) cout << n << " ";
        cout << endl;
        perm_count++;
    } while (next_permutation(perm.begin(), perm.end()));
    cout << "Total permutations: " << perm_count << endl;
    
    // 10. SET OPERATIONS (on sorted ranges)
    cout << "\n=== SET OPERATIONS ===" << endl;
    
    vector<int> set1 = {1, 2, 3, 4, 5};
    vector<int> set2 = {3, 4, 5, 6, 7};
    vector<int> result(10);
    
    cout << "Set1: ";
    for (int n : set1) cout << n << " ";
    cout << "\nSet2: ";
    for (int n : set2) cout << n << " ";
    cout << endl;
    
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
    cout << "partition() - even first: ";
    for (int n : part_test) cout << n << " ";
    cout << "\nPartition point at index: " << distance(part_test.begin(), partition_point) << endl;
    
    // 12. HEAP ALGORITHMS
    cout << "\n=== HEAP ALGORITHMS ===" << endl;
    
    vector<int> heap_data = {3, 1, 4, 1, 5, 9, 2, 6};
    make_heap(heap_data.begin(), heap_data.end());
    cout << "make_heap(): ";
    for (int n : heap_data) cout << n << " ";
    cout << "\nTop of heap: " << heap_data.front() << endl;
    
    // 13. UNIQUE
    cout << "\n=== UNIQUE ALGORITHM ===" << endl;
    
    vector<int> unique_test = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    cout << "Before unique(): ";
    for (int n : unique_test) cout << n << " ";
    cout << endl;
    
    auto unique_end = unique(unique_test.begin(), unique_test.end());
    unique_test.erase(unique_end, unique_test.end());
    cout << "After unique(): ";
    for (int n : unique_test) cout << n << " ";
    cout << endl;
    
    cout << "\n=== STL ALGORITHMS SUMMARY ===" << endl;
    cout << "Categories covered: 13+" << endl;
    cout << "✓ Sorting, Searching, Counting" << endl;
    cout << "✓ Transformation, Numeric operations" << endl;
    cout << "✓ Min/Max, Modifying, Permutation" << endl;
    cout << "✓ Set operations, Partition, Heap" << endl;
    cout << "✓ Reverse, Rotate, Unique" << endl;
    
    return 0;
}