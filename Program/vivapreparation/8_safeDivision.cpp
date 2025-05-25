#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a, b;
    cout << "Enter numerator and denominator: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw runtime_error("Division by zero");
        cout << "Result: " << a / b << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
