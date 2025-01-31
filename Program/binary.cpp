#include <iostream>

void decimalToBinary(int num) {
    if (num == 0) {
        std::cout << "Binary: 0\n";
        return;
    }

    int binary[32]; // Array to store binary digits (for a 32-bit number)
    int index = 0;

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    std::cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        std::cout << binary[i];
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;

    decimalToBinary(num);

    return 0;
}
