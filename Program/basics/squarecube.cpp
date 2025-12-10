#include <iostream>
#include <cmath>

using namespace std;


int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}


bool isPerfectCube(int num) {
    int root = cbrt(num);
    return (root * root * root == num);
}


void checkNumbers(int N) {
    if (N <= 0) {
        cout << "Range must be positive." << endl;
        return;
    }

    cout << "Perfect Squares satisfying the condition:\n";
    bool foundSquare = false;
    for (int i = 1; i <= N; i++) {
        if (isPerfectSquare(i)) {
            int square = i * i;
            int cube = i * i * i;
            if (sumOfDigits(square) + sumOfDigits(cube) == i) {
                cout << i << " ";
                foundSquare = true;
            }
        }
    }
    if (!foundSquare) cout << "None";

    cout << "\n\nPerfect Cubes satisfying the condition:\n";
    bool foundCube = false;
    for (int i = 1; i <= N; i++) {
        if (isPerfectCube(i)) {
            int square = i * i;
            int cube = i * i * i;
            if (sumOfDigits(square) + sumOfDigits(cube) == i) {
                cout << i << " ";
                foundCube = true;
            }
        }
    }
    if (!foundCube) cout << "None";

    cout << endl;
}


int main() {
    int N;
    cout << "Enter the range (N): ";
    if (!(cin >> N)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    checkNumbers(N);

    return 0;
}
