#include <iostream>
#include <algorithm>
#include <vector>


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        auto it = std::unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        return nums.size();
    }
};