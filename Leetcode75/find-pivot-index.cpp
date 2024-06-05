#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        if(nums.empty()){
            return -1;
        }
        int sumLeft = 0;
        int sumRight = std::accumulate(nums.begin(), nums.end(), 0);

        for(int i = 0; i < nums.size(); i++){
            sumRight -= nums[i];
            if(sumLeft == sumRight){
                return i;
            }
            sumLeft += nums[i];

        }
        return -1;
    }
};