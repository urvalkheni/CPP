#include <iostream>
#include <tuple>
#include <string>
using namespace std;

// Program 5: STL Tuple - Working with multiple heterogeneous values
int main() {
    cout << "=== STL TUPLE DEMONSTRATION ===" << endl;
    
    // 1. Creating tuples
    tuple<int, double, string> student1(101, 85.5, "Alice");
    tuple<string, int, double, char> employee("John", 30, 50000.50, 'M');
    
    // 2. Accessing elements using get
    cout << "\n=== Student Information ===" << endl;
    cout << "ID: " << get<0>(student1) << endl;
    cout << "Marks: " << get<1>(student1) << endl;
    cout << "Name: " << get<2>(student1) << endl;
    
    // 3. Making tuple with make_tuple
    auto student2 = make_tuple(102, 92.3, "Bob");
    
    cout << "\n=== Another Student ===" << endl;
    cout << "ID: " << get<0>(student2) << endl;
    cout << "Marks: " << get<1>(student2) << endl;
    cout << "Name: " << get<2>(student2) << endl;
    
    // 4. Unpacking tuple using tie
    int id;
    double marks;
    string name;
    
    tie(id, marks, name) = student1;
    cout << "\n=== Unpacked Values ===" << endl;
    cout << "ID: " << id << ", Marks: " << marks << ", Name: " << name << endl;
    
    // 5. Ignoring values with ignore
    tie(id, ignore, name) = student2;
    cout << "\n=== Selective Unpacking ===" << endl;
    cout << "ID: " << id << ", Name: " << name << endl;
    
    // 6. Tuple size
    cout << "\nTuple size: " << tuple_size<decltype(student1)>::value << endl;
    
    // 7. Swapping tuples
    auto t1 = make_tuple(1, "First");
    auto t2 = make_tuple(2, "Second");
    
    cout << "\n=== Before Swap ===" << endl;
    cout << "t1: " << get<0>(t1) << ", " << get<1>(t1) << endl;
    cout << "t2: " << get<0>(t2) << ", " << get<1>(t2) << endl;
    
    swap(t1, t2);
    
    cout << "\n=== After Swap ===" << endl;
    cout << "t1: " << get<0>(t1) << ", " << get<1>(t1) << endl;
    cout << "t2: " << get<0>(t2) << ", " << get<1>(t2) << endl;
    
    // 8. Concatenating tuples
    auto tuple1 = make_tuple(1, 2);
    auto tuple2 = make_tuple("Hello", 3.14);
    auto combined = tuple_cat(tuple1, tuple2);
    
    cout << "\n=== Concatenated Tuple ===" << endl;
    cout << get<0>(combined) << ", " << get<1>(combined) << ", ";
    cout << get<2>(combined) << ", " << get<3>(combined) << endl;
    
    // 9. Practical example: Function returning multiple values
    auto divisionResult = [](int a, int b) -> tuple<int, int, bool> {
        if (b == 0) return make_tuple(0, 0, false);
        return make_tuple(a / b, a % b, true);
    };
    
    auto [quotient, remainder, success] = divisionResult(17, 5);
    
    cout << "\n=== Division Example ===" << endl;
    if (success) {
        cout << "17 / 5 = " << quotient << " remainder " << remainder << endl;
    } else {
        cout << "Division by zero error!" << endl;
    }
    
    // 10. Comparing tuples
    auto score1 = make_tuple(85, "Alice");
    auto score2 = make_tuple(92, "Bob");
    
    cout << "\n=== Tuple Comparison ===" << endl;
    if (score1 < score2) {
        cout << "score1 is less than score2" << endl;
    } else {
        cout << "score1 is greater than or equal to score2" << endl;
    }
    
    // 11. Nested tuples
    auto nested = make_tuple(1, make_tuple(2, 3), "Test");
    cout << "\n=== Nested Tuple ===" << endl;
    cout << "First element: " << get<0>(nested) << endl;
    cout << "Nested tuple first: " << get<0>(get<1>(nested)) << endl;
    cout << "Nested tuple second: " << get<1>(get<1>(nested)) << endl;
    cout << "Third element: " << get<2>(nested) << endl;
    
    return 0;
}