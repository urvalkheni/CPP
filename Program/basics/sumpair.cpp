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
    std::cin >> n >> k;
    std::vector<int> ar(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> ar[i];
    }

    int result = divisibleSumPairs(n, k, ar);
    std::cout << result << '\n';

    return 0;
}
