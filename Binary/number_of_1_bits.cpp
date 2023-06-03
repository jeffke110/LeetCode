#include <cstdint>
#include <iostream>
//https://leetcode.com/problems/number-of-1-bits/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n != 0) {
            count++;
            n &= (n - 1);
        }

        return count;
    }
};

int main() {
    uint32_t num;
    std::cout << "Enter an unsigned integer: ";
    std::cin >> num;

    Solution solution;
    int result = solution.hammingWeight(num);

    std::cout << "The number of 1 bits is: " << result << std::endl;

    return 0;
}
