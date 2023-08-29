#include <vector>
#include <vector>
#include <iostream>



class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        auto it = std::remove_if(nums.begin(), nums.end(), [&val](int input) { return val == input; } );
        nums.erase(it, nums.end());
        return nums.size();
    }
};