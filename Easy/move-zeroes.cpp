#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        

        auto it = std::remove_if(nums.begin(), nums.end(), [](int input){ return input == 0; });
        int  index = std::distance(nums.begin(), it);
        for(int i = index; i < nums.size(); i++){
            nums[i] = 0;
        }

    }
};