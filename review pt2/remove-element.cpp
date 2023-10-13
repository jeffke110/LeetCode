
#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        auto it = std::remove_if(nums.begin(), nums.end(), [&val](int a){ return  a == val; });
        nums.erase(it, nums.end());
        return nums.size();


    }
};