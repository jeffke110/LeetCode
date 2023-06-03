#include <cstdint>
#include <iostream>
//https://leetcode.com/problems/reverse-bits/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;

        for (int i = 0; i < 32; i++) {
            reversed = (reversed << 1) | (n & 1);
            n >>= 1;
        }

        return reversed;
    }
};

int main() {
    uint32_t num;
    std::cout << "Enter an unsigned integer: ";
    std::cin >> num;

    Solution solution;
    uint32_t reversed = solution.reverseBits(num);

    std::cout << "Reversed bits: " << reversed << std::endl;

    return 0;
}
