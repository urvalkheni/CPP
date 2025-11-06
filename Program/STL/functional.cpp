#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

// Program 12: STL Functional - Function objects and lambdas
int main() {
    cout << "=== STL FUNCTIONAL DEMONSTRATION ===" << endl;
    
    // 1. Basic function objects
    cout << "\n=== Basic Function Objects ===" << endl;
    plus<int> add;
    minus<int> subtract;
    multiplies<int> multiply;
    divides<int> divide;
    modulus<int> mod;
    
    cout << "10 + 5 = " << add(10, 5) << endl;
    cout << "10 - 5 = " << subtract(10, 5) << endl;
    cout << "10 * 5 = " << multiply(10, 5) << endl;
    cout << "10 / 5 = " << divide(10, 5) << endl;
    cout << "10 % 3 = " << mod(10, 3) << endl;
    
    // 2. Comparison function objects
    cout << "\n=== Comparison Function Objects ===" << endl;
    equal_to<int> eq;
    not_equal_to<int> neq;
    greater<int> gt;
    less<int> lt;
    greater_equal<int> gte;
    less_equal<int> lte;
    
    cout << "5 == 5: " << eq(5, 5) << endl;
    cout << "5 != 3: " << neq(5, 3) << endl;
    cout << "10 > 5: " << gt(10, 5) << endl;
    cout << "5 < 10: " << lt(5, 10) << endl;
    
    // 3. Logical function objects
    cout << "\n=== Logical Function Objects ===" << endl;
    logical_and<bool> and_op;
    logical_or<bool> or_op;
    logical_not<bool> not_op;
    
    cout << "true AND false: " << and_op(true, false) << endl;
    cout << "true OR false: " << or_op(true, false) << endl;
    cout << "NOT true: " << not_op(true) << endl;
    
    // 4. Using with algorithms
    cout << "\n=== Using with Algorithms ===" << endl;
    vector<int> nums = {5, 2, 8, 1, 9, 3, 7};
    
    cout << "Original: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    
    // Sort in ascending order
    sort(nums.begin(), nums.end(), less<int>());
    cout << "Sorted (ascending): ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    
    // Sort in descending order
    sort(nums.begin(), nums.end(), greater<int>());
    cout << "Sorted (descending): ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    
    // 5. Lambda functions
    cout << "\n=== Lambda Functions ===" << endl;
    
    auto square = [](int x) { return x * x; };
    cout << "Square of 5: " << square(5) << endl;
    
    auto add_lambda = [](int a, int b) { return a + b; };
    cout << "10 + 20 = " << add_lambda(10, 20) << endl;
    
    // 6. Lambda with capture
    cout << "\n=== Lambda with Capture ===" << endl;
    int multiplier = 3;
    
    auto multiply_by = [multiplier](int x) { return x * multiplier; };
    cout << "5 * " << multiplier << " = " << multiply_by(5) << endl;
    
    // 7. Using lambda with algorithms
    cout << "\n=== Lambda with Algorithms ===" << endl;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Transform: square each element
    vector<int> squares(numbers.size());
    transform(numbers.begin(), numbers.end(), squares.begin(), 
              [](int x) { return x * x; });
    
    cout << "Squares: ";
    for (int x : squares) cout << x << " ";
    cout << endl;
    
    // Count even numbers
    int even_count = count_if(numbers.begin(), numbers.end(), 
                              [](int x) { return x % 2 == 0; });
    cout << "Even numbers count: " << even_count << endl;
    
    // 8. std::function wrapper
    cout << "\n=== std::function Wrapper ===" << endl;
    
    function<int(int, int)> func_add = [](int a, int b) { return a + b; };
    function<int(int, int)> func_mult = [](int a, int b) { return a * b; };
    
    cout << "Using function wrapper:" << endl;
    cout << "Add: " << func_add(10, 5) << endl;
    cout << "Multiply: " << func_mult(10, 5) << endl;
    
    // 9. Bind
    cout << "\n=== Using std::bind ===" << endl;
    
    auto add_10 = bind(plus<int>(), placeholders::_1, 10);
    cout << "Add 10 to 5: " << add_10(5) << endl;
    
    auto multiply_by_5 = bind(multiplies<int>(), placeholders::_1, 5);
    cout << "Multiply 4 by 5: " << multiply_by_5(4) << endl;
    
    // 10. Negate
    cout << "\n=== Negate Function ===" << endl;
    negate<int> neg;
    cout << "Negate of 10: " << neg(10) << endl;
    cout << "Negate of -5: " << neg(-5) << endl;
    
    // 11. Complex lambda example
    cout << "\n=== Complex Lambda Example ===" << endl;
    vector<int> values = {15, 23, 8, 42, 17, 31, 9};
    
    // Find all numbers greater than 20
    cout << "Numbers greater than 20: ";
    for_each(values.begin(), values.end(), [](int x) {
        if (x > 20) cout << x << " ";
    });
    cout << endl;
    
    // 12. Mutable lambda
    cout << "\n=== Mutable Lambda ===" << endl;
    int counter = 0;
    auto increment = [counter]() mutable {
        counter++;
        return counter;
    };
    
    cout << "First call: " << increment() << endl;
    cout << "Second call: " << increment() << endl;
    cout << "Third call: " << increment() << endl;
    cout << "Original counter: " << counter << endl;
    
    return 0;
}