#include <iostream>
#include <cmath>
using namespace std;

// Simple Calculator class
class SimpleCalc {
private:
    float num1, num2;

public:
    // Utility function to take input
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    // Addition
    void add() {
        cout << "Sum: " << num1 + num2 << endl;
    }

    // Subtraction
    void subtract() {
        cout << "Difference: " << num1 - num2 << endl;
    }

    // Multiplication
    void multiply() {
        cout << "Product: " << num1 * num2 << endl;
    }

    // Division
    void divide() {
        if (num2 != 0)
            cout << "Quotient: " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
    }

    // Display results
    void display() {
        add();
        subtract();
        multiply();
        divide();
    }
};

// Scientific Calculator class
class ScientificCalc {
private:
    float num1, num2;

public:
    // Utility function to take input
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    // Power function
    void power() {
        cout << "Power: " << pow(num1, num2) << endl;
    }

    // Square root of first number
    void squareRoot() {
        if (num1 >= 0)
            cout << "Square root of " << num1 << " is: " << sqrt(num1) << endl;
        else
            cout << "Square root of negative number is not real!" << endl;
    }

    // Logarithm of first number
    void logarithm() {
        if (num1 > 0)
            cout << "Logarithm of " << num1 << " is: " << log(num1) << endl;
        else
            cout << "Logarithm is not defined for non-positive numbers!" << endl;
    }

    // Sine of first number (assumed in radians)
    void sine() {
        cout << "Sine of " << num1 << " is: " << sin(num1) << endl;
    }

    // Display results
    void display() {
        power();
        squareRoot();
        logarithm();
        sine();
    }
};

int main() {
    // Simple Calculator object
    SimpleCalc simpleCalc;
    cout << "Simple Calculator:\n";
    simpleCalc.input();
    simpleCalc.display();

    // Scientific Calculator object
    ScientificCalc scientificCalc;
    cout << "\nScientific Calculator:\n";
    scientificCalc.input();
    scientificCalc.display();

    return 0;
}
