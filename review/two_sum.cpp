#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Map to store numbers and their indices

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // Check if the complement is in the map
        if (numMap.find(complement) != numMap.end()) {
            // Return the indices of the two numbers
            return { numMap[complement], i };
        }

        // If not found, add the current number and its index to the map
        numMap[nums[i]] = i;
    }

    // If no solution is found
    return {};
}

int main() {
    // Example usage:
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
