#include <iostream>
#include <vector>
#include <algorithm>

int jump(std::vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) {
        return 0;
    }
    
    int maxReach = nums[0];
    int steps = 1;
    int lastJumpEnd = nums[0];
    
    for (int i = 1; i < n - 1; ++i) {
        maxReach = std::max(maxReach, i + nums[i]);
        if (i == lastJumpEnd) {
            lastJumpEnd = maxReach;
            steps++;
            if (lastJumpEnd >= n - 1) {
                break;
            }
        }
    }
    
    return steps;
}

int main() {
    std::vector<int> nums = {2, 3, 1, 1, 4};
    std::cout << jump(nums) << std::endl;  // Output: 2
    return 0;
}
