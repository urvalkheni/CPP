#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

// Program 9: STL Valarray - Mathematical array operations
int main() {
    cout << "=== STL VALARRAY DEMONSTRATION ===" << endl;
    
    // 1. Creating valarrays
    valarray<int> v1 = {1, 2, 3, 4, 5};
    valarray<int> v2(5, 5);  // 5 elements, all initialized to 5
    valarray<int> v3 = {10, 20, 30, 40, 50};
    
    cout << "\n=== Initial Arrays ===" << endl;
    cout << "v1: ";
    for (int x : v1) cout << x << " ";
    cout << endl;
    
    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    cout << endl;
    
    cout << "v3: ";
    for (int x : v3) cout << x << " ";
    cout << endl;
    
    // 2. Arithmetic operations
    cout << "\n=== Arithmetic Operations ===" << endl;
    valarray<int> sum = v1 + v3;
    cout << "v1 + v3: ";
    for (int x : sum) cout << x << " ";
    cout << endl;
    
    valarray<int> diff = v3 - v1;
    cout << "v3 - v1: ";
    for (int x : diff) cout << x << " ";
    cout << endl;
    
    valarray<int> prod = v1 * v3;
    cout << "v1 * v3: ";
    for (int x : prod) cout << x << " ";
    cout << endl;
    
    // 3. Scalar operations
    cout << "\n=== Scalar Operations ===" << endl;
    valarray<int> scaled = v1 * 10;
    cout << "v1 * 10: ";
    for (int x : scaled) cout << x << " ";
    cout << endl;
    
    valarray<int> added = v1 + 100;
    cout << "v1 + 100: ";
    for (int x : added) cout << x << " ";
    cout << endl;
    
    // 4. Mathematical functions
    cout << "\n=== Mathematical Functions ===" << endl;
    valarray<double> vd = {1.0, 4.0, 9.0, 16.0, 25.0};
    
    cout << "Original: ";
    for (double x : vd) cout << x << " ";
    cout << endl;
    
    valarray<double> sqrtResult = sqrt(vd);
    cout << "Square root: ";
    for (double x : sqrtResult) cout << x << " ";
    cout << endl;
    
    valarray<double> powResult = pow(vd, 2.0);
    cout << "Power of 2: ";
    for (double x : powResult) cout << x << " ";
    cout << endl;
    
    // 5. Aggregate functions
    cout << "\n=== Aggregate Functions ===" << endl;
    cout << "Sum of v1: " << v1.sum() << endl;
    cout << "Min of v1: " << v1.min() << endl;
    cout << "Max of v1: " << v1.max() << endl;
    cout << "Size of v1: " << v1.size() << endl;
    
    // 6. Shift and rotate
    cout << "\n=== Shift and Rotate ===" << endl;
    valarray<int> original = {1, 2, 3, 4, 5};
    
    cout << "Original: ";
    for (int x : original) cout << x << " ";
    cout << endl;
    
    valarray<int> shifted = original.shift(2);
    cout << "Shifted by 2: ";
    for (int x : shifted) cout << x << " ";
    cout << endl;
    
    valarray<int> rotated = original.cshift(2);
    cout << "Circular shift by 2: ";
    for (int x : rotated) cout << x << " ";
    cout << endl;
    
    // 7. Apply function to each element
    cout << "\n=== Apply Function ===" << endl;
    valarray<int> v4 = {1, 2, 3, 4, 5};
    valarray<int> squared = v4.apply([](int x) { return x * x; });
    
    cout << "Original: ";
    for (int x : v4) cout << x << " ";
    cout << endl;
    
    cout << "After apply (square): ";
    for (int x : squared) cout << x << " ";
    cout << endl;
    
    // 8. Slicing
    cout << "\n=== Slicing ===" << endl;
    valarray<int> base = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << "Base array: ";
    for (int x : base) cout << x << " ";
    cout << endl;
    
    // Extract every 2nd element starting from index 1
    slice sl(1, 4, 2);  // start=1, count=4, stride=2
    valarray<int> sliced = base[sl];
    cout << "Sliced (start=1, count=4, stride=2): ";
    for (int x : sliced) cout << x << " ";
    cout << endl;
    
    // 9. Compound assignment
    cout << "\n=== Compound Assignment ===" << endl;
    valarray<int> v5 = {1, 2, 3, 4, 5};
    cout << "Before: ";
    for (int x : v5) cout << x << " ";
    cout << endl;
    
    v5 += 10;
    cout << "After += 10: ";
    for (int x : v5) cout << x << " ";
    cout << endl;
    
    v5 *= 2;
    cout << "After *= 2: ";
    for (int x : v5) cout << x << " ";
    cout << endl;
    
    // 10. Trigonometric functions
    cout << "\n=== Trigonometric Functions ===" << endl;
    valarray<double> angles = {0.0, 3.14159/4, 3.14159/2};
    
    cout << "Angles (radians): ";
    for (double x : angles) cout << x << " ";
    cout << endl;
    
    valarray<double> sines = sin(angles);
    cout << "Sine values: ";
    for (double x : sines) cout << x << " ";
    cout << endl;
    
    valarray<double> cosines = cos(angles);
    cout << "Cosine values: ";
    for (double x : cosines) cout << x << " ";
    cout << endl;
    
    return 0;
}