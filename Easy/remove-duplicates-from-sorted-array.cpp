#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5};

    // Remove consecutive duplicates
    auto it = std::unique(nums.begin(), nums.end());

    // Erase the extra elements
    nums.erase(it, nums.end());

    // Print the unique elements
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}