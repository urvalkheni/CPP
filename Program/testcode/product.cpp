#include <iostream>
using namespace std;

int main() {
    double num1, num2, product;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the product
    product = num1 * num2;

    // Display the result
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;

    return 0;
}
