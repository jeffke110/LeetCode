#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        auto iter = std::remove_if(nums.begin(), nums.end(), [](int input){ return input == 0; });
        if(iter != nums.end()){
            std::fill(iter, nums.end(), 0);
        }
    }
};


int main(){
    Solution solution;
    std::vector<int> nums = {1, 0, 0, 2, 3, 4};
    solution.moveZeroes(nums);



}