#include <vector>
#include <iostream>

void moveZeroes(std::vector<int>& nums) {
    int nonZeroPos = 0; // Pointer to place the next non-zero element

    // First pass: Move all non-zero elements to the front
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[nonZeroPos++] = nums[i];
        }
    }

    // Second pass: Fill the remaining positions with zeroes
    for (int i = nonZeroPos; i < nums.size(); ++i) {
        nums[i] = 0;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}