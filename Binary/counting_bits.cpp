#include <vector>
#include <iostream>
//https://leetcode.com/problems/counting-bits/
class Solution {
public:
    std::vector<int> countBits(int num) {
        std::vector<int> counts(num + 1, 0);

        for (int i = 1; i <= num; i++) {
            counts[i] = counts[i >> 1] + (i & 1);
        }

        return counts;
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    Solution solution;
    std::vector<int> result = solution.countBits(num);

    std::cout << "Count of bits for numbers 0 to " << num << ":\n";
    for (int i = 0; i <= num; i++) {
        std::cout << i << ": " << result[i] << "\n";
    }

    return 0;
}
