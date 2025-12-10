#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>
#include <algorithm>

void miniMaxSum(const std::vector<int>& arr) {
    long long sum = 0;
    int min_val = std::numeric_limits<int>::max();
    int max_val = std::numeric_limits<int>::min();

    for (int num : arr) {
        sum += num;
        min_val = std::min(min_val, num);
        max_val = std::max(max_val, num);
    }

    std::cout << sum - max_val << " " << sum - min_val << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter 5 space-separated numbers: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Error: No input provided." << std::endl;
        return 1;
    }

    std::istringstream stream(input);
    std::vector<int> arr;
    int number;

    while (stream >> number) {
        arr.push_back(number);
    }

    if (arr.size() != 5) {
        std::cout << "Error: Exactly 5 numbers required." << std::endl;
        return 1;
    }

    miniMaxSum(arr);

    return 0;
}
