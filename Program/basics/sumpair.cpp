#include <iostream>
#include <vector>

int divisibleSumPairs(int n, int k, const std::vector<int>& ar) {
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((ar[i] + ar[j]) % k == 0) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int n, k;
    std::cout << "Enter number of elements and divisor: ";
    if (!(std::cin >> n >> k) || n <= 0 || k <= 0) {
        std::cout << "Invalid input. n and k must be positive." << std::endl;
        return 1;
    }
    std::vector<int> ar(n);
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> ar[i])) {
            std::cout << "Invalid element at position " << i << std::endl;
            return 1;
        }
    }

    int result = divisibleSumPairs(n, k, ar);
    std::cout << result << '\n';

    return 0;
}
