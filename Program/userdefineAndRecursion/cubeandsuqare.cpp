#include <iostream>
using namespace std;

void calculateSquareAndCube(int number, int *square, int *cube) {
    *square = number * number;
    *cube = number * number * number;
}

int main() {
    int number, square, cube;

    cout << "Enter a number: ";
    cin >> number;

    calculateSquareAndCube(number, &square, &cube);

    cout << "Square of " << number << " is: " << square << endl;
    cout << "Cube of " << number << " is: " << cube << endl;

    return 0;
}
